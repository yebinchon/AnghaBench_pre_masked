
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;
struct irq_chip_type {TYPE_1__ regs; } ;
struct irq_chip_generic {int mask_cache; int wake_active; struct irq_chip_type* chip_types; struct bcm7120_l2_intc_data* private; } ;
struct bcm7120_l2_intc_data {scalar_t__ can_wake; } ;


 int FUNC_0 (struct irq_chip_generic*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 int FUNC_2 (struct irq_chip_generic*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_chip_generic *VAR_0)
{
 struct bcm7120_l2_intc_data *VAR_1 = VAR_0->private;
 struct irq_chip_type *VAR_2 = VAR_0->chip_types;

 FUNC_0(VAR_0);
 if (VAR_1->can_wake)
  FUNC_2(VAR_0, VAR_0->mask_cache | VAR_0->wake_active,
          VAR_2->regs.mask);
 FUNC_1(VAR_0);
}
