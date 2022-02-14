
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int enable; int disable; int mask; } ;
struct irq_chip_type {TYPE_1__ regs; } ;
struct irq_chip_generic {int wake_active; struct brcmstb_l2_intc_data* private; } ;
struct brcmstb_l2_intc_data {scalar_t__ can_wake; int saved_mask; } ;


 struct irq_chip_type* FUNC_0 (struct irq_data*) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_chip_generic*,unsigned long) ;
 int FUNC_3 (struct irq_chip_generic*,unsigned long) ;
 int FUNC_4 (struct irq_chip_generic*,int ) ;
 int FUNC_5 (struct irq_chip_generic*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_1(VAR_0);
 struct irq_chip_type *VAR_2 = FUNC_0(VAR_0);
 struct brcmstb_l2_intc_data *VAR_3 = VAR_1->private;
 unsigned long VAR_4;

 FUNC_2(VAR_1, VAR_4);

 VAR_3->saved_mask = FUNC_4(VAR_1, VAR_2->regs.mask);

 if (VAR_3->can_wake) {

  FUNC_5(VAR_1, ~VAR_1->wake_active, VAR_2->regs.disable);
  FUNC_5(VAR_1, VAR_1->wake_active, VAR_2->regs.enable);
 }
 FUNC_3(VAR_1, VAR_4);
}
