
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct gpio_bank {int dummy; } ;


 struct gpio_bank* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static inline struct gpio_bank *FUNC_2(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1);
}
