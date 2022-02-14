
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct i2c_board_info {int addr; } ;
struct i2c_adapter {int dummy; } ;
struct i2c_acpi_lookup {int index; int adapter_handle; int device_handle; struct i2c_board_info* info; } ;
struct device {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int lookup ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i2c_client* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct acpi_device*,int *,int ,struct i2c_acpi_lookup*) ;
 int FUNC_5 (struct acpi_device*) ;
 int VAR_4 ;
 struct i2c_adapter* FUNC_6 (int ) ;
 struct i2c_client* FUNC_7 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_8 (struct i2c_acpi_lookup*,int ,int) ;
 int VAR_5 ;

struct i2c_client *FUNC_9(struct device *VAR_6, int VAR_7,
           struct i2c_board_info *VAR_8)
{
 struct i2c_acpi_lookup VAR_9;
 struct i2c_adapter *VAR_10;
 struct i2c_client *VAR_11;
 struct acpi_device *VAR_12;
 FUNC_2(VAR_5);
 int VAR_13;

 VAR_12 = FUNC_0(VAR_6);
 if (!VAR_12)
  return FUNC_1(-VAR_1);

 FUNC_8(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.info = VAR_8;
 VAR_9.device_handle = FUNC_5(VAR_12);
 VAR_9.index = VAR_7;

 VAR_13 = FUNC_4(VAR_12, &VAR_5,
         VAR_4, &VAR_9);
 if (VAR_13 < 0)
  return FUNC_1(VAR_13);

 FUNC_3(&VAR_5);

 if (!VAR_8->addr)
  return FUNC_1(-VAR_0);

 VAR_10 = FUNC_6(VAR_9.adapter_handle);
 if (!VAR_10)
  return FUNC_1(-VAR_3);

 VAR_11 = FUNC_7(VAR_10, VAR_8);
 if (!VAR_11)
  return FUNC_1(-VAR_2);

 return VAR_11;
}
