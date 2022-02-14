
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp873x_gpio {TYPE_1__* lp873; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 struct lp873x_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct lp873x_gpio *VAR_4 = FUNC_1(VAR_2);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_4->lp873->regmap, VAR_1, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_6 & FUNC_0(VAR_3 * VAR_0);
}
