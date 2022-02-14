
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4306 {int regmap; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 struct ltc4306* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
          unsigned int VAR_2)
{
 struct ltc4306 *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->regmap, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return !!(VAR_4 & FUNC_0(7 - VAR_2));
}
