
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_board_info {int flags; scalar_t__ addr; } ;
struct i2c_acpi_lookup {int index; int speed; int adapter_handle; int device_handle; int n; struct i2c_board_info* info; } ;
struct TYPE_2__ {int string_ptr; } ;
struct acpi_resource_i2c_serialbus {scalar_t__ access_mode; int connection_speed; scalar_t__ slave_address; TYPE_1__ resource_source; } ;
struct acpi_resource {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct acpi_resource*,struct acpi_resource_i2c_serialbus**) ;

__attribute__((used)) static int FUNC_3(struct acpi_resource *VAR_2, void *VAR_3)
{
 struct i2c_acpi_lookup *VAR_4 = VAR_3;
 struct i2c_board_info *VAR_5 = VAR_4->info;
 struct acpi_resource_i2c_serialbus *VAR_6;
 acpi_status VAR_7;

 if (VAR_5->addr || !FUNC_2(VAR_2, &VAR_6))
  return 1;

 if (VAR_4->index != -1 && VAR_4->n++ != VAR_4->index)
  return 1;

 VAR_7 = FUNC_1(VAR_4->device_handle,
     VAR_6->resource_source.string_ptr,
     &VAR_4->adapter_handle);
 if (FUNC_0(VAR_7))
  return 1;

 VAR_5->addr = VAR_6->slave_address;
 VAR_4->speed = VAR_6->connection_speed;
 if (VAR_6->access_mode == VAR_0)
  VAR_5->flags |= VAR_1;

 return 1;
}
