
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct adt7470_data {int num_temp_sensors; struct device* auto_update; int lock; struct i2c_client* client; int auto_update_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_3 ;
 int FUNC_2 (struct i2c_client*) ;
 int VAR_4 ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*) ;
 struct device* FUNC_5 (struct device*,int ,struct adt7470_data*,int ) ;
 struct adt7470_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct i2c_client*,struct adt7470_data*) ;
 struct device* FUNC_8 (int ,struct i2c_client*,char*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct adt7470_data *VAR_8;
 struct device *VAR_9;

 VAR_8 = FUNC_6(VAR_7, sizeof(struct adt7470_data), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->num_temp_sensors = -1;
 VAR_8->auto_update_interval = VAR_0;

 FUNC_7(VAR_5, VAR_8);
 VAR_8->client = VAR_5;
 FUNC_9(&VAR_8->lock);

 FUNC_3(&VAR_5->dev, "%s chip found\n", VAR_5->name);


 FUNC_2(VAR_5);


 VAR_9 = FUNC_5(VAR_7, VAR_5->name,
          VAR_8,
          VAR_3);

 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_8->auto_update = FUNC_8(VAR_4, VAR_5, "%s",
     FUNC_4(VAR_9));
 if (FUNC_0(VAR_8->auto_update)) {
  return FUNC_1(VAR_8->auto_update);
 }

 return 0;
}
