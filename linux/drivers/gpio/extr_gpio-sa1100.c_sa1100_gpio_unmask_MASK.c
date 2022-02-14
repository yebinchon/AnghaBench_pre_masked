
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_gpio_chip {unsigned int irqmask; } ;
struct irq_data {int hwirq; } ;


 unsigned int FUNC_0 (int ) ;
 struct sa1100_gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct sa1100_gpio_chip*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct sa1100_gpio_chip *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2 = FUNC_0(VAR_0->hwirq);

 VAR_1->irqmask |= VAR_2;

 FUNC_2(VAR_1);
}
