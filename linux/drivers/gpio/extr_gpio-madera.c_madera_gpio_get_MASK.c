
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_gpio {struct madera* madera; } ;
struct madera {int regmap; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct madera_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct madera_gpio *VAR_4 = FUNC_0(VAR_2);
 struct madera *VAR_5 = VAR_4->madera;
 unsigned int VAR_6 = 2 * VAR_3;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5->regmap, VAR_1 + VAR_6,
     &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 return !!(VAR_7 & VAR_0);
}
