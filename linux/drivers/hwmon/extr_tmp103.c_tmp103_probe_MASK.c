
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct device*,char*) ;
 struct device* FUNC_4 (struct device*,int ,struct regmap*,int ) ;
 struct regmap* FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct regmap*) ;
 int FUNC_7 (struct regmap*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_5,
   const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct device *VAR_8;
 struct regmap *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_5, &VAR_4);
 if (FUNC_0(VAR_9)) {
  FUNC_3(VAR_7, "failed to allocate register map\n");
  return FUNC_1(VAR_9);
 }

 VAR_10 = FUNC_7(VAR_9, VAR_2, VAR_1,
     VAR_0);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_5->dev, "error writing config register\n");
  return VAR_10;
 }

 FUNC_6(VAR_5, VAR_9);
 VAR_8 = FUNC_4(VAR_7, VAR_5->name,
            VAR_9, VAR_3);
 return FUNC_2(VAR_8);
}
