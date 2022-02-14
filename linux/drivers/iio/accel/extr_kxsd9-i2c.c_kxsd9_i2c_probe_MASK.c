
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int reg_bits; int val_bits; int max_register; } ;
struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,char*,int) ;
 struct regmap* FUNC_3 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_4 (int *,struct regmap*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0,
      const struct i2c_device_id *VAR_1)
{
 static const struct regmap_config VAR_2 = {
  .reg_bits = 8,
  .val_bits = 8,
  .max_register = 0x0e,
 };
 struct regmap *VAR_3;

 VAR_3 = FUNC_3(VAR_0, &VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_0->dev, "Failed to register i2c regmap %d\n",
   (int)FUNC_1(VAR_3));
  return FUNC_1(VAR_3);
 }

 return FUNC_4(&VAR_0->dev,
      VAR_3,
      VAR_0->name);
}
