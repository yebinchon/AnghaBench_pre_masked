
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gt {int irq_lock; } ;


 int const FUNC_0 (unsigned int) ;
 int FUNC_1 (struct intel_gt*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct intel_gt *VAR_0, const u32 VAR_1)
{
 unsigned int VAR_2;

 FUNC_2(&VAR_0->irq_lock);

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_1 & FUNC_0(VAR_2))
   FUNC_1(VAR_0, VAR_2);
 }

 FUNC_3(&VAR_0->irq_lock);
}
