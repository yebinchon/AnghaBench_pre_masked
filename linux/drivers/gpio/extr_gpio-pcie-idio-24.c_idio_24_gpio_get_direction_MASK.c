
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idio_24_gpio {TYPE_1__* reg; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int ctl; } ;


 unsigned long FUNC_0 (int) ;
 struct idio_24_gpio* FUNC_1 (struct gpio_chip*) ;
 unsigned long const FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0,
 unsigned int VAR_1)
{
 struct idio_24_gpio *const VAR_2 = FUNC_1(VAR_0);
 const unsigned long VAR_3 = FUNC_0(1);


 if (VAR_1 < 24)
  return 0;


 if (VAR_1 < 48)
  return 1;



 return !(FUNC_2(&VAR_2->reg->ctl) & VAR_3);
}
