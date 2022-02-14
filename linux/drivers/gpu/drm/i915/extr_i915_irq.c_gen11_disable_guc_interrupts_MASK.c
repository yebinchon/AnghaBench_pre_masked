
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct intel_guc {TYPE_1__ interrupts; } ;
struct intel_gt {int i915; int irq_lock; int uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_guc*) ;
 struct intel_gt* FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct intel_guc *VAR_2)
{
 struct intel_gt *VAR_3 = FUNC_1(VAR_2);

 FUNC_4(&VAR_3->irq_lock);
 VAR_2->interrupts.enabled = 0;

 FUNC_3(VAR_3->uncore, VAR_1, ~0);
 FUNC_3(VAR_3->uncore, VAR_0, 0);

 FUNC_5(&VAR_3->irq_lock);
 FUNC_2(VAR_3->i915);

 FUNC_0(VAR_2);
}
