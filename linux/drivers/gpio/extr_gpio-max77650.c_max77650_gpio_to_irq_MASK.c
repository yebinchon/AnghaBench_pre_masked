
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77650_gpio_chip {int irq; } ;
struct gpio_chip {int dummy; } ;


 struct max77650_gpio_chip* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct max77650_gpio_chip *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->irq;
}
