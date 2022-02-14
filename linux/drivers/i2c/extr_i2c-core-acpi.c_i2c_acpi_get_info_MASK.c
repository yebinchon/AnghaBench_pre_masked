
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_board_info {int type; int fwnode; } ;
struct i2c_adapter {int dev; } ;
struct i2c_acpi_lookup {int index; scalar_t__ adapter_handle; struct i2c_board_info* info; } ;
struct TYPE_2__ {int present; } ;
struct acpi_device {int dev; TYPE_1__ status; } ;
typedef int lookup ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,struct acpi_device**) ;
 scalar_t__ FUNC_2 (struct acpi_device*) ;
 scalar_t__ FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (struct acpi_device*,int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct acpi_device*,struct i2c_acpi_lookup*) ;
 int FUNC_8 (struct i2c_acpi_lookup*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct acpi_device *VAR_2,
        struct i2c_board_info *VAR_3,
        struct i2c_adapter *VAR_4,
        acpi_handle *VAR_5)
{
 struct i2c_acpi_lookup VAR_6;
 int VAR_7;

 FUNC_8(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.info = VAR_3;
 VAR_6.index = -1;

 if (FUNC_3(VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_4) {

  if (FUNC_0(&VAR_4->dev) != VAR_6.adapter_handle)
   return -VAR_1;
 } else {
  struct acpi_device *VAR_8;


  if (FUNC_1(VAR_6.adapter_handle, &VAR_8))
   return -VAR_1;
  if (FUNC_2(VAR_8) ||
      !VAR_8->status.present)
   return -VAR_1;
 }

 VAR_3->fwnode = FUNC_4(VAR_2);
 if (VAR_5)
  *VAR_5 = VAR_6.adapter_handle;

 FUNC_5(VAR_2, FUNC_6(&VAR_2->dev), VAR_3->type,
     sizeof(VAR_3->type));

 return 0;
}
