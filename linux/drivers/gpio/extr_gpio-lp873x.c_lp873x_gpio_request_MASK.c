
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp873x_gpio {TYPE_1__* lp873; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lp873x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct lp873x_gpio *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 switch (VAR_4) {
 case 0:

  break;
 case 1:

  VAR_6 = FUNC_1(VAR_5->lp873->regmap, VAR_2,
      VAR_1, 0);
  if (VAR_6)
   return VAR_6;

  break;
 default:
  return -VAR_0;
 }

 return 0;
}
