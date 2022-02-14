
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int use_gpio; } ;


 int FUNC_0 (unsigned int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 return !!(VAR_0.use_gpio & FUNC_0(VAR_2 / 32));
}
