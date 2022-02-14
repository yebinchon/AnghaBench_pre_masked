
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct irq_chip_regs {scalar_t__ ack; } ;
struct irq_chip_generic {scalar_t__ reg_base; } ;
struct TYPE_2__ {struct irq_chip_regs regs; } ;


 TYPE_1__* FUNC_0 (struct irq_data*) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_1(VAR_0);
 struct irq_chip_regs *VAR_2 = &FUNC_0(VAR_0)->regs;

 FUNC_2(VAR_1->reg_base + VAR_2->ack);
}
