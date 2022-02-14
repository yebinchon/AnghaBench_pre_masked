
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct irq_chip_regs {scalar_t__ disable; scalar_t__ enable; } ;
struct irq_chip_generic {scalar_t__ reg_base; TYPE_1__* chip_types; } ;
struct TYPE_2__ {struct irq_chip_regs regs; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct irq_chip_generic *VAR_0, uint32_t VAR_1)
{
 struct irq_chip_regs *VAR_2 = &VAR_0->chip_types->regs;

 FUNC_0(VAR_1, VAR_0->reg_base + VAR_2->enable);
 FUNC_0(~VAR_1, VAR_0->reg_base + VAR_2->disable);
}
