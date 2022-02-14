
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gt {int pm_imr; int irq_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_gt*) ;

__attribute__((used)) static void FUNC_3(struct intel_gt *VAR_0,
      u32 VAR_1,
      u32 VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2 & ~VAR_1);

 FUNC_1(&VAR_0->irq_lock);

 VAR_3 = VAR_0->pm_imr;
 VAR_3 &= ~VAR_1;
 VAR_3 |= ~VAR_2 & VAR_1;

 if (VAR_3 != VAR_0->pm_imr) {
  VAR_0->pm_imr = VAR_3;
  FUNC_2(VAR_0);
 }
}
