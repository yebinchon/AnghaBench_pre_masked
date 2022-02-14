
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dc_crtc_timing {int pix_clk_100hz; scalar_t__ pixel_encoding; scalar_t__ display_color_depth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static uint32_t FUNC_0(const struct dc_crtc_timing *VAR_4)
{

 uint32_t VAR_5 = VAR_4->pix_clk_100hz;

 if (VAR_4->pixel_encoding == VAR_2)
  VAR_5 /= 2;
 else if (VAR_4->pixel_encoding == VAR_3)
  VAR_5 = VAR_5 * 2 / 3;

 if (VAR_4->display_color_depth == VAR_0)
  VAR_5 = VAR_5 * 10 / 8;
 else if (VAR_4->display_color_depth == VAR_1)
  VAR_5 = VAR_5 * 12 / 8;

 return VAR_5;
}
