
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 return FUNC_1(FUNC_2(VAR_1)->membase + VAR_0) &
  FUNC_0(VAR_2);
}
