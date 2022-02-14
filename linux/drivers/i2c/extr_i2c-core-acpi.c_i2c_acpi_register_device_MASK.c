
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_board_info {int dummy; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_3__ {int ignore_parent; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;
struct acpi_device {int dev; TYPE_2__ power; } ;


 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i2c_adapter*,struct i2c_board_info*) ;

__attribute__((used)) static void FUNC_4(struct i2c_adapter *VAR_0,
         struct acpi_device *VAR_1,
         struct i2c_board_info *VAR_2)
{
 VAR_1->power.flags.ignore_parent = 1;
 FUNC_0(VAR_1);

 if (!FUNC_3(VAR_0, VAR_2)) {
  VAR_1->power.flags.ignore_parent = 0;
  FUNC_1(&VAR_0->dev,
   "failed to add I2C device %s from ACPI\n",
   FUNC_2(&VAR_1->dev));
 }
}
