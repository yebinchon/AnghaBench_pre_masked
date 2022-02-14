
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pem_data {int fans_supported; int ** groups; scalar_t__* fan_speed; int input_length; scalar_t__* input_string; scalar_t__* firmware_rev; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 struct device* FUNC_2 (struct device*,int ,struct pem_data*,int **) ;
 struct pem_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_adapter*,int) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct i2c_client*,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_12,
       const struct i2c_device_id *VAR_13)
{
 struct i2c_adapter *VAR_14 = VAR_12->adapter;
 struct device *VAR_15 = &VAR_12->dev;
 struct device *VAR_16;
 struct pem_data *VAR_17;
 int VAR_18, VAR_19 = 0;

 if (!FUNC_4(VAR_14, VAR_3
         | VAR_4))
  return -VAR_0;

 VAR_17 = FUNC_3(VAR_15, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->client = VAR_12;
 FUNC_6(&VAR_17->update_lock);





 VAR_18 = FUNC_7(VAR_12, VAR_7,
        VAR_17->firmware_rev, sizeof(VAR_17->firmware_rev));
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_12, VAR_5);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_1(VAR_15, "Firmware revision %d.%d.%d\n",
   VAR_17->firmware_rev[0], VAR_17->firmware_rev[1],
   VAR_17->firmware_rev[2]);


 VAR_17->groups[VAR_19++] = &VAR_10;







 VAR_18 = FUNC_7(VAR_12, VAR_8,
        VAR_17->input_string,
        sizeof(VAR_17->input_string) - 1);
 if (!VAR_18 && (VAR_17->input_string[0] || VAR_17->input_string[1] ||
       VAR_17->input_string[2]))
  VAR_17->input_length = sizeof(VAR_17->input_string) - 1;
 else if (VAR_18 < 0) {

  VAR_18 = FUNC_7(VAR_12, VAR_8,
        VAR_17->input_string,
        sizeof(VAR_17->input_string));
  if (!VAR_18 && (VAR_17->input_string[0] || VAR_17->input_string[1] ||
       VAR_17->input_string[2] || VAR_17->input_string[3]))
   VAR_17->input_length = sizeof(VAR_17->input_string);
 }

 if (VAR_17->input_length)
  VAR_17->groups[VAR_19++] = &VAR_11;







 VAR_18 = FUNC_7(VAR_12, VAR_6,
        VAR_17->fan_speed,
        sizeof(VAR_17->fan_speed));
 if (!VAR_18 && (VAR_17->fan_speed[0] || VAR_17->fan_speed[1] ||
       VAR_17->fan_speed[2] || VAR_17->fan_speed[3])) {
  VAR_17->fans_supported = 1;
  VAR_17->groups[VAR_19++] = &VAR_9;
 }

 VAR_16 = FUNC_2(VAR_15, VAR_12->name,
          VAR_17, VAR_17->groups);
 return FUNC_0(VAR_16);
}
