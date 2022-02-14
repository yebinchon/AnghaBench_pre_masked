
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
 int VAR_1 ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 struct device* FUNC_4 (struct device*,int ,struct regmap*,int ) ;
 struct regmap* FUNC_5 (struct i2c_client*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct device *VAR_7;
 struct regmap *VAR_8;

 VAR_8 = FUNC_5(VAR_4, &VAR_3);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_6, "failed to allocate register map\n");
  return FUNC_1(VAR_8);
 }


 FUNC_6(VAR_8, VAR_0, 0x00);
 FUNC_6(VAR_8, VAR_1, 0x00);

 VAR_7 = FUNC_4(VAR_6, VAR_4->name,
          VAR_8,
          VAR_2);
 return FUNC_2(VAR_7);
}
