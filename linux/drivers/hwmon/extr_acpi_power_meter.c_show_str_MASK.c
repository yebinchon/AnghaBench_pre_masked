
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_power_meter_resource {char* model_number; char* serial_number; char* oem_info; } ;
struct acpi_device {struct acpi_power_meter_resource* driver_data; } ;
typedef int ssize_t ;
typedef char* acpi_string ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,char*,char*) ;
 struct acpi_device* FUNC_2 (struct device*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
   struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct acpi_device *VAR_4 = FUNC_2(VAR_0);
 struct acpi_power_meter_resource *VAR_5 = VAR_4->driver_data;
 acpi_string VAR_6;

 switch (VAR_3->index) {
 case 0:
  VAR_6 = VAR_5->model_number;
  break;
 case 1:
  VAR_6 = VAR_5->serial_number;
  break;
 case 2:
  VAR_6 = VAR_5->oem_info;
  break;
 default:
  FUNC_0(1, "Implementation error: unexpected attribute index %d\n",
       VAR_3->index);
  VAR_6 = "";
  break;
 }

 return FUNC_1(VAR_2, "%s\n", VAR_6);
}
