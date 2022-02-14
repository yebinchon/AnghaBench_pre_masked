
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled; } ;
struct intel_guc {TYPE_1__ interrupts; } ;
struct intel_gt {int pm_guc_events; int irq_lock; TYPE_2__* i915; int uncore; } ;
struct TYPE_4__ {int runtime_pm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_gt*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 struct intel_gt* FUNC_4 (struct intel_guc*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct intel_guc *VAR_0)
{
 struct intel_gt *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(&VAR_1->i915->runtime_pm);

 FUNC_6(&VAR_1->irq_lock);
 if (!VAR_0->interrupts.enabled) {
  FUNC_0(FUNC_5(VAR_1->uncore,
            FUNC_3(VAR_1->i915)) &
        VAR_1->pm_guc_events);
  VAR_0->interrupts.enabled = 1;
  FUNC_2(VAR_1, VAR_1->pm_guc_events);
 }
 FUNC_7(&VAR_1->irq_lock);
}
