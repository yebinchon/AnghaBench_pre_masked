
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct af9033_dev {int regmap; } ;


 int FUNC_0 (int *,char*) ;
 struct af9033_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct af9033_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct af9033_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_3(VAR_1->regmap);
 FUNC_2(VAR_1);

 return 0;
}
