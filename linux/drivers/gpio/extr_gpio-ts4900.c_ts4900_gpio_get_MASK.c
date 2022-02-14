
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts4900_gpio_priv {unsigned int input_bit; int regmap; } ;
struct gpio_chip {int dummy; } ;


 struct ts4900_gpio_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct ts4900_gpio_priv *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;

 FUNC_1(VAR_2->regmap, VAR_1, &VAR_3);

 return !!(VAR_3 & VAR_2->input_bit);
}
