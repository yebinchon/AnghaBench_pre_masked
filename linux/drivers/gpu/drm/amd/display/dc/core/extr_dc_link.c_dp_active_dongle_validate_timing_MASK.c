
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_dongle_caps {scalar_t__ dongle_type; int extendedCapValid; int dp_hdmi_max_bpc; int dp_hdmi_max_pixel_clk_in_khz; int is_dp_hdmi_ycbcr420_pass_through; int is_dp_hdmi_ycbcr422_pass_through; } ;
struct dpcd_caps {int dongle_type; struct dc_dongle_caps dongle_caps; } ;
struct dc_crtc_timing {int pixel_encoding; int display_color_depth; } ;
 scalar_t__ VAR_0 ;





 int FUNC_0 (struct dc_crtc_timing const*) ;

__attribute__((used)) static bool FUNC_1(
  const struct dc_crtc_timing *VAR_1,
  const struct dpcd_caps *VAR_2)
{
 const struct dc_dongle_caps *VAR_3 = &VAR_2->dongle_caps;

 switch (VAR_2->dongle_type) {
 case 132:
 case 134:
 case 133:
  if (VAR_1->pixel_encoding == 131)
   return 1;
  else
   return 0;
 default:
  break;
 }

 if (VAR_3->dongle_type != VAR_0 ||
  VAR_3->extendedCapValid == 0)
  return 1;


 switch (VAR_1->pixel_encoding) {
 case 131:
 case 128:
  break;
 case 129:
  if (!VAR_3->is_dp_hdmi_ycbcr422_pass_through)
   return 0;
  break;
 case 130:
  if (!VAR_3->is_dp_hdmi_ycbcr420_pass_through)
   return 0;
  break;
 default:

  return 0;
 }

 switch (VAR_1->display_color_depth) {
 case 136:
 case 135:

  break;
 case 140:
  if (VAR_3->dp_hdmi_max_bpc < 10)
   return 0;
  break;
 case 139:
  if (VAR_3->dp_hdmi_max_bpc < 12)
   return 0;
  break;
 case 138:
 case 137:
 default:

  return 0;
 }

 if (FUNC_0(VAR_1) > (VAR_3->dp_hdmi_max_pixel_clk_in_khz * 10))
  return 0;

 return 1;
}
