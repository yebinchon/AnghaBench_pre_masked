
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link_training_overrides {int dummy; } ;
struct dc_link_settings {int dummy; } ;
struct dc_link {int sync_lt_in_progress; int preferred_link_setting; int preferred_training_settings; } ;


 int FUNC_0 (int *,int ,int) ;

bool FUNC_1(struct dc_link *VAR_0)
{



 VAR_0->sync_lt_in_progress = 1;


 FUNC_0(&VAR_0->preferred_training_settings, 0,
  sizeof(struct dc_link_training_overrides));
 FUNC_0(&VAR_0->preferred_link_setting, 0,
  sizeof(struct dc_link_settings));

 return 1;
}
