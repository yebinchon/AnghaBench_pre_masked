
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idio_16_gpio {TYPE_1__* reg; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int in8_15; int in0_7; int out8_15; int out0_7; } ;


 unsigned long FUNC_0 (unsigned int) ;
 struct idio_16_gpio* FUNC_1 (struct gpio_chip*) ;
 unsigned long FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct idio_16_gpio *const VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3 = FUNC_0(VAR_1);

 if (VAR_1 < 8)
  return !!(FUNC_2(&VAR_2->reg->out0_7) & VAR_3);

 if (VAR_1 < 16)
  return !!(FUNC_2(&VAR_2->reg->out8_15) & (VAR_3 >> 8));

 if (VAR_1 < 24)
  return !!(FUNC_2(&VAR_2->reg->in0_7) & (VAR_3 >> 16));

 return !!(FUNC_2(&VAR_2->reg->in8_15) & (VAR_3 >> 24));
}
