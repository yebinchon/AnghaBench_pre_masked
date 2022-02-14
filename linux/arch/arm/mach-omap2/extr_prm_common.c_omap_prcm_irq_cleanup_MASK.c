
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_regs; unsigned int irq; scalar_t__ base_irq; int ** priority_mask; int ** saved_mask; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (char*) ;
 int ** VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_5(void)
{
 unsigned int VAR_2;
 int VAR_3;

 if (!VAR_1) {
  FUNC_4("PRCM: IRQ handler not initialized; cannot cleanup\n");
  return;
 }

 if (VAR_0) {
  for (VAR_3 = 0; VAR_3 < VAR_1->nr_regs; VAR_3++) {
   if (VAR_0[VAR_3])
    FUNC_1(VAR_0[VAR_3],
     0xffffffff, 0, 0);
   VAR_0[VAR_3] = ((void*)0);
  }
  FUNC_3(VAR_0);
  VAR_0 = ((void*)0);
 }

 FUNC_3(VAR_1->saved_mask);
 VAR_1->saved_mask = ((void*)0);

 FUNC_3(VAR_1->priority_mask);
 VAR_1->priority_mask = ((void*)0);

 VAR_2 = VAR_1->irq;
 FUNC_2(VAR_2, ((void*)0));

 if (VAR_1->base_irq > 0)
  FUNC_0(VAR_1->base_irq,
   VAR_1->nr_regs * 32);
 VAR_1->base_irq = 0;
}
