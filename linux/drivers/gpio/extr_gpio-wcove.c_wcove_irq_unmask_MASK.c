
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_gpio {int set_irq_mask; int update; } ;
struct irq_data {scalar_t__ hwirq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct wcove_gpio* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_1(VAR_2);
 struct wcove_gpio *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2->hwirq >= VAR_1)
  return;

 VAR_4->set_irq_mask = 0;
 VAR_4->update |= VAR_0;
}
