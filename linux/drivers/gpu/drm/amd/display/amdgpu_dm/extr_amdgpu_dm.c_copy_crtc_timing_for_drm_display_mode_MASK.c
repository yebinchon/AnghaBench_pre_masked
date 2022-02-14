
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int crtc_vtotal; int crtc_vsync_end; int crtc_vsync_start; int crtc_vblank_end; int crtc_vblank_start; int crtc_hskew; int crtc_htotal; int crtc_hsync_end; int crtc_hsync_start; int crtc_hblank_end; int crtc_hblank_start; int crtc_clock; int crtc_vdisplay; int crtc_hdisplay; } ;



__attribute__((used)) static void
FUNC_0(const struct drm_display_mode *VAR_0,
          struct drm_display_mode *VAR_1)
{
 VAR_1->crtc_hdisplay = VAR_0->crtc_hdisplay;
 VAR_1->crtc_vdisplay = VAR_0->crtc_vdisplay;
 VAR_1->crtc_clock = VAR_0->crtc_clock;
 VAR_1->crtc_hblank_start = VAR_0->crtc_hblank_start;
 VAR_1->crtc_hblank_end = VAR_0->crtc_hblank_end;
 VAR_1->crtc_hsync_start = VAR_0->crtc_hsync_start;
 VAR_1->crtc_hsync_end = VAR_0->crtc_hsync_end;
 VAR_1->crtc_htotal = VAR_0->crtc_htotal;
 VAR_1->crtc_hskew = VAR_0->crtc_hskew;
 VAR_1->crtc_vblank_start = VAR_0->crtc_vblank_start;
 VAR_1->crtc_vblank_end = VAR_0->crtc_vblank_end;
 VAR_1->crtc_vsync_start = VAR_0->crtc_vsync_start;
 VAR_1->crtc_vsync_end = VAR_0->crtc_vsync_end;
 VAR_1->crtc_vtotal = VAR_0->crtc_vtotal;
}
