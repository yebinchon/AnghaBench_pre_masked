
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_guc {int dummy; } ;
struct intel_gt {int irq_lock; int pm_guc_events; TYPE_1__* i915; } ;
struct TYPE_2__ {int runtime_pm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_gt*,int ) ;
 struct intel_gt* FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct intel_guc *VAR_0)
{
 struct intel_gt *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->i915->runtime_pm);

 FUNC_3(&VAR_1->irq_lock);
 FUNC_1(VAR_1, VAR_1->pm_guc_events);
 FUNC_4(&VAR_1->irq_lock);
}
