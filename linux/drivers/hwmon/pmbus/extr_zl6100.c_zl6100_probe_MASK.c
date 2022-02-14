
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct pmbus_driver_info {int pages; int* func; int write_byte; int write_word_data; int read_byte_data; int read_word_data; } ;
struct zl6100_data {scalar_t__ id; void* access; struct pmbus_driver_info info; int delay; } ;
struct i2c_device_id {scalar_t__ driver_data; scalar_t__* name; } ;
struct i2c_client {int dev; int adapter; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*,scalar_t__*,scalar_t__*) ;
 struct zl6100_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct i2c_client*,int ,char*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 void* FUNC_7 () ;
 int FUNC_8 (struct i2c_client*,struct i2c_device_id const*,struct pmbus_driver_info*) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (scalar_t__*,char*,int ) ;
 scalar_t__ VAR_21 ;
 struct i2c_device_id* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_11 (struct zl6100_data*) ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_29,
   const struct i2c_device_id *VAR_30)
{
 int VAR_31;
 struct zl6100_data *VAR_32;
 struct pmbus_driver_info *VAR_33;
 u8 VAR_34[VAR_5 + 1];
 const struct i2c_device_id *VAR_35;

 if (!FUNC_4(VAR_29->adapter,
         VAR_4
         | VAR_3))
  return -VAR_0;

 VAR_31 = FUNC_5(VAR_29, VAR_17,
     VAR_34);
 if (VAR_31 < 0) {
  FUNC_0(&VAR_29->dev, "Failed to read device ID\n");
  return VAR_31;
 }
 VAR_34[VAR_31] = '\0';
 FUNC_1(&VAR_29->dev, "Device ID %s\n", VAR_34);

 VAR_35 = ((void*)0);
 for (VAR_35 = VAR_22; VAR_35->name[0]; VAR_35++) {
  if (!FUNC_10(VAR_35->name, VAR_34, FUNC_9(VAR_35->name)))
   break;
 }
 if (!VAR_35->name[0]) {
  FUNC_0(&VAR_29->dev, "Unsupported device\n");
  return -VAR_0;
 }
 if (VAR_30->driver_data != VAR_35->driver_data)
  FUNC_2(&VAR_29->dev,
      "Device mismatch: Configured %s, detected %s\n",
      VAR_30->name, VAR_35->name);

 VAR_32 = FUNC_3(&VAR_29->dev, sizeof(struct zl6100_data),
       VAR_2);
 if (!VAR_32)
  return -VAR_1;

 VAR_32->id = VAR_35->driver_data;






 VAR_32->delay = VAR_20;





 VAR_32->access = FUNC_7();
 FUNC_11(VAR_32);

 VAR_33 = &VAR_32->info;

 VAR_33->pages = 1;
 VAR_33->func[0] = VAR_14 | VAR_7
   | VAR_16 | VAR_11
   | VAR_6 | VAR_8
   | VAR_12 | VAR_9;





 if (VAR_32->id == VAR_21 || VAR_32->id == VAR_27 || VAR_32->id == VAR_28)
  VAR_33->func[0] |= VAR_15 | VAR_10;

 VAR_31 = FUNC_6(VAR_29, VAR_18);
 if (VAR_31 < 0)
  return VAR_31;

 if (VAR_31 & VAR_19)
  VAR_33->func[0] |= VAR_13;

 VAR_32->access = FUNC_7();
 FUNC_11(VAR_32);

 VAR_33->read_word_data = VAR_24;
 VAR_33->read_byte_data = VAR_23;
 VAR_33->write_word_data = VAR_26;
 VAR_33->write_byte = VAR_25;

 return FUNC_8(VAR_29, VAR_35, VAR_33);
}
