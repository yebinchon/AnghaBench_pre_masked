
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int flags; int crtc_clock; scalar_t__ crtc_vblank_start; scalar_t__ crtc_vblank_end; scalar_t__ crtc_hblank_start; scalar_t__ crtc_hblank_end; scalar_t__ crtc_vdisplay; scalar_t__ crtc_vsync_end; scalar_t__ crtc_vsync_start; scalar_t__ crtc_hdisplay; scalar_t__ crtc_hsync_end; scalar_t__ crtc_hsync_start; scalar_t__ crtc_vtotal; scalar_t__ crtc_htotal; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct arcpgu_drm_private {int clk; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;


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
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct arcpgu_drm_private*,int ) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct arcpgu_drm_private*,int ,int) ;
 int FUNC_4 (int ,int) ;
 struct arcpgu_drm_private* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_13)
{
 struct arcpgu_drm_private *VAR_14 = FUNC_5(VAR_13);
 struct drm_display_mode *VAR_15 = &VAR_13->state->adjusted_mode;
 u32 VAR_16;

 FUNC_3(VAR_14, VAR_6,
        FUNC_0(VAR_15->crtc_htotal, VAR_15->crtc_vtotal));

 FUNC_3(VAR_14, VAR_7,
        FUNC_0(VAR_15->crtc_hsync_start - VAR_15->crtc_hdisplay,
        VAR_15->crtc_hsync_end - VAR_15->crtc_hdisplay));

 FUNC_3(VAR_14, VAR_10,
        FUNC_0(VAR_15->crtc_vsync_start - VAR_15->crtc_vdisplay,
        VAR_15->crtc_vsync_end - VAR_15->crtc_vdisplay));

 FUNC_3(VAR_14, VAR_4,
        FUNC_0(VAR_15->crtc_hblank_end - VAR_15->crtc_hblank_start,
        VAR_15->crtc_vblank_end - VAR_15->crtc_vblank_start));

 VAR_16 = FUNC_1(VAR_14, VAR_5);

 if (VAR_15->flags & VAR_12)
  VAR_16 |= VAR_2 << VAR_3;
 else
  VAR_16 &= ~(VAR_2 << VAR_3);

 if (VAR_15->flags & VAR_11)
  VAR_16 |= VAR_0 << VAR_1;
 else
  VAR_16 &= ~(VAR_0 << VAR_1);

 FUNC_3(VAR_14, VAR_5, VAR_16);
 FUNC_3(VAR_14, VAR_9, 0);
 FUNC_3(VAR_14, VAR_8, 1);

 FUNC_2(VAR_13);

 FUNC_4(VAR_14->clk, VAR_15->crtc_clock * 1000);
}
