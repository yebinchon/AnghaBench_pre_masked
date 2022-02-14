
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts4900_gpio_priv {int regmap; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct ts4900_gpio_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_1, unsigned int VAR_2,
       int VAR_3)
{
 struct ts4900_gpio_priv *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3)
  FUNC_1(VAR_4->regmap, VAR_2, VAR_0,
       VAR_0);
 else
  FUNC_1(VAR_4->regmap, VAR_2, VAR_0, 0);
}
