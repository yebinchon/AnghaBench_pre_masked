
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_info {int max_tmds_clock; } ;
struct dc_crtc_timing {scalar_t__ display_color_depth; int pix_clk_100hz; scalar_t__ pixel_encoding; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dc_crtc_timing*) ;

__attribute__((used)) static void FUNC_1(struct dc_crtc_timing *VAR_2,
      const struct drm_display_info *VAR_3)
{
 int VAR_4;
 if (VAR_2->display_color_depth <= VAR_0)
  return;
 do {
  VAR_4 = VAR_2->pix_clk_100hz / 10;

  if (VAR_2->pixel_encoding == VAR_1)
   VAR_4 /= 2;

  switch (VAR_2->display_color_depth) {
  case 130:
   VAR_4 = (VAR_4 * 30) / 24;
   break;
  case 129:
   VAR_4 = (VAR_4 * 36) / 24;
   break;
  case 128:
   VAR_4 = (VAR_4 * 48) / 24;
   break;
  default:
   return;
  }
  if (VAR_4 <= VAR_3->max_tmds_clock)
   return;
  FUNC_0(VAR_2);

 } while (VAR_2->display_color_depth > VAR_0);

}
