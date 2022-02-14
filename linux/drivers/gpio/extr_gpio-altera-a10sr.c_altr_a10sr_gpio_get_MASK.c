
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct altr_a10sr_gpio {int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct altr_a10sr_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct altr_a10sr_gpio *VAR_4 = FUNC_1(VAR_2);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_4->regmap, VAR_1, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 return !!(VAR_6 & FUNC_0(VAR_3 - VAR_0));
}
