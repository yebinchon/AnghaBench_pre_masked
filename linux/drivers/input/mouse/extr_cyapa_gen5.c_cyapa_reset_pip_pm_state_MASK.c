
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cyapa_pip_cmd_states {int pm_stage_lock; int pm_stage; } ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {TYPE_1__ cmd_states; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cyapa *VAR_1)
{
 struct cyapa_pip_cmd_states *VAR_2 = &VAR_1->cmd_states.pip;


 FUNC_0(&VAR_2->pm_stage_lock);
 VAR_2->pm_stage = VAR_0;
 FUNC_1(&VAR_2->pm_stage_lock);
}
