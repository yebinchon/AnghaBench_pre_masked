
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msic_gpio {int irq_base; } ;
struct gpio_chip {int dummy; } ;


 struct msic_gpio* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct msic_gpio *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->irq_base + VAR_1;
}
