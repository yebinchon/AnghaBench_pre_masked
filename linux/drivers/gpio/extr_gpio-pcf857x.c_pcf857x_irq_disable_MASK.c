
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf857x {int irq_enabled; } ;
struct irq_data {int hwirq; } ;


 struct pcf857x* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_0)
{
 struct pcf857x *VAR_1 = FUNC_0(VAR_0);

 VAR_1->irq_enabled &= ~(1 << VAR_0->hwirq);
}
