//
//  RNNaverMapView.h
//
//  Created by flask on 18/04/2019.
//  Copyright © 2019 flask. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTComponent.h>
#import <React/RCTBridge.h>

#import <NMapsMap/NMFNaverMapView.h>
#import <NMapsGeometry/NMGLatLng.h>
#import <NMapsMap/NMFMarker.h>
#import <NMapsMap/NMFCameraUpdate.h>
#import <NMapsMap/NMFMapViewDelegate.h>

#import "RCTConvert+NMFMapView.h"

@interface RNNaverMapView : NMFNaverMapView <NMFMapViewDelegate>

@property (nonatomic, weak) RCTBridge *bridge;
@property (nonatomic, copy) RCTBubblingEventBlock onInitialized;
@property (nonatomic, copy) RCTBubblingEventBlock onCameraChange;
@property (nonatomic, copy) RCTBubblingEventBlock onTouch;
@property (nonatomic, copy) RCTBubblingEventBlock onMapClick;

@property (nonatomic, assign) BOOL showsCompass;
@property (nonatomic, assign) BOOL zoomEnabled;
@property (nonatomic, assign) BOOL showsMyLocationButton;

@end
