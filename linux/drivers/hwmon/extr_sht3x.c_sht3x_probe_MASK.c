
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht3x_platform_data {int blocking_io; int high_precision; } ;
struct sht3x_data {int data_lock; int i2c_lock; struct sht3x_platform_data setup; struct i2c_client* client; scalar_t__ last_update; scalar_t__ mode; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {scalar_t__ platform_data; } ;
struct i2c_client {int name; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct device* FUNC_4 (struct device*,int ,struct sht3x_data*,struct attribute_group const**) ;
 struct sht3x_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct i2c_adapter*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (struct sht3x_data*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 struct attribute_group** VAR_9 ;
 int FUNC_11 (struct sht3x_data*) ;
 scalar_t__ VAR_10 ;
 struct attribute_group** VAR_11 ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_12,
         const struct i2c_device_id *VAR_13)
{
 int VAR_14;
 struct sht3x_data *VAR_15;
 struct device *VAR_16;
 struct i2c_adapter *VAR_17 = VAR_12->adapter;
 struct device *VAR_18 = &VAR_12->dev;
 const struct attribute_group **VAR_19;






 if (!FUNC_6(VAR_17, VAR_3))
  return -VAR_0;

 VAR_14 = FUNC_7(VAR_12, VAR_7,
         VAR_4);
 if (VAR_14 != VAR_4)
  return VAR_14 < 0 ? VAR_14 : -VAR_0;

 VAR_15 = FUNC_5(VAR_18, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->setup.blocking_io = 0;
 VAR_15->setup.high_precision = 1;
 VAR_15->mode = 0;
 VAR_15->last_update = VAR_6 - FUNC_9(3000);
 VAR_15->client = VAR_12;
 FUNC_2(VAR_8, VAR_5);

 if (VAR_12->dev.platform_data)
  VAR_15->setup = *(struct sht3x_platform_data *)VAR_18->platform_data;

 FUNC_11(VAR_15);

 FUNC_10(&VAR_15->i2c_lock);
 FUNC_10(&VAR_15->data_lock);






 FUNC_12(500, 600);

 VAR_14 = FUNC_8(VAR_15);
 if (VAR_14)
  return VAR_14;

 if (VAR_13->driver_data == VAR_10)
  VAR_19 = VAR_11;
 else
  VAR_19 = VAR_9;

 VAR_16 = FUNC_4(VAR_18,
          VAR_12->name,
          VAR_15,
          VAR_19);

 if (FUNC_0(VAR_16))
  FUNC_3(VAR_18, "unable to register hwmon device\n");

 return FUNC_1(VAR_16);
}
