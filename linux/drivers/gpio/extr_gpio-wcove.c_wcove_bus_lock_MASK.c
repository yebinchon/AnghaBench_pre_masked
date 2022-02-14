
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_gpio {int buslock; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 struct wcove_gpio* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_1(VAR_0);
 struct wcove_gpio *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->buslock);
}
