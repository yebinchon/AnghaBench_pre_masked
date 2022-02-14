
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_data {int ** groups; int mutex; struct device* regmap; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct i2c_client {int dev; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,char*,int ) ;
 struct device* FUNC_3 (int *,int ,struct thermal_data*,int **) ;
 struct thermal_data* FUNC_4 (int *,int,int ) ;
 struct device* FUNC_5 (struct i2c_client*,int *) ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct thermal_data *VAR_9;
 struct device *VAR_10;

 VAR_9 = FUNC_4(&VAR_7->dev, sizeof(struct thermal_data),
       VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_9->regmap = FUNC_5(VAR_7, &VAR_5);
 if (FUNC_0(VAR_9->regmap))
  return FUNC_1(VAR_9->regmap);

 FUNC_6(&VAR_9->mutex);

 switch (VAR_8->driver_data) {
 case 128:
  VAR_9->groups[2] = &VAR_6;

 case 129:
  VAR_9->groups[1] = &VAR_4;

 case 130:
  VAR_9->groups[0] = &VAR_3;
 }

 if (VAR_8->driver_data == 130)
  VAR_9->groups[1] = &VAR_2;

 VAR_10 = FUNC_3(&VAR_7->dev,
          VAR_7->name, VAR_9,
          VAR_9->groups);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_2(&VAR_7->dev, "%s Thermal chip found\n", VAR_8->name);
 return 0;
}
