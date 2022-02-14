
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_3__ {int enable; int disable; int ack; } ;
struct TYPE_4__ {scalar_t__ irq_ack; } ;
struct irq_chip_type {TYPE_1__ regs; TYPE_2__ chip; } ;
struct irq_chip_generic {int wake_active; struct brcmstb_l2_intc_data* private; } ;
struct brcmstb_l2_intc_data {int saved_mask; } ;


 struct irq_chip_type* FUNC_0 (struct irq_data*) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_chip_generic*,unsigned long) ;
 int FUNC_3 (struct irq_chip_generic*,unsigned long) ;
 int FUNC_4 (struct irq_chip_generic*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_1(VAR_0);
 struct irq_chip_type *VAR_2 = FUNC_0(VAR_0);
 struct brcmstb_l2_intc_data *VAR_3 = VAR_1->private;
 unsigned long VAR_4;

 FUNC_2(VAR_1, VAR_4);
 if (VAR_2->chip.irq_ack) {

  FUNC_4(VAR_1, ~VAR_3->saved_mask & ~VAR_1->wake_active,
    VAR_2->regs.ack);
 }


 FUNC_4(VAR_1, VAR_3->saved_mask, VAR_2->regs.disable);
 FUNC_4(VAR_1, ~VAR_3->saved_mask, VAR_2->regs.enable);
 FUNC_3(VAR_1, VAR_4);
}
