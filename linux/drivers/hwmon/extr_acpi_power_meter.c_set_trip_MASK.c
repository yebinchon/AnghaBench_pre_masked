
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_power_meter_resource {unsigned long* trip; int lock; } ;
struct acpi_device {struct acpi_power_meter_resource* driver_data; } ;
typedef int ssize_t ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct acpi_power_meter_resource*) ;
 struct acpi_device* FUNC_5 (struct device*) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_6(VAR_1);
 struct acpi_device *VAR_5 = FUNC_5(VAR_0);
 struct acpi_power_meter_resource *VAR_6 = VAR_5->driver_data;
 int VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_1(VAR_2, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_0(VAR_8, 1000);

 FUNC_2(&VAR_6->lock);
 VAR_6->trip[VAR_4->index - 7] = VAR_8;
 VAR_7 = FUNC_4(VAR_6);
 FUNC_3(&VAR_6->lock);

 if (VAR_7)
  return VAR_7;

 return VAR_3;
}
