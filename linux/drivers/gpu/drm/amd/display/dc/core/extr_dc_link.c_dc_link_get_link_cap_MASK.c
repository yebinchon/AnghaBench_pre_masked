
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link_settings {scalar_t__ lane_count; scalar_t__ link_rate; } ;
struct dc_link {struct dc_link_settings const verified_link_cap; struct dc_link_settings const preferred_link_setting; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

const struct dc_link_settings *FUNC_0(
  const struct dc_link *VAR_2)
{
 if (VAR_2->preferred_link_setting.lane_count != VAR_0 &&
   VAR_2->preferred_link_setting.link_rate != VAR_1)
  return &VAR_2->preferred_link_setting;
 return &VAR_2->verified_link_cap;
}
