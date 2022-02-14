
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_power_meter_resource {int* trip; int hwmon_dev; int lock; struct acpi_device* acpi_dev; scalar_t__ sensors_valid; } ;
struct acpi_device {int dev; struct acpi_power_meter_resource* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_power_meter_resource*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct acpi_power_meter_resource*) ;
 struct acpi_power_meter_resource* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct acpi_power_meter_resource*) ;
 int FUNC_10 (struct acpi_power_meter_resource*) ;
 int FUNC_11 (struct acpi_power_meter_resource*) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct acpi_device *VAR_5)
{
 int VAR_6;
 struct acpi_power_meter_resource *VAR_7;

 if (!VAR_5)
  return -VAR_2;

 VAR_7 = FUNC_7(sizeof(struct acpi_power_meter_resource),
      VAR_4);
 if (!VAR_7)
  return -VAR_3;

 VAR_7->sensors_valid = 0;
 VAR_7->acpi_dev = VAR_5;
 FUNC_8(&VAR_7->lock);
 FUNC_12(FUNC_3(VAR_5), VAR_1);
 FUNC_12(FUNC_2(VAR_5), VAR_0);
 VAR_5->driver_data = VAR_7;

 FUNC_4(VAR_7);
 VAR_6 = FUNC_9(VAR_7);
 if (VAR_6)
  goto exit_free;

 VAR_7->trip[0] = VAR_7->trip[1] = -1;

 VAR_6 = FUNC_11(VAR_7);
 if (VAR_6)
  goto exit_free;

 VAR_7->hwmon_dev = FUNC_5(&VAR_5->dev);
 if (FUNC_0(VAR_7->hwmon_dev)) {
  VAR_6 = FUNC_1(VAR_7->hwmon_dev);
  goto exit_remove;
 }

 VAR_6 = 0;
 goto exit;

exit_remove:
 FUNC_10(VAR_7);
exit_free:
 FUNC_6(VAR_7);
exit:
 return VAR_6;
}
