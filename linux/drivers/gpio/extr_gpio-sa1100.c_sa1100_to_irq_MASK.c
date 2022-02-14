
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int irqbase; } ;


 TYPE_1__* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 return FUNC_0(VAR_0)->irqbase + VAR_1;
}
