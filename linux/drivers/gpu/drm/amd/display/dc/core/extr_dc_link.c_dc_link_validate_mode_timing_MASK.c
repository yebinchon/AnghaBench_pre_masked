
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dpcd_caps {int dummy; } ;
struct dc_stream_state {int signal; TYPE_1__* link; } ;
struct dc_link {scalar_t__* remote_sinks; struct dpcd_caps dpcd_caps; } ;
struct dc_crtc_timing {int dummy; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_2__ {int dongle_max_pix_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct dc_crtc_timing const*,struct dpcd_caps*) ;
 int FUNC_1 (struct dc_link*,struct dc_crtc_timing const*) ;
 scalar_t__ FUNC_2 (struct dc_crtc_timing const*) ;

enum dc_status FUNC_3(
  const struct dc_stream_state *VAR_3,
  struct dc_link *VAR_4,
  const struct dc_crtc_timing *VAR_5)
{
 uint32_t VAR_6 = VAR_3->link->dongle_max_pix_clk * 10;
 struct dpcd_caps *VAR_7 = &VAR_4->dpcd_caps;




 if (VAR_4->remote_sinks[0])
  return VAR_2;


 if (VAR_6 != 0 && FUNC_2(VAR_5) > VAR_6)
  return VAR_0;


 if (!FUNC_0(VAR_5, VAR_7))
  return VAR_0;

 switch (VAR_3->signal) {
 case 128:
 case 129:
  if (!FUNC_1(
    VAR_4,
    VAR_5))
   return VAR_1;
  break;

 default:
  break;
 }

 return VAR_2;
}
