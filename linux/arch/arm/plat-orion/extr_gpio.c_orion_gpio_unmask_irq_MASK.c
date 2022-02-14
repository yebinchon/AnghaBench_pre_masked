
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int mask; } ;
struct TYPE_2__ {int mask; } ;
struct irq_chip_type {TYPE_1__ regs; } ;
struct irq_chip_generic {int dummy; } ;


 struct irq_chip_type* FUNC_0 (struct irq_data*) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_chip_generic*) ;
 int FUNC_3 (struct irq_chip_generic*) ;
 int FUNC_4 (struct irq_chip_generic*,int ) ;
 int FUNC_5 (struct irq_chip_generic*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_1(VAR_0);
 struct irq_chip_type *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;
 u32 VAR_4 = VAR_0->mask;

 FUNC_2(VAR_1);
 VAR_3 = FUNC_4(VAR_1, VAR_2->regs.mask);
 VAR_3 |= VAR_4;
 FUNC_5(VAR_1, VAR_3, VAR_2->regs.mask);
 FUNC_3(VAR_1);
}
