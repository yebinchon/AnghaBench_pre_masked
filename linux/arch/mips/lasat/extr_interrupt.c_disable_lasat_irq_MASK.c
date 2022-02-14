
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->irq - VAR_0;

 *VAR_1 &= ~(1 << VAR_4) << VAR_2;
}
