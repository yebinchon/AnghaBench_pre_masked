
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idio_16_gpio {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 unsigned long FUNC_0 (int,int) ;
 struct idio_16_gpio* FUNC_1 (struct gpio_chip*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0,
 unsigned long *VAR_1, unsigned long *VAR_2)
{
 struct idio_16_gpio *const VAR_3 = FUNC_1(VAR_0);

 *VAR_2 = 0;
 if (*VAR_1 & FUNC_0(23, 16))
  *VAR_2 |= (unsigned long)FUNC_2(VAR_3->base + 1) << 16;
 if (*VAR_1 & FUNC_0(31, 24))
  *VAR_2 |= (unsigned long)FUNC_2(VAR_3->base + 5) << 24;

 return 0;
}
