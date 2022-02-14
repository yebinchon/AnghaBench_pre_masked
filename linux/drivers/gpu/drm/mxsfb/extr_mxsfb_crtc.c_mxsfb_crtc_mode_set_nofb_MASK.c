
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int bus_flags; } ;
struct TYPE_11__ {TYPE_4__ display_info; } ;
struct TYPE_8__ {TYPE_1__* state; } ;
struct TYPE_9__ {TYPE_2__ crtc; } ;
struct mxsfb_drm_private {scalar_t__ base; TYPE_6__* devdata; int clk; TYPE_5__ connector; TYPE_3__ pipe; } ;
struct drm_display_mode {int crtc_clock; int crtc_vsync_end; int crtc_vsync_start; int flags; int crtc_vtotal; int crtc_hsync_end; int crtc_hsync_start; int crtc_htotal; int hdisplay; int crtc_hdisplay; int crtc_vdisplay; } ;
struct TYPE_12__ {scalar_t__ transfer_count; } ;
struct TYPE_7__ {struct drm_display_mode adjusted_mode; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct mxsfb_drm_private*) ;
 int FUNC_10 (struct mxsfb_drm_private*) ;
 int FUNC_11 (struct mxsfb_drm_private*,int) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct mxsfb_drm_private *VAR_19)
{
 struct drm_display_mode *VAR_20 = &VAR_19->pipe.crtc.state->adjusted_mode;
 const u32 VAR_21 = VAR_19->connector.display_info.bus_flags;
 u32 VAR_22, VAR_23, VAR_24;
 int VAR_25;
 VAR_25 = FUNC_8(VAR_19->base);
 if (VAR_25)
  return;


 FUNC_12(VAR_0, VAR_19->base + VAR_5 + VAR_11);

 VAR_25 = FUNC_10(VAR_19);
 if (VAR_25)
  return;

 FUNC_7(VAR_19->clk, VAR_20->crtc_clock * 1000);

 FUNC_12(FUNC_4(VAR_20->crtc_vdisplay) |
        FUNC_3(VAR_20->crtc_hdisplay),
        VAR_19->base + VAR_19->devdata->transfer_count);

 VAR_23 = VAR_20->crtc_vsync_end - VAR_20->crtc_vsync_start;

 VAR_22 = VAR_14 |
    VAR_17 |
    VAR_18 |
    FUNC_5(VAR_23);
 if (VAR_20->flags & VAR_3)
  VAR_22 |= VAR_15;
 if (VAR_20->flags & VAR_4)
  VAR_22 |= VAR_16;

 if (!(VAR_21 & VAR_1))
  VAR_22 |= VAR_13;






 if (VAR_21 & VAR_2)
  VAR_22 |= VAR_12;

 FUNC_12(VAR_22, VAR_19->base + VAR_6);

 FUNC_9(VAR_19);


 FUNC_12(VAR_20->crtc_vtotal, VAR_19->base + VAR_7);


 VAR_24 = VAR_20->crtc_hsync_end - VAR_20->crtc_hsync_start;
 FUNC_12(FUNC_11(VAR_19, VAR_24) |
        FUNC_6(VAR_20->crtc_htotal),
        VAR_19->base + VAR_8);

 FUNC_12(FUNC_1(VAR_20->crtc_htotal - VAR_20->crtc_hsync_start) |
        FUNC_2(VAR_20->crtc_vtotal - VAR_20->crtc_vsync_start),
        VAR_19->base + VAR_9);

 FUNC_12(FUNC_0(VAR_20->hdisplay),
        VAR_19->base + VAR_10);
}
