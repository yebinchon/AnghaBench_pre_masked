
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl061 {int parent_irq; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 struct pl061* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_1(VAR_0);
 struct pl061 *VAR_3 = FUNC_0(VAR_2);

 return FUNC_2(VAR_3->parent_irq, VAR_1);
}
