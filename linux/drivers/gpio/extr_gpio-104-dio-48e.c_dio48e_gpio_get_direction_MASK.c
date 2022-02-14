
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct dio48e_gpio {unsigned int const* io_state; } ;


 unsigned int FUNC_0 (unsigned int) ;
 struct dio48e_gpio* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct dio48e_gpio *const VAR_2 = FUNC_1(VAR_0);
 const unsigned VAR_3 = VAR_1 / 8;
 const unsigned VAR_4 = FUNC_0(VAR_1 % 8);

 return !!(VAR_2->io_state[VAR_3] & VAR_4);
}
