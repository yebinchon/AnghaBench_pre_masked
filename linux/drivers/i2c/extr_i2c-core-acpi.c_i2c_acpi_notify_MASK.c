
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct i2c_client {int dev; } ;
struct i2c_board_info {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;




 int VAR_0 ;
 int FUNC_0 (struct acpi_device*) ;
 struct i2c_adapter* FUNC_1 (int ) ;
 struct i2c_client* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*,struct i2c_board_info*,int *,int *) ;
 int FUNC_4 (struct i2c_adapter*,struct acpi_device*,struct i2c_board_info*) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_1, unsigned long VAR_2,
      void *VAR_3)
{
 struct acpi_device *VAR_4 = VAR_3;
 struct i2c_board_info VAR_5;
 acpi_handle VAR_6;
 struct i2c_adapter *VAR_7;
 struct i2c_client *VAR_8;

 switch (VAR_2) {
 case 129:
  if (FUNC_3(VAR_4, &VAR_5, ((void*)0), &VAR_6))
   break;

  VAR_7 = FUNC_1(VAR_6);
  if (!VAR_7)
   break;

  FUNC_4(VAR_7, VAR_4, &VAR_5);
  break;
 case 128:
  if (!FUNC_0(VAR_4))
   break;

  VAR_8 = FUNC_2(VAR_4);
  if (!VAR_8)
   break;

  FUNC_5(VAR_8);
  FUNC_6(&VAR_8->dev);
  break;
 }

 return VAR_0;
}
