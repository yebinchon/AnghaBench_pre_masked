
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link_training_overrides {int dummy; } ;
struct dc_link_settings {int link_rate; int lane_count; } ;
struct dc_link {struct dc_link_settings preferred_link_setting; struct dc_link_training_overrides preferred_training_settings; } ;
struct dc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc*,struct dc_link_settings*,struct dc_link*) ;
 int FUNC_1 (struct dc_link_training_overrides*,int ,int) ;

void FUNC_2(struct dc *VAR_2,
       struct dc_link_settings *VAR_3,
       struct dc_link_training_overrides *VAR_4,
       struct dc_link *VAR_5,
       bool VAR_6)
{
 if (VAR_4 != ((void*)0))
  VAR_5->preferred_training_settings = *VAR_4;
 else
  FUNC_1(&VAR_5->preferred_training_settings, 0, sizeof(VAR_5->preferred_training_settings));

 if (VAR_3 != ((void*)0)) {
  VAR_5->preferred_link_setting = *VAR_3;
 } else {
  VAR_5->preferred_link_setting.lane_count = VAR_0;
  VAR_5->preferred_link_setting.link_rate = VAR_1;
 }


 if (VAR_6 == 0)
  FUNC_0(VAR_2, &VAR_5->preferred_link_setting, VAR_5);
}
