
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3601x_led {int regmap; int lock; int fled_cdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lm3601x_led* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3)
{
 struct lm3601x_led *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(&VAR_4->fled_cdev);
 FUNC_2(&VAR_4->lock);

 return FUNC_3(VAR_4->regmap, VAR_1,
      VAR_0,
      VAR_2);
}
