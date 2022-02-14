
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pirq {int active_count; int reg; int lock; } ;
struct TYPE_2__ {int pirq_pin; int ioapic_irq; } ;
struct pci_devinst {TYPE_1__ pi_lintr; int pi_vmctx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pirq*) ;
 scalar_t__ FUNC_2 (int) ;
 struct pirq* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int ) ;

void
FUNC_7(struct pci_devinst *VAR_2)
{
 struct pirq *VAR_3;

 if (VAR_2->pi_lintr.pirq_pin > 0) {
  FUNC_0(VAR_2->pi_lintr.pirq_pin <= FUNC_1(VAR_1));
  VAR_3 = &VAR_1[VAR_2->pi_lintr.pirq_pin - 1];
  FUNC_3(&VAR_3->lock);
  VAR_3->active_count++;
  if (VAR_3->active_count == 1 && FUNC_2(VAR_3->reg)) {
   FUNC_6(VAR_2->pi_vmctx, VAR_3->reg & VAR_0,
       VAR_2->pi_lintr.ioapic_irq);
   FUNC_4(&VAR_3->lock);
   return;
  }
  FUNC_4(&VAR_3->lock);
 }
 FUNC_5(VAR_2->pi_vmctx, VAR_2->pi_lintr.ioapic_irq);
}
