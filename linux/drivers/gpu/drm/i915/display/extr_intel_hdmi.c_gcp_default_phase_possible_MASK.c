
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {unsigned int crtc_hdisplay; unsigned int crtc_htotal; unsigned int crtc_hblank_start; unsigned int crtc_hblank_end; unsigned int crtc_hsync_start; unsigned int crtc_hsync_end; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(int VAR_1,
           const struct drm_display_mode *VAR_2)
{
 unsigned int VAR_3;

 switch (VAR_1) {
 case 30:

  VAR_3 = 4;
  break;
 case 36:

  VAR_3 = 2;
  break;
 case 48:

  VAR_3 = 1;
  break;
 default:

  return 0;
 }

 return VAR_2->crtc_hdisplay % VAR_3 == 0 &&
  VAR_2->crtc_htotal % VAR_3 == 0 &&
  VAR_2->crtc_hblank_start % VAR_3 == 0 &&
  VAR_2->crtc_hblank_end % VAR_3 == 0 &&
  VAR_2->crtc_hsync_start % VAR_3 == 0 &&
  VAR_2->crtc_hsync_end % VAR_3 == 0 &&
  ((VAR_2->flags & VAR_0) == 0 ||
   VAR_2->crtc_htotal/2 % VAR_3 == 0);
}
