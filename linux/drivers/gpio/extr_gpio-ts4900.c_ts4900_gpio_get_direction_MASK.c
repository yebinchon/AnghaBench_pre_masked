
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts4900_gpio_priv {int regmap; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 struct ts4900_gpio_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1,
         unsigned int VAR_2)
{
 struct ts4900_gpio_priv *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;

 FUNC_1(VAR_3->regmap, VAR_2, &VAR_4);

 return !(VAR_4 & VAR_0);
}
