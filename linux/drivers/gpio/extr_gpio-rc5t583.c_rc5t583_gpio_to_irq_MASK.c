
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc5t583_gpio {TYPE_1__* rc5t583; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int irq_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct rc5t583_gpio* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct rc5t583_gpio *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 < VAR_2)
  return VAR_5->rc5t583->irq_base +
    VAR_1 + VAR_4;
 return -VAR_0;
}
