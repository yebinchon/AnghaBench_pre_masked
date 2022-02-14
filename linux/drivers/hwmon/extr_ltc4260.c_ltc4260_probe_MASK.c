
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_0 ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 struct device* FUNC_4 (struct device*,int ,struct regmap*,int ) ;
 struct regmap* FUNC_5 (struct i2c_client*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3,
    const struct i2c_device_id *VAR_4)
{
 struct device *VAR_5 = &VAR_3->dev;
 struct device *VAR_6;
 struct regmap *VAR_7;

 VAR_7 = FUNC_5(VAR_3, &VAR_2);
 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_5, "failed to allocate register map\n");
  return FUNC_1(VAR_7);
 }


 FUNC_6(VAR_7, VAR_0, 0x00);

 VAR_6 = FUNC_4(VAR_5, VAR_3->name,
          VAR_7,
          VAR_1);
 return FUNC_2(VAR_6);
}
