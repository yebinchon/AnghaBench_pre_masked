
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixp4xx_gpio {int irq_edge; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 struct ixp4xx_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct irq_data*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_3(VAR_0);
 struct ixp4xx_gpio *VAR_2 = FUNC_1(VAR_1);


 if (!(VAR_2->irq_edge & FUNC_0(VAR_0->hwirq)))
  FUNC_4(VAR_0);

 FUNC_2(VAR_0);
}
