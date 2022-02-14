
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gt {int gt_imr; int uncore; int irq_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct intel_gt *VAR_1,
          u32 VAR_2,
          u32 VAR_3)
{
 FUNC_2(&VAR_1->irq_lock);

 FUNC_0(VAR_3 & ~VAR_2);

 VAR_1->gt_imr &= ~VAR_2;
 VAR_1->gt_imr |= (~VAR_3 & VAR_2);
 FUNC_1(VAR_1->uncore, VAR_0, VAR_1->gt_imr);
}
