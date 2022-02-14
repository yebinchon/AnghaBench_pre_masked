
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_4 ;
 int FUNC_2 (int *,struct regmap*,int ,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 struct regmap* FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5,
          const struct i2c_device_id *VAR_6)
{
 struct regmap *VAR_7;

 if (!FUNC_5(VAR_5->adapter,
         VAR_3)) {
  FUNC_3(&VAR_5->dev, "SMBUS Word Data not Supported\n");
  return -VAR_2;
 }

 VAR_7 = FUNC_4(VAR_5, &VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 return FUNC_2(&VAR_5->dev, VAR_7, VAR_5->irq,
       VAR_1, VAR_0);
}
