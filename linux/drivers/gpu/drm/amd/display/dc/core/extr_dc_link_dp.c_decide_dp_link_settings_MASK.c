
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dc_link_settings {int member_3; scalar_t__ link_rate; scalar_t__ lane_count; int member_4; int member_2; int member_1; int member_0; } ;
struct TYPE_2__ {scalar_t__ link_rate; scalar_t__ lane_count; } ;
struct dc_link {TYPE_1__ verified_link_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dc_link*,struct dc_link_settings*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct dc_link *VAR_3, struct dc_link_settings *VAR_4, uint32_t VAR_5)
{
 struct dc_link_settings VAR_6 = {
  VAR_0, VAR_1, VAR_2, 0, 0};
 struct dc_link_settings VAR_7 =
   VAR_6;
 uint32_t VAR_8;





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
   VAR_7.link_rate =
     FUNC_2(
       VAR_7.link_rate);
   VAR_7.lane_count =
     VAR_6.lane_count;
  }
 }

 return 0;
}
