
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct radeon_mode_info {TYPE_7__* atom_context; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct drm_display_mode {int crtc_htotal; int crtc_hdisplay; int crtc_hsync_start; int crtc_hsync_end; int crtc_vtotal; int crtc_vdisplay; int crtc_vsync_start; int crtc_vsync_end; int crtc_clock; int clock; int flags; } ;
struct TYPE_14__ {int bios; } ;
struct TYPE_13__ {TYPE_2__* aModeTimings; } ;
struct TYPE_12__ {TYPE_4__* aModeTimings; } ;
struct TYPE_10__ {int usAccess; } ;
struct TYPE_11__ {int usPixClk; TYPE_3__ susModeMiscInfo; int usVSyncWidth; int usVSyncOffset; int usVActive; int usVBlanking_Time; int usHSyncWidth; int usHSyncOffset; int usHActive; int usHBlanking_Time; } ;
struct TYPE_8__ {int usAccess; } ;
struct TYPE_9__ {int usPixelClock; TYPE_1__ susModeMiscInfo; int usCRTC_V_SyncWidth; int usCRTC_V_SyncStart; int usCRTC_V_Disp; int usCRTC_V_Total; int usCRTC_H_SyncWidth; int usCRTC_H_SyncStart; int usCRTC_H_Disp; int usCRTC_H_Total; } ;
typedef TYPE_4__ ATOM_DTD_FORMAT ;
typedef TYPE_5__ ATOM_ANALOG_TV_INFO_V1_2 ;
typedef TYPE_6__ ATOM_ANALOG_TV_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_7__*,int,int *,int*,int*,int*) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct radeon_device *VAR_14, int VAR_15,
    struct drm_display_mode *VAR_16)
{
 struct radeon_mode_info *VAR_17 = &VAR_14->mode_info;
 ATOM_ANALOG_TV_INFO *VAR_18;
 ATOM_ANALOG_TV_INFO_V1_2 *VAR_19;
 ATOM_DTD_FORMAT *VAR_20;
 int VAR_21 = FUNC_0(VAR_6, VAR_5);
 u8 VAR_22, VAR_23;
 u16 VAR_24, VAR_25;

 if (!FUNC_1(VAR_17->atom_context, VAR_21, ((void*)0),
        &VAR_22, &VAR_23, &VAR_24))
  return 0;

 switch (VAR_23) {
 case 1:
  VAR_18 = (ATOM_ANALOG_TV_INFO *)(VAR_17->atom_context->bios + VAR_24);
  if (VAR_15 >= VAR_12)
   return 0;

  VAR_16->crtc_htotal = FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_H_Total);
  VAR_16->crtc_hdisplay = FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_H_Disp);
  VAR_16->crtc_hsync_start = FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_H_SyncStart);
  VAR_16->crtc_hsync_end = FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_H_SyncStart) +
   FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_H_SyncWidth);

  VAR_16->crtc_vtotal = FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_V_Total);
  VAR_16->crtc_vdisplay = FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_V_Disp);
  VAR_16->crtc_vsync_start = FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_V_SyncStart);
  VAR_16->crtc_vsync_end = FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_V_SyncStart) +
   FUNC_2(VAR_18->aModeTimings[VAR_15].usCRTC_V_SyncWidth);

  VAR_16->flags = 0;
  VAR_25 = FUNC_2(VAR_18->aModeTimings[VAR_15].susModeMiscInfo.usAccess);
  if (VAR_25 & VAR_4)
   VAR_16->flags |= VAR_11;
  if (VAR_25 & VAR_2)
   VAR_16->flags |= VAR_10;
  if (VAR_25 & VAR_0)
   VAR_16->flags |= VAR_7;
  if (VAR_25 & VAR_3)
   VAR_16->flags |= VAR_9;
  if (VAR_25 & VAR_1)
   VAR_16->flags |= VAR_8;

  VAR_16->crtc_clock = VAR_16->clock =
   FUNC_2(VAR_18->aModeTimings[VAR_15].usPixelClock) * 10;

  if (VAR_15 == 1) {

   VAR_16->crtc_htotal -= 1;
   VAR_16->crtc_vtotal -= 1;
  }
  break;
 case 2:
  VAR_19 = (ATOM_ANALOG_TV_INFO_V1_2 *)(VAR_17->atom_context->bios + VAR_24);
  if (VAR_15 >= VAR_13)
   return 0;

  VAR_20 = &VAR_19->aModeTimings[VAR_15];
  VAR_16->crtc_htotal = FUNC_2(VAR_20->usHActive) +
   FUNC_2(VAR_20->usHBlanking_Time);
  VAR_16->crtc_hdisplay = FUNC_2(VAR_20->usHActive);
  VAR_16->crtc_hsync_start = FUNC_2(VAR_20->usHActive) +
   FUNC_2(VAR_20->usHSyncOffset);
  VAR_16->crtc_hsync_end = VAR_16->crtc_hsync_start +
   FUNC_2(VAR_20->usHSyncWidth);

  VAR_16->crtc_vtotal = FUNC_2(VAR_20->usVActive) +
   FUNC_2(VAR_20->usVBlanking_Time);
  VAR_16->crtc_vdisplay = FUNC_2(VAR_20->usVActive);
  VAR_16->crtc_vsync_start = FUNC_2(VAR_20->usVActive) +
   FUNC_2(VAR_20->usVSyncOffset);
  VAR_16->crtc_vsync_end = VAR_16->crtc_vsync_start +
   FUNC_2(VAR_20->usVSyncWidth);

  VAR_16->flags = 0;
  VAR_25 = FUNC_2(VAR_20->susModeMiscInfo.usAccess);
  if (VAR_25 & VAR_4)
   VAR_16->flags |= VAR_11;
  if (VAR_25 & VAR_2)
   VAR_16->flags |= VAR_10;
  if (VAR_25 & VAR_0)
   VAR_16->flags |= VAR_7;
  if (VAR_25 & VAR_3)
   VAR_16->flags |= VAR_9;
  if (VAR_25 & VAR_1)
   VAR_16->flags |= VAR_8;

  VAR_16->crtc_clock = VAR_16->clock =
   FUNC_2(VAR_20->usPixClk) * 10;
  break;
 }
 return 1;
}
