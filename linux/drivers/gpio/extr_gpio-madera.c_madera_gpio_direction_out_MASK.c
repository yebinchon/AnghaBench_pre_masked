
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_gpio {struct madera* madera; } ;
struct madera {int regmap; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct madera_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,scalar_t__,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_5,
         unsigned int VAR_6, int VAR_7)
{
 struct madera_gpio *VAR_8 = FUNC_0(VAR_5);
 struct madera *VAR_9 = VAR_8->madera;
 unsigned int VAR_10 = 2 * VAR_6;
 unsigned int VAR_11 = VAR_7 ? VAR_1 : 0;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9->regmap,
     VAR_4 + VAR_10,
     VAR_0, 0);
 if (VAR_12 < 0)
  return VAR_12;

 return FUNC_1(VAR_9->regmap,
      VAR_3 + VAR_10,
      VAR_2, VAR_11);
}
