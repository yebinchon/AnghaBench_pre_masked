
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idio_16_gpio {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct idio_16_gpio* FUNC_1 (struct gpio_chip*) ;
 unsigned int const FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct idio_16_gpio *const VAR_3 = FUNC_1(VAR_1);
 const unsigned VAR_4 = FUNC_0(VAR_2-16);

 if (VAR_2 < 16)
  return -VAR_0;

 if (VAR_2 < 24)
  return !!(FUNC_2(VAR_3->base + 1) & VAR_4);

 return !!(FUNC_2(VAR_3->base + 5) & (VAR_4>>8));
}
