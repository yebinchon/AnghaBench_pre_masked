
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
 unsigned int VAR_2 ;
 int VAR_3 ;


 struct lp873x_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_4, unsigned VAR_5,
      unsigned long VAR_6)
{
 struct lp873x_gpio *VAR_7 = FUNC_1(VAR_4);

 switch (FUNC_2(VAR_6)) {
 case 129:
  return FUNC_3(VAR_7->lp873->regmap,
       VAR_3,
       FUNC_0(VAR_5 * VAR_0 +
       VAR_2),
       FUNC_0(VAR_5 * VAR_0 +
       VAR_2));

 case 128:
  return FUNC_3(VAR_7->lp873->regmap,
       VAR_3,
       FUNC_0(VAR_5 * VAR_0 +
       VAR_2), 0);
 default:
  return -VAR_1;
 }
}
