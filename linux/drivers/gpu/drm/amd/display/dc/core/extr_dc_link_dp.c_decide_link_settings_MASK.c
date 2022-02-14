
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dc_stream_state {scalar_t__ signal; struct dc_link* link; int timing; } ;
struct dc_link_settings {scalar_t__ lane_count; scalar_t__ link_rate; } ;
struct dc_link {scalar_t__ connector_signal; struct dc_link_settings verified_link_cap; struct dc_link_settings preferred_link_setting; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct dc_link*,struct dc_link_settings*,int ) ;
 scalar_t__ FUNC_4 (struct dc_link*,struct dc_link_settings*,int ) ;

void FUNC_5(struct dc_stream_state *VAR_4,
 struct dc_link_settings *VAR_5)
{
 struct dc_link *VAR_6;
 uint32_t VAR_7;

 VAR_7 = FUNC_2(&VAR_4->timing);

 VAR_6 = VAR_4->link;




 if (VAR_6->preferred_link_setting.lane_count !=
   VAR_0 &&
   VAR_6->preferred_link_setting.link_rate !=
     VAR_1) {
  *VAR_5 = VAR_6->preferred_link_setting;
  return;
 }




 if (VAR_4->signal == VAR_2) {
  *VAR_5 = VAR_6->verified_link_cap;
  return;
 }

 if (VAR_6->connector_signal == VAR_3) {
  if (FUNC_4(VAR_6, VAR_5, VAR_7))
   return;
 } else if (FUNC_3(VAR_6, VAR_5, VAR_7))
  return;

 FUNC_1();
 FUNC_0(VAR_6->verified_link_cap.lane_count != VAR_0);

 *VAR_5 = VAR_6->verified_link_cap;
}
