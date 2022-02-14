
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps68470_gpio_data {struct regmap* tps68470_regmap; } ;
struct regmap {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct tps68470_gpio_data* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct regmap*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct tps68470_gpio_data *VAR_5 = FUNC_1(VAR_3);
 struct regmap *VAR_6 = VAR_5->tps68470_regmap;


 if (VAR_4 >= VAR_2)
  return -VAR_0;

 return FUNC_2(VAR_6, FUNC_0(VAR_4),
       VAR_1, 0x00);
}
