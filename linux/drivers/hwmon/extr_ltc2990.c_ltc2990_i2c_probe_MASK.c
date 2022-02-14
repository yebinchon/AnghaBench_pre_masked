
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2990_data {int* mode; struct i2c_client* i2c; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; int adapter; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int*,int) ;
 struct device* FUNC_4 (int *,int ,struct ltc2990_data*,int ) ;
 struct ltc2990_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_13,
        const struct i2c_device_id *VAR_14)
{
 int VAR_15;
 struct device *VAR_16;
 struct ltc2990_data *VAR_17;

 if (!FUNC_6(VAR_13->adapter, VAR_4 |
         VAR_5))
  return -VAR_1;

 VAR_17 = FUNC_5(&VAR_13->dev, sizeof(struct ltc2990_data), VAR_3);
 if (FUNC_9(!VAR_17))
  return -VAR_2;

 VAR_17->i2c = VAR_13;

 if (FUNC_2(&VAR_13->dev)) {
  VAR_15 = FUNC_3(&VAR_13->dev,
           "lltc,meas-mode",
           VAR_17->mode, 2);
  if (VAR_15 < 0)
   return VAR_15;

  if (VAR_17->mode[0] & ~VAR_7 ||
      VAR_17->mode[1] & ~VAR_9)
   return -VAR_0;
 } else {
  VAR_15 = FUNC_7(VAR_13, VAR_6);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_17->mode[0] = VAR_15 >> VAR_8 & VAR_7;
  VAR_17->mode[1] = VAR_15 >> VAR_10 & VAR_9;
 }


 VAR_15 = FUNC_8(VAR_13, VAR_6,
     VAR_17->mode[0] << VAR_8 |
     VAR_17->mode[1] << VAR_10);
 if (VAR_15 < 0) {
  FUNC_1(&VAR_13->dev, "Error: Failed to set control mode.\n");
  return VAR_15;
 }

 VAR_15 = FUNC_8(VAR_13, VAR_11, 1);
 if (VAR_15 < 0) {
  FUNC_1(&VAR_13->dev, "Error: Failed to start acquisition.\n");
  return VAR_15;
 }

 VAR_16 = FUNC_4(&VAR_13->dev,
          VAR_13->name,
          VAR_17,
          VAR_12);

 return FUNC_0(VAR_16);
}
