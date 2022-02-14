
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct crystalcove_gpio {int regmap; } ;


 int VAR_0 ;
 struct crystalcove_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int,unsigned int*) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct crystalcove_gpio *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;
 int VAR_5, VAR_6 = FUNC_2(VAR_2, VAR_0);

 if (VAR_6 < 0)
  return 0;

 VAR_5 = FUNC_1(VAR_3->regmap, VAR_6, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return VAR_4 & 0x1;
}
