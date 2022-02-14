
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled; } ;
struct intel_guc {TYPE_1__ interrupts; } ;
struct intel_gt {TYPE_2__* i915; int irq_lock; int pm_guc_events; } ;
struct TYPE_4__ {int runtime_pm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_gt*,int ) ;
 int FUNC_2 (struct intel_guc*) ;
 struct intel_gt* FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct intel_guc *VAR_0)
{
 struct intel_gt *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_1->i915->runtime_pm);

 FUNC_5(&VAR_1->irq_lock);
 VAR_0->interrupts.enabled = 0;

 FUNC_1(VAR_1, VAR_1->pm_guc_events);

 FUNC_6(&VAR_1->irq_lock);
 FUNC_4(VAR_1->i915);

 FUNC_2(VAR_0);
}
