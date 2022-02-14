
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe_gpio {int irq_lock; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 struct stmpe_gpio* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_1(VAR_0);
 struct stmpe_gpio *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->irq_lock);
}
