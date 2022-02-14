
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stx104_gpio {int base; } ;
struct gpio_chip {int dummy; } ;


 struct stx104_gpio* FUNC_0 (struct gpio_chip*) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned long *VAR_1,
 unsigned long *VAR_2)
{
 struct stx104_gpio *const VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = FUNC_1(VAR_3->base);

 return 0;
}
