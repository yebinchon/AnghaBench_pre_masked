
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 if (VAR_1 > 15)
  return !!(FUNC_0() & (1 << (VAR_1 - 16)));
 return !!(FUNC_1() & (1 << VAR_1));
}
