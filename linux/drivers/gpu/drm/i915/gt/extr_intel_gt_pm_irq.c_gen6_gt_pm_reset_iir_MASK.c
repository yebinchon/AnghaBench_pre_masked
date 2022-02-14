
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {int irq_lock; int i915; struct intel_uncore* uncore; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (struct intel_uncore*,int ,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct intel_gt *VAR_1, u32 VAR_2)
{
 struct intel_uncore *VAR_3 = VAR_1->uncore;
 i915_reg_t VAR_4 = FUNC_1(VAR_1->i915) >= 8 ? FUNC_0(2) : VAR_0;

 FUNC_4(&VAR_1->irq_lock);

 FUNC_3(VAR_3, VAR_4, VAR_2);
 FUNC_3(VAR_3, VAR_4, VAR_2);
 FUNC_2(VAR_3, VAR_4);
}
