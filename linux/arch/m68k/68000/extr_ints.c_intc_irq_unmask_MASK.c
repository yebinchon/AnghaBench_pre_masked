
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct irq_data *VAR_1)
{
 VAR_0 &= ~(1 << VAR_1->irq);
}
