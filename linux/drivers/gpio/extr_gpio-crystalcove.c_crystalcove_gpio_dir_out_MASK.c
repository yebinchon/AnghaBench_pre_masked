
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct crystalcove_gpio {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crystalcove_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3,
        int VAR_4)
{
 struct crystalcove_gpio *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = FUNC_2(VAR_3, VAR_1);

 if (VAR_6 < 0)
  return 0;

 return FUNC_1(VAR_5->regmap, VAR_6, VAR_0 | VAR_4);
}
