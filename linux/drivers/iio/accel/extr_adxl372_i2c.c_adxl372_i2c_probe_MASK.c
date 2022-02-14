
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*) ;
 struct regmap* FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2,
        const struct i2c_device_id *VAR_3)
{
 struct regmap *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_2, &VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_5(VAR_4, VAR_0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;


 if (VAR_5 < 3)
  FUNC_3(&VAR_2->dev,
  "I2C might not work properly with other devices on the bus");

 return FUNC_2(&VAR_2->dev, VAR_4, VAR_2->irq, VAR_3->name);
}
