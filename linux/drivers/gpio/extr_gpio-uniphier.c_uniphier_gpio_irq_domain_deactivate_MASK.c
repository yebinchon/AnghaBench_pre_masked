
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct uniphier_gpio_priv {struct gpio_chip chip; } ;
struct irq_domain {struct uniphier_gpio_priv* host_data; } ;
struct irq_data {scalar_t__ hwirq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gpio_chip*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct irq_domain *VAR_1,
      struct irq_data *VAR_2)
{
 struct uniphier_gpio_priv *VAR_3 = VAR_1->host_data;
 struct gpio_chip *VAR_4 = &VAR_3->chip;

 FUNC_0(VAR_4, VAR_2->hwirq + VAR_0);
}
