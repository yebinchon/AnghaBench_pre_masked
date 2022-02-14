
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int irq; int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,char*) ;
 struct regmap* FUNC_3 (struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *,int ,int ,int ,struct regmap*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1,
        const struct i2c_device_id *VAR_2)
{
 struct regmap *VAR_3;

 VAR_3 = FUNC_3(VAR_1, &VAR_0);
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_1->dev, "failed to init registers map");
  return FUNC_1(VAR_3);
 }

 return FUNC_5(&VAR_1->dev, VAR_2->name, VAR_1->irq,
        FUNC_4(VAR_1), VAR_3);
}
