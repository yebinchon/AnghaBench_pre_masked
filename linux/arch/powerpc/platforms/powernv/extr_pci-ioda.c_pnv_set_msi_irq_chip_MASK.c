
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_chip {int irq_eoi; } ;
struct TYPE_2__ {int irq_chip_init; struct irq_chip irq_chip; } ;
struct pnv_phb {scalar_t__ model; TYPE_1__ ioda; } ;
struct irq_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct irq_chip* FUNC_0 (struct irq_data*) ;
 struct irq_data* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,struct irq_chip*) ;
 int VAR_1 ;

void FUNC_3(struct pnv_phb *VAR_2, unsigned int VAR_3)
{
 struct irq_data *VAR_4;
 struct irq_chip *VAR_5;


 if (VAR_2->model != VAR_0)
  return;

 if (!VAR_2->ioda.irq_chip_init) {




  VAR_4 = FUNC_1(VAR_3);
  VAR_5 = FUNC_0(VAR_4);
  VAR_2->ioda.irq_chip_init = 1;
  VAR_2->ioda.irq_chip = *VAR_5;
  VAR_2->ioda.irq_chip.irq_eoi = VAR_1;
 }
 FUNC_2(VAR_3, &VAR_2->ioda.irq_chip);
}
