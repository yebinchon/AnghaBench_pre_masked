
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Y_ONLY; } ;
struct dc_crtc_timing {int pixel_encoding; int pix_clk_100hz; TYPE_1__ flags; } ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int) ;

__attribute__((used)) static enum dc_color_space
FUNC_1(const struct dc_crtc_timing *VAR_5)
{
 enum dc_color_space VAR_6 = VAR_0;

 switch (VAR_5->pixel_encoding) {
 case 129:
 case 128:
 case 130:
 {





  if (VAR_5->pix_clk_100hz > 270300) {
   if (VAR_5->flags.Y_ONLY)
    VAR_6 =
     VAR_4;
   else
    VAR_6 = VAR_3;
  } else {
   if (VAR_5->flags.Y_ONLY)
    VAR_6 =
     VAR_2;
   else
    VAR_6 = VAR_1;
  }

 }
 break;
 case 131:
  VAR_6 = VAR_0;
  break;

 default:
  FUNC_0(1);
  break;
 }

 return VAR_6;
}
