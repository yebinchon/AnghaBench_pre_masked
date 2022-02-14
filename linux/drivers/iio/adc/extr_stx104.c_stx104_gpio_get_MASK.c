
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stx104_gpio {int base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct stx104_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct stx104_gpio *const VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 >= 4)
  return -VAR_0;

 return !!(FUNC_2(VAR_3->base) & FUNC_0(VAR_2));
}
