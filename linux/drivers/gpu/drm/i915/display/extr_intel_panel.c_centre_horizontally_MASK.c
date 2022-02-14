
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int crtc_hsync_end; int crtc_hsync_start; int crtc_hblank_end; int crtc_hblank_start; int crtc_hdisplay; } ;



__attribute__((used)) static void
FUNC_0(struct drm_display_mode *VAR_0,
      int VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;


 VAR_5 = VAR_0->crtc_hsync_end - VAR_0->crtc_hsync_start;
 VAR_4 = VAR_0->crtc_hblank_end - VAR_0->crtc_hblank_start;
 VAR_3 = (VAR_4 - VAR_5 + 1) / 2;

 VAR_2 = (VAR_0->crtc_hdisplay - VAR_1 + 1) / 2;
 VAR_2 += VAR_2 & 1;

 VAR_0->crtc_hdisplay = VAR_1;
 VAR_0->crtc_hblank_start = VAR_1 + VAR_2;
 VAR_0->crtc_hblank_end = VAR_0->crtc_hblank_start + VAR_4;

 VAR_0->crtc_hsync_start = VAR_0->crtc_hblank_start + VAR_3;
 VAR_0->crtc_hsync_end = VAR_0->crtc_hsync_start + VAR_5;
}
