
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;
struct cp2112_device {int irq_mask; } ;


 int FUNC_0 (int ,int *) ;
 struct cp2112_device* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct cp2112_device *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0->hwirq, &VAR_2->irq_mask);
}
