
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm355x_reg_data {int regno; } ;
struct lm355x_chip_data {size_t type; int cdev_flash; int cdev_torch; int cdev_indicator; int regmap; struct lm355x_reg_data* regs; } ;
struct i2c_client {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 struct lm355x_chip_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int * VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2)
{
 struct lm355x_chip_data *VAR_3 = FUNC_1(VAR_2);
 struct lm355x_reg_data *VAR_4 = VAR_3->regs;

 FUNC_3(VAR_3->regmap, VAR_4[VAR_0].regno, 0);
 FUNC_2(&VAR_3->cdev_indicator);
 FUNC_2(&VAR_3->cdev_torch);
 FUNC_2(&VAR_3->cdev_flash);
 FUNC_0(&VAR_2->dev, "%s is removed\n", VAR_1[VAR_3->type]);

 return 0;
}
