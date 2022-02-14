
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct davinci_gpio_controller {unsigned int gpio_unbanked; int* irqs; } ;


 int VAR_0 ;
 struct davinci_gpio_controller* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct davinci_gpio_controller *VAR_3 = FUNC_0(VAR_1);





 if (VAR_2 < VAR_3->gpio_unbanked)
  return VAR_3->irqs[VAR_2];
 else
  return -VAR_0;
}
