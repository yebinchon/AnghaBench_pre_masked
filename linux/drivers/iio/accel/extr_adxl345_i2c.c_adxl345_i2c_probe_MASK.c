
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int name; int driver_data; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int) ;
 struct regmap* FUNC_4 (struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2,
        const struct i2c_device_id *VAR_3)
{
 struct regmap *VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2, &VAR_1);
 if (FUNC_0(VAR_4)) {
  FUNC_3(&VAR_2->dev, "Error initializing i2c regmap: %ld\n",
   FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 return FUNC_2(&VAR_2->dev, VAR_4, VAR_3->driver_data,
      VAR_3->name);
}
