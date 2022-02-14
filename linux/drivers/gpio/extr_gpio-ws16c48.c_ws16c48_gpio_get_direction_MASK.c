
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws16c48_gpio {unsigned int const* io_state; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 struct ws16c48_gpio* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct ws16c48_gpio *const VAR_2 = FUNC_1(VAR_0);
 const unsigned VAR_3 = VAR_1 / 8;
 const unsigned VAR_4 = FUNC_0(VAR_1 % 8);

 return !!(VAR_2->io_state[VAR_3] & VAR_4);
}
