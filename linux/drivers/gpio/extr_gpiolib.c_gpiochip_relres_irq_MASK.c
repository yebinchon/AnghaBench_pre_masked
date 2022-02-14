
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {TYPE_1__* gpiodev; } ;
struct TYPE_2__ {int owner; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0->gpiodev->owner);
}
