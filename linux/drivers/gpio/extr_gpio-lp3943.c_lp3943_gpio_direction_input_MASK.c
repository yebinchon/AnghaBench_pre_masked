
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3943_gpio {int input_mask; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct lp3943_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct lp3943_gpio*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct lp3943_gpio *VAR_3 = FUNC_1(VAR_1);

 VAR_3->input_mask |= FUNC_0(VAR_2);

 return FUNC_2(VAR_3, VAR_2, VAR_0);
}
