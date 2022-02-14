
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_gpio {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct thunderx_gpio* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (struct thunderx_gpio*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct thunderx_gpio *VAR_3 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_2) ? 0 : -VAR_0;
}
