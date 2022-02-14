
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;
struct cdns_gpio_chip {scalar_t__ regs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct cdns_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_3(VAR_1);
 struct cdns_gpio_chip *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(FUNC_0(VAR_1->hwirq), VAR_3->regs + VAR_0);
}
