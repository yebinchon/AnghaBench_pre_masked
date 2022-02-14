
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int crtc_vsync_end; int crtc_vsync_start; int crtc_vblank_end; int crtc_vblank_start; int crtc_vdisplay; } ;



__attribute__((used)) static void
FUNC_0(struct drm_display_mode *VAR_0,
    int VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;


 VAR_5 = VAR_0->crtc_vsync_end - VAR_0->crtc_vsync_start;
 VAR_4 = VAR_0->crtc_vblank_end - VAR_0->crtc_vblank_start;
 VAR_3 = (VAR_4 - VAR_5 + 1) / 2;

 VAR_2 = (VAR_0->crtc_vdisplay - VAR_1 + 1) / 2;

 VAR_0->crtc_vdisplay = VAR_1;
 VAR_0->crtc_vblank_start = VAR_1 + VAR_2;
 VAR_0->crtc_vblank_end = VAR_0->crtc_vblank_start + VAR_4;

 VAR_0->crtc_vsync_start = VAR_0->crtc_vblank_start + VAR_3;
 VAR_0->crtc_vsync_end = VAR_0->crtc_vsync_start + VAR_5;
}
