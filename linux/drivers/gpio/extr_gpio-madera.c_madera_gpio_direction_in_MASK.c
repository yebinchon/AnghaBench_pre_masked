
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_gpio {struct madera* madera; } ;
struct madera {int regmap; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct madera_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct madera_gpio *VAR_5 = FUNC_0(VAR_3);
 struct madera *VAR_6 = VAR_5->madera;
 unsigned int VAR_7 = 2 * VAR_4;

 return FUNC_1(VAR_6->regmap,
      VAR_2 + VAR_7,
      VAR_1, VAR_0);
}
