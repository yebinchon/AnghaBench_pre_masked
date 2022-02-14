
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_gpio {TYPE_1__* reg; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int pi; } ;


 struct pch_gpio* FUNC_0 (struct gpio_chip*) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct pch_gpio *VAR_2 = FUNC_0(VAR_0);

 return (FUNC_1(&VAR_2->reg->pi) >> VAR_1) & 1;
}
