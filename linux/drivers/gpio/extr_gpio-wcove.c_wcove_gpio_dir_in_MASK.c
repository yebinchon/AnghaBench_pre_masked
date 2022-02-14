
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_gpio {int regmap; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wcove_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct wcove_gpio *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = FUNC_2(VAR_3, VAR_1);

 if (VAR_5 < 0)
  return 0;

 return FUNC_1(VAR_4->regmap, VAR_5, VAR_0);
}
