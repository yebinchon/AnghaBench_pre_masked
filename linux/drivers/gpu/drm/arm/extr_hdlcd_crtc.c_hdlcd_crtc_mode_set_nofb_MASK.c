
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videomode {int vfront_porch; int vback_porch; int vsync_len; int hfront_porch; int hback_porch; int hsync_len; } ;
struct hdlcd_drm_private {int clk; } ;
struct drm_display_mode {int crtc_vsync_start; int crtc_vdisplay; int crtc_vtotal; int crtc_vsync_end; int crtc_hsync_start; int crtc_hdisplay; int crtc_htotal; int crtc_hsync_end; int flags; int crtc_clock; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int) ;
 struct hdlcd_drm_private* FUNC_1 (struct drm_crtc*) ;
 unsigned int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct hdlcd_drm_private*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_18)
{
 struct hdlcd_drm_private *VAR_19 = FUNC_1(VAR_18);
 struct drm_display_mode *VAR_20 = &VAR_18->state->adjusted_mode;
 struct videomode VAR_21;
 unsigned int VAR_22, VAR_23;

 VAR_21.vfront_porch = VAR_20->crtc_vsync_start - VAR_20->crtc_vdisplay;
 VAR_21.vback_porch = VAR_20->crtc_vtotal - VAR_20->crtc_vsync_end;
 VAR_21.vsync_len = VAR_20->crtc_vsync_end - VAR_20->crtc_vsync_start;
 VAR_21.hfront_porch = VAR_20->crtc_hsync_start - VAR_20->crtc_hdisplay;
 VAR_21.hback_porch = VAR_20->crtc_htotal - VAR_20->crtc_hsync_end;
 VAR_21.hsync_len = VAR_20->crtc_hsync_end - VAR_20->crtc_hsync_start;

 VAR_22 = VAR_5 | VAR_4;

 if (VAR_20->flags & VAR_0)
  VAR_22 |= VAR_6;
 if (VAR_20->flags & VAR_1)
  VAR_22 |= VAR_7;


 FUNC_3(VAR_19, VAR_8,
      VAR_3 | VAR_2);

 FUNC_3(VAR_19, VAR_15, VAR_20->crtc_vdisplay - 1);
 FUNC_3(VAR_19, VAR_14, VAR_21.vback_porch - 1);
 FUNC_3(VAR_19, VAR_16, VAR_21.vfront_porch - 1);
 FUNC_3(VAR_19, VAR_17, VAR_21.vsync_len - 1);
 FUNC_3(VAR_19, VAR_10, VAR_20->crtc_hdisplay - 1);
 FUNC_3(VAR_19, VAR_9, VAR_21.hback_porch - 1);
 FUNC_3(VAR_19, VAR_11, VAR_21.hfront_porch - 1);
 FUNC_3(VAR_19, VAR_12, VAR_21.hsync_len - 1);
 FUNC_3(VAR_19, VAR_13, VAR_22);

 VAR_23 = FUNC_2(VAR_18);
 if (VAR_23)
  return;

 FUNC_0(VAR_19->clk, VAR_20->crtc_clock * 1000);
}
