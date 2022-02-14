
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u16 ;
struct TYPE_6__ {int atom_context; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct radeon_crtc {int crtc_id; int v_border; int h_border; } ;
struct drm_display_mode {int crtc_htotal; int crtc_hdisplay; int crtc_hsync_start; int crtc_hsync_end; int crtc_vtotal; int crtc_vdisplay; int crtc_vsync_start; int crtc_vsync_end; int flags; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int args ;
struct TYPE_5__ {void* usAccess; } ;
struct TYPE_7__ {int ucCRTC; TYPE_1__ susModeMiscInfo; int ucOverscanTop; int ucOverscanBottom; int ucOverscanLeft; int ucOverscanRight; void* usV_SyncWidth; void* usV_SyncStart; void* usV_Disp; void* usV_Total; void* usH_SyncWidth; void* usH_SyncStart; void* usH_Disp; void* usH_Total; } ;
typedef TYPE_3__ SET_CRTC_TIMING_PARAMETERS_PS_ALLOCATION ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int VAR_14 ;
 int FUNC_1 (int ,int,int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 struct radeon_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_15,
         struct drm_display_mode *VAR_16)
{
 struct radeon_crtc *VAR_17 = FUNC_4(VAR_15);
 struct drm_device *VAR_18 = VAR_15->dev;
 struct radeon_device *VAR_19 = VAR_18->dev_private;
 SET_CRTC_TIMING_PARAMETERS_PS_ALLOCATION VAR_20;
 int VAR_21 = FUNC_0(VAR_7, VAR_14);
 u16 VAR_22 = 0;

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.usH_Total = FUNC_2(VAR_16->crtc_htotal);
 VAR_20.usH_Disp = FUNC_2(VAR_16->crtc_hdisplay);
 VAR_20.usH_SyncStart = FUNC_2(VAR_16->crtc_hsync_start);
 VAR_20.usH_SyncWidth =
  FUNC_2(VAR_16->crtc_hsync_end - VAR_16->crtc_hsync_start);
 VAR_20.usV_Total = FUNC_2(VAR_16->crtc_vtotal);
 VAR_20.usV_Disp = FUNC_2(VAR_16->crtc_vdisplay);
 VAR_20.usV_SyncStart = FUNC_2(VAR_16->crtc_vsync_start);
 VAR_20.usV_SyncWidth =
  FUNC_2(VAR_16->crtc_vsync_end - VAR_16->crtc_vsync_start);

 VAR_20.ucOverscanRight = VAR_17->h_border;
 VAR_20.ucOverscanLeft = VAR_17->h_border;
 VAR_20.ucOverscanBottom = VAR_17->v_border;
 VAR_20.ucOverscanTop = VAR_17->v_border;

 if (VAR_16->flags & VAR_13)
  VAR_22 |= VAR_5;
 if (VAR_16->flags & VAR_12)
  VAR_22 |= VAR_2;
 if (VAR_16->flags & VAR_8)
  VAR_22 |= VAR_0;
 if (VAR_16->flags & VAR_11)
  VAR_22 |= VAR_4;
 if (VAR_16->flags & VAR_9)
  VAR_22 |= VAR_1;
 if (VAR_16->flags & VAR_10)
  VAR_22 |= VAR_3 | VAR_6;

 VAR_20.susModeMiscInfo.usAccess = FUNC_2(VAR_22);
 VAR_20.ucCRTC = VAR_17->crtc_id;

 FUNC_1(VAR_19->mode_info.atom_context, VAR_21, (uint32_t *)&VAR_20);
}
