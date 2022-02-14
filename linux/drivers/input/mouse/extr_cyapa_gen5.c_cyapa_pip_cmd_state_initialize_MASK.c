
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cyapa_pip_cmd_states {int * resp_len; int * resp_data; int in_progress_cmd; int * resp_sort_func; int pm_stage; int pm_stage_lock; int cmd_lock; int cmd_issued; int cmd_ready; } ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {int dev_sleep_time; int dev_pwr_mode; TYPE_1__ cmd_states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct cyapa *VAR_4)
{
 struct cyapa_pip_cmd_states *VAR_5 = &VAR_4->cmd_states.pip;

 FUNC_1(&VAR_5->cmd_ready);
 FUNC_0(&VAR_5->cmd_issued, 0);
 FUNC_2(&VAR_5->cmd_lock);

 FUNC_2(&VAR_5->pm_stage_lock);
 VAR_5->pm_stage = VAR_0;

 VAR_5->resp_sort_func = ((void*)0);
 VAR_5->in_progress_cmd = VAR_1;
 VAR_5->resp_data = ((void*)0);
 VAR_5->resp_len = ((void*)0);

 VAR_4->dev_pwr_mode = VAR_2;
 VAR_4->dev_sleep_time = VAR_3;

 return 0;
}
