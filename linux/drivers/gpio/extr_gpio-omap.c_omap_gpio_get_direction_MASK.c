
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct gpio_bank {TYPE_1__* regs; scalar_t__ base; } ;
struct TYPE_2__ {scalar_t__ direction; } ;


 int FUNC_0 (unsigned int) ;
 struct gpio_bank* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct gpio_bank *VAR_2 = FUNC_1(VAR_0);

 return !!(FUNC_2(VAR_2->base + VAR_2->regs->direction) &
    FUNC_0(VAR_1));
}
