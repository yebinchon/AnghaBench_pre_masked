
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int Y_ONLY; scalar_t__ DSC; } ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct dc_crtc_timing {int pix_clk_100hz; int display_color_depth; scalar_t__ pixel_encoding; TYPE_2__ flags; TYPE_1__ dsc_cfg; } ;


 int FUNC_0 (int) ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

uint32_t FUNC_1(
 const struct dc_crtc_timing *VAR_2)
{
 uint32_t VAR_3 = 0;
 uint32_t VAR_4;
 switch (VAR_2->display_color_depth) {
 case 129:
  VAR_3 = 6;
  break;
 case 128:
  VAR_3 = 8;
  break;
 case 133:
  VAR_3 = 10;
  break;
 case 132:
  VAR_3 = 12;
  break;
 case 131:
  VAR_3 = 14;
  break;
 case 130:
  VAR_3 = 16;
  break;
 default:
  break;
 }

 FUNC_0(VAR_3 != 0);

 VAR_4 = VAR_2->pix_clk_100hz / 10;
 VAR_4 *= VAR_3;

 if (VAR_2->flags.Y_ONLY != 1) {

  VAR_4 *= 3;
  if (VAR_2->pixel_encoding == VAR_0)
   VAR_4 /= 2;
  else if (VAR_2->pixel_encoding == VAR_1)
   VAR_4 = VAR_4 * 2 / 3;
 }

 return VAR_4;

}
