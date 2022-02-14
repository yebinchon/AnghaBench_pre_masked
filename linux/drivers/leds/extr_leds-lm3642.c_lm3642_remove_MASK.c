
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3642_chip_data {int regmap; int cdev_flash; int cdev_torch; int cdev_indicator; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct lm3642_chip_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct lm3642_chip_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->cdev_indicator);
 FUNC_1(&VAR_2->cdev_torch);
 FUNC_1(&VAR_2->cdev_flash);
 FUNC_2(VAR_2->regmap, VAR_0, 0);
 return 0;
}
