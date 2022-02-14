
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct dln2_gpio {int unmasked_irqs; } ;


 int FUNC_0 (int,int ) ;
 struct dln2_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct dln2_gpio *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = FUNC_3(VAR_0);

 FUNC_0(VAR_3, VAR_2->unmasked_irqs);
}
