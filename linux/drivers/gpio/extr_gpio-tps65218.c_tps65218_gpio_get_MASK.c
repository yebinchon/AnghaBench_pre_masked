
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65218_gpio {struct tps65218* tps65218; } ;
struct tps65218 {int regmap; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct tps65218_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct tps65218_gpio *VAR_4 = FUNC_0(VAR_2);
 struct tps65218 *VAR_5 = VAR_4->tps65218;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->regmap, VAR_1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return !!(VAR_6 & (VAR_0 << VAR_3));
}
