
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pq2ads_pci_pic {TYPE_1__* regs; } ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct pq2ads_pci_pic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2)
{
 struct pq2ads_pci_pic *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = VAR_0 - FUNC_2(VAR_2) - 1;

 if (VAR_4 != -1) {
  unsigned long VAR_5;

  FUNC_3(&VAR_1, VAR_5);
  FUNC_0(&VAR_3->regs->mask, 1 << VAR_4);
  FUNC_4(&VAR_1, VAR_5);
 }
}
