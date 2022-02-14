
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77620_gpio {TYPE_1__* dev; } ;
struct max77620_chip {int gpio_irq_data; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int parent; } ;


 struct max77620_chip* FUNC_0 (int ) ;
 struct max77620_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct max77620_gpio *VAR_2 = FUNC_1(VAR_0);
 struct max77620_chip *VAR_3 = FUNC_0(VAR_2->dev->parent);

 return FUNC_2(VAR_3->gpio_irq_data, VAR_1);
}
