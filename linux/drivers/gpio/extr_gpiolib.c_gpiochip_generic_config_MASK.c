
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {TYPE_1__* gpiodev; } ;
struct TYPE_2__ {unsigned int base; } ;


 int FUNC_0 (unsigned int,unsigned long) ;

int FUNC_1(struct gpio_chip *VAR_0, unsigned VAR_1,
       unsigned long VAR_2)
{
 return FUNC_0(VAR_0->gpiodev->base + VAR_1, VAR_2);
}
