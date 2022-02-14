
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3943_gpio {int input_mask; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 struct lp3943_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct lp3943_gpio*,struct gpio_chip*,unsigned int) ;
 int FUNC_3 (struct lp3943_gpio*,struct gpio_chip*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct lp3943_gpio *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2->input_mask & FUNC_0(VAR_1))
  return FUNC_2(VAR_2, VAR_0, VAR_1);
 else
  return FUNC_3(VAR_2, VAR_0, VAR_1);
}
