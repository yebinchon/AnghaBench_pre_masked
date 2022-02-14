
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cyapa_pip_cmd_states {int pm_stage; int pm_stage_lock; } ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {TYPE_1__ cmd_states; } ;
typedef enum cyapa_pm_stage { ____Placeholder_cyapa_pm_stage } cyapa_pm_stage ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static enum cyapa_pm_stage FUNC_2(struct cyapa *VAR_0)
{
 struct cyapa_pip_cmd_states *VAR_1 = &VAR_0->cmd_states.pip;
 enum cyapa_pm_stage VAR_2;

 FUNC_0(&VAR_1->pm_stage_lock);
 VAR_2 = VAR_1->pm_stage;
 FUNC_1(&VAR_1->pm_stage_lock);

 return VAR_2;
}
