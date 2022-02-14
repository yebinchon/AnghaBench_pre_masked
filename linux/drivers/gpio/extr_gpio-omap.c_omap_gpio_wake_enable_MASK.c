
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_bank {int irq; } ;


 int FUNC_0 (int ,unsigned int) ;
 struct gpio_bank* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct gpio_bank *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->irq, VAR_1);
}
