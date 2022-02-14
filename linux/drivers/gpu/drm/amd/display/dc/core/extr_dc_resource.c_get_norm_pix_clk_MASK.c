
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dc_crtc_timing {int pix_clk_100hz; scalar_t__ pixel_encoding; int display_color_depth; } ;


 int FUNC_0 (int ) ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct dc_crtc_timing *VAR_2)
{
 uint32_t VAR_3 = VAR_2->pix_clk_100hz;
 uint32_t VAR_4 = VAR_3;

 if (VAR_2->pixel_encoding == VAR_0)
  VAR_3 /= 2;
 if (VAR_2->pixel_encoding != VAR_1) {
  switch (VAR_2->display_color_depth) {
  case 129:
  case 128:
   VAR_4 = VAR_3;
   break;
  case 132:
   VAR_4 = (VAR_3 * 30) / 24;
   break;
  case 131:
   VAR_4 = (VAR_3 * 36) / 24;
  break;
  case 130:
   VAR_4 = (VAR_3 * 48) / 24;
  break;
  default:
   FUNC_0(0);
  break;
  }
 }
 return VAR_4;
}
