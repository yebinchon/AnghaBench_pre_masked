
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct lp55xx_led* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct lp55xx_chip*) ;
 int FUNC_2 (struct lp55xx_chip*) ;
 int FUNC_3 (struct lp55xx_led*,struct lp55xx_chip*) ;
 int FUNC_4 (struct lp55xx_chip*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct lp55xx_led *VAR_1 = FUNC_0(VAR_0);
 struct lp55xx_chip *VAR_2 = VAR_1->chip;

 FUNC_1(VAR_2);

 FUNC_4(VAR_2);
 FUNC_3(VAR_1, VAR_2);
 FUNC_2(VAR_2);

 return 0;
}
