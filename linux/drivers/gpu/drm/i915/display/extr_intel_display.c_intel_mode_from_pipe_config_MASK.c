
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc_clock; int flags; int crtc_vsync_end; int crtc_vsync_start; int crtc_vtotal; int crtc_vdisplay; int crtc_hsync_end; int crtc_hsync_start; int crtc_htotal; int crtc_hdisplay; } ;
struct TYPE_4__ {TYPE_1__ adjusted_mode; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct drm_display_mode {int vrefresh; int hsync; int clock; int type; int flags; int vsync_end; int vsync_start; int vtotal; int vdisplay; int hsync_end; int hsync_start; int htotal; int hdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_display_mode*) ;
 int FUNC_1 (struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*) ;

void FUNC_3(struct drm_display_mode *VAR_1,
     struct intel_crtc_state *VAR_2)
{
 VAR_1->hdisplay = VAR_2->base.adjusted_mode.crtc_hdisplay;
 VAR_1->htotal = VAR_2->base.adjusted_mode.crtc_htotal;
 VAR_1->hsync_start = VAR_2->base.adjusted_mode.crtc_hsync_start;
 VAR_1->hsync_end = VAR_2->base.adjusted_mode.crtc_hsync_end;

 VAR_1->vdisplay = VAR_2->base.adjusted_mode.crtc_vdisplay;
 VAR_1->vtotal = VAR_2->base.adjusted_mode.crtc_vtotal;
 VAR_1->vsync_start = VAR_2->base.adjusted_mode.crtc_vsync_start;
 VAR_1->vsync_end = VAR_2->base.adjusted_mode.crtc_vsync_end;

 VAR_1->flags = VAR_2->base.adjusted_mode.flags;
 VAR_1->type = VAR_0;

 VAR_1->clock = VAR_2->base.adjusted_mode.crtc_clock;

 VAR_1->hsync = FUNC_0(VAR_1);
 VAR_1->vrefresh = FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
