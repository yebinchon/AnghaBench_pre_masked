
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct irq_chip_generic {int mask_cache; } ;


 int FUNC_0 (struct irq_chip_generic*,int ) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;

void FUNC_2(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1, VAR_1->mask_cache);
}
