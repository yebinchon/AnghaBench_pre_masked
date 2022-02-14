
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
typedef int irq_hw_number_t ;


 scalar_t__ FUNC_0 (int) ;
 struct irq_data* FUNC_1 (unsigned int) ;

irq_hw_number_t FUNC_2(unsigned int VAR_0)
{
 struct irq_data *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(!VAR_1) ? 0 : VAR_1->hwirq;
}
