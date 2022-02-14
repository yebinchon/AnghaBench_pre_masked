
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;
struct irq_chip_type {TYPE_1__ regs; } ;
struct irq_chip_generic {int mask_cache; struct irq_chip_type* chip_types; } ;


 int FUNC_0 (struct irq_chip_generic*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 int FUNC_2 (struct irq_chip_generic*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_chip_generic *VAR_0)
{
 struct irq_chip_type *VAR_1 = VAR_0->chip_types;


 FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_0->mask_cache, VAR_1->regs.mask);
 FUNC_1(VAR_0);
}
