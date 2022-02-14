
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct shtc1_platform_data {int blocking_io; int high_precision; } ;
struct shtc1_data {int chip; int update_lock; struct shtc1_platform_data setup; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct device {scalar_t__ platform_data; } ;
struct i2c_client {int name; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
typedef int id_reg_buf ;
typedef enum shtcx_chips { ____Placeholder_shtcx_chips } shtcx_chips ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct device* FUNC_5 (struct device*,int ,struct shtc1_data*,int ) ;
 struct shtc1_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct i2c_adapter*,int ) ;
 int FUNC_8 (struct i2c_client*,char*,int) ;
 int FUNC_9 (struct i2c_client*,int ,int) ;
 int FUNC_10 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (struct shtc1_data*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_12,
         const struct i2c_device_id *VAR_13)
{
 int VAR_14;
 u16 VAR_15;
 char VAR_16[2];
 struct shtc1_data *VAR_17;
 struct device *VAR_18;
 enum shtcx_chips VAR_19 = VAR_13->driver_data;
 struct i2c_adapter *VAR_20 = VAR_12->adapter;
 struct device *VAR_21 = &VAR_12->dev;

 if (!FUNC_7(VAR_20, VAR_3)) {
  FUNC_4(VAR_21, "plain i2c transactions not supported\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_9(VAR_12, VAR_9, VAR_4);
 if (VAR_14 != VAR_4) {
  FUNC_4(VAR_21, "could not send read_id_reg command: %d\n", VAR_14);
  return VAR_14 < 0 ? VAR_14 : -VAR_0;
 }
 VAR_14 = FUNC_8(VAR_12, VAR_16, sizeof(VAR_16));
 if (VAR_14 != sizeof(VAR_16)) {
  FUNC_4(VAR_21, "could not read ID register: %d\n", VAR_14);
  return -VAR_0;
 }

 VAR_15 = FUNC_2((__be16 *)VAR_16);
 if (VAR_19 == VAR_11) {
  if ((VAR_15 & VAR_8) != VAR_7) {
   FUNC_4(VAR_21, "SHTC3 ID register does not match\n");
   return -VAR_0;
  }
 } else if ((VAR_15 & VAR_6) != VAR_5) {
  FUNC_4(VAR_21, "SHTC1 ID register does not match\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_6(VAR_21, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->setup.blocking_io = 0;
 VAR_17->setup.high_precision = 1;
 VAR_17->client = VAR_12;
 VAR_17->chip = VAR_19;

 if (VAR_12->dev.platform_data)
  VAR_17->setup = *(struct shtc1_platform_data *)VAR_21->platform_data;
 FUNC_11(VAR_17);
 FUNC_10(&VAR_17->update_lock);

 VAR_18 = FUNC_5(VAR_21,
          VAR_12->name,
          VAR_17,
          VAR_10);
 if (FUNC_0(VAR_18))
  FUNC_3(VAR_21, "unable to register hwmon device\n");

 return FUNC_1(VAR_18);
}
