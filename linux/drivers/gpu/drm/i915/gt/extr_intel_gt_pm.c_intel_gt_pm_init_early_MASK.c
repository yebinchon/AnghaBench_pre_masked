
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {int pm_notifications; TYPE_1__* i915; int wakeref; } ;
struct TYPE_2__ {int runtime_pm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_0 ;

void FUNC_2(struct intel_gt *VAR_1)
{
 FUNC_1(&VAR_1->wakeref, &VAR_1->i915->runtime_pm, &VAR_0);

 FUNC_0(&VAR_1->pm_notifications);
}
