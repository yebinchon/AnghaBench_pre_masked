
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int max_hdmi_pixel_clock; } ;
struct TYPE_3__ {TYPE_2__ features; } ;
struct dce110_link_encoder {TYPE_1__ base; } ;
struct dc_crtc_timing {scalar_t__ pixel_encoding; int pix_clk_100hz; int display_color_depth; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

bool FUNC_0(
 const struct dce110_link_encoder *VAR_6,
 enum signal_type VAR_7,
 enum signal_type VAR_8,
 const struct dc_crtc_timing *VAR_9)
{
 uint32_t VAR_10 = VAR_4;

 if (VAR_8 == VAR_1)
  VAR_10 *= 2;




 if (VAR_7 != VAR_1 &&
   VAR_7 != VAR_2)
  VAR_10 = VAR_6->base.features.max_hdmi_pixel_clock;


 if (VAR_9->pixel_encoding != VAR_0)
  return 0;


 if ((VAR_7 == VAR_2 ||
  VAR_7 == VAR_3) &&
  VAR_8 != VAR_3 &&
  VAR_9->pix_clk_100hz > (VAR_4 * 10))
  return 0;
 if (VAR_9->pix_clk_100hz < (VAR_5 * 10))
  return 0;

 if (VAR_9->pix_clk_100hz > (VAR_10 * 10))
  return 0;


 switch (VAR_9->display_color_depth) {
 case 129:
 case 128:
 break;
 case 131:
 case 130:
  if (VAR_8 != VAR_1)
   return 0;
 break;
 default:
  return 0;
 }

 return 1;
}
