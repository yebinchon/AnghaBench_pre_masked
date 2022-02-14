
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dc_link_settings {scalar_t__ lane_count; scalar_t__ link_rate; int use_link_rate_set; size_t link_rate_set; int link_spread; } ;
struct TYPE_3__ {scalar_t__ raw; } ;
struct TYPE_4__ {scalar_t__ edp_supported_link_rates_count; scalar_t__* edp_supported_link_rates; TYPE_1__ dpcd_rev; } ;
struct dc_link {TYPE_2__ dpcd_caps; struct dc_link_settings verified_link_cap; } ;
typedef int initial_link_setting ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dc_link*,struct dc_link_settings*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dc_link_settings*,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct dc_link *VAR_3, struct dc_link_settings *VAR_4, uint32_t VAR_5)
{
 struct dc_link_settings VAR_6;
 struct dc_link_settings VAR_7;
 uint32_t VAR_8;

 if (VAR_3->dpcd_caps.dpcd_rev.raw < VAR_0 ||
   VAR_3->dpcd_caps.edp_supported_link_rates_count == 0) {
  *VAR_4 = VAR_3->verified_link_cap;
  return 1;
 }

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.lane_count = VAR_1;
 VAR_6.link_rate = VAR_3->dpcd_caps.edp_supported_link_rates[0];
 VAR_6.link_spread = VAR_2;
 VAR_6.use_link_rate_set = 1;
 VAR_6.link_rate_set = 0;
 VAR_7 = VAR_6;





 while (VAR_7.link_rate <=
   VAR_3->verified_link_cap.link_rate) {
  VAR_8 = FUNC_0(
    VAR_3,
    &VAR_7);
  if (VAR_5 <= VAR_8) {
   *VAR_4 = VAR_7;
   return 1;
  }

  if (VAR_7.lane_count <
    VAR_3->verified_link_cap.lane_count) {
   VAR_7.lane_count =
     FUNC_1(
       VAR_7.lane_count);
  } else {
   if (VAR_7.link_rate_set < VAR_3->dpcd_caps.edp_supported_link_rates_count) {
    VAR_7.link_rate_set++;
    VAR_7.link_rate =
     VAR_3->dpcd_caps.edp_supported_link_rates[VAR_7.link_rate_set];
    VAR_7.lane_count =
         VAR_6.lane_count;
   } else
    break;
  }
 }
 return 0;
}
