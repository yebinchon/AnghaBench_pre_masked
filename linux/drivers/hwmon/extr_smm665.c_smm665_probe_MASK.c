
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm665_data {int type; struct i2c_client* cmdreg; void** alarm_max_limit; void** critical_max_limit; void** alarm_min_limit; void** critical_min_limit; int conversion_time; struct i2c_client* client; int update_lock; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int addr; int name; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct device {int addr; int name; int dev; struct i2c_adapter* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct i2c_client* FUNC_2 (int *,int ,struct smm665_data*,int ) ;
 struct smm665_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_adapter*,int) ;
 struct i2c_client* FUNC_5 (struct i2c_adapter*,int) ;
 int FUNC_6 (struct i2c_client*,struct smm665_data*) ;
 scalar_t__ FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (int *) ;


 void* FUNC_10 (int,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct i2c_client*,scalar_t__) ;



 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_14,
   const struct i2c_device_id *VAR_15)
{
 struct i2c_adapter *VAR_16 = VAR_14->adapter;
 struct smm665_data *VAR_17;
 struct device *VAR_18;
 int VAR_19, VAR_20;

 if (!FUNC_4(VAR_16, VAR_3
         | VAR_4))
  return -VAR_0;

 if (FUNC_7(VAR_14, VAR_7) < 0)
  return -VAR_0;

 VAR_17 = FUNC_3(&VAR_14->dev, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 FUNC_6(VAR_14, VAR_17);
 FUNC_9(&VAR_17->update_lock);

 VAR_17->client = VAR_14;
 VAR_17->type = VAR_15->driver_data;
 VAR_17->cmdreg = FUNC_5(VAR_16, (VAR_14->addr & ~VAR_12)
         | VAR_8);
 if (FUNC_0(VAR_17->cmdreg))
  return FUNC_1(VAR_17->cmdreg);

 switch (VAR_17->type) {
 case 132:
 case 131:
  VAR_17->conversion_time = VAR_5;
  break;
 case 130:
 case 129:
 case 128:
  VAR_17->conversion_time = VAR_6;
  break;
 }

 VAR_20 = -VAR_0;
 if (FUNC_7(VAR_17->cmdreg, VAR_10) < 0)
  goto out_unregister;
 for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
  int VAR_21;

  VAR_21 = FUNC_12(VAR_14, VAR_9 + VAR_19 * 8);
  if (FUNC_13(VAR_21 < 0))
   goto out_unregister;
  VAR_17->critical_min_limit[VAR_19] = VAR_17->alarm_min_limit[VAR_19]
    = FUNC_10(VAR_21, VAR_19);
  VAR_21 = FUNC_12(VAR_14, VAR_9 + VAR_19 * 8 + 2);
  if (FUNC_13(VAR_21 < 0))
   goto out_unregister;
  if (FUNC_11(VAR_21))
   VAR_17->critical_min_limit[VAR_19] = FUNC_10(VAR_21, VAR_19);
  else
   VAR_17->alarm_min_limit[VAR_19] = FUNC_10(VAR_21, VAR_19);
  VAR_21 = FUNC_12(VAR_14, VAR_9 + VAR_19 * 8 + 4);
  if (FUNC_13(VAR_21 < 0))
   goto out_unregister;
  VAR_17->critical_max_limit[VAR_19] = VAR_17->alarm_max_limit[VAR_19]
    = FUNC_10(VAR_21, VAR_19);
  VAR_21 = FUNC_12(VAR_14, VAR_9 + VAR_19 * 8 + 6);
  if (FUNC_13(VAR_21 < 0))
   goto out_unregister;
  if (FUNC_11(VAR_21))
   VAR_17->critical_max_limit[VAR_19] = FUNC_10(VAR_21, VAR_19);
  else
   VAR_17->alarm_max_limit[VAR_19] = FUNC_10(VAR_21, VAR_19);
 }

 VAR_18 = FUNC_2(&VAR_14->dev,
          VAR_14->name, VAR_17,
          VAR_13);
 if (FUNC_0(VAR_18)) {
  VAR_20 = FUNC_1(VAR_18);
  goto out_unregister;
 }

 return 0;

out_unregister:
 FUNC_8(VAR_17->cmdreg);
 return VAR_20;
}
