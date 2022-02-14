
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct i2c_board_info {scalar_t__ dev_name; } ;
struct i2c_adapter {int dummy; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *,char*,int ,...) ;
 int FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_5(struct i2c_adapter *VAR_0,
        struct i2c_client *VAR_1,
        struct i2c_board_info const *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_0(&VAR_1->dev);

 if (VAR_2 && VAR_2->dev_name) {
  FUNC_2(&VAR_1->dev, "i2c-%s", VAR_2->dev_name);
  return;
 }

 if (VAR_3) {
  FUNC_2(&VAR_1->dev, "i2c-%s", FUNC_1(VAR_3));
  return;
 }

 FUNC_2(&VAR_1->dev, "%d-%04x", FUNC_3(VAR_0),
       FUNC_4(VAR_1));
}
