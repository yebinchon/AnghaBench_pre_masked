
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts4900_gpio_priv {int regmap; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ts4900_gpio_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2,
     unsigned int VAR_3, int VAR_4)
{
 struct ts4900_gpio_priv *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if (VAR_4)
  VAR_6 = FUNC_1(VAR_5->regmap, VAR_3, VAR_0 |
        VAR_1);
 else
  VAR_6 = FUNC_1(VAR_5->regmap, VAR_3, VAR_0);

 return VAR_6;
}
