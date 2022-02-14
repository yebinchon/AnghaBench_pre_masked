
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ioh_gpio {size_t ch; TYPE_2__* reg; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int pi; } ;


 struct ioh_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct ioh_gpio *VAR_2 = FUNC_0(VAR_0);

 return !!(FUNC_1(&VAR_2->reg->regs[VAR_2->ch].pi) & (1 << VAR_1));
}
