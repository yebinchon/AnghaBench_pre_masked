
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int min_avg_interval; int max_avg_interval; int min_cap; int max_cap; int hysteresis; int flags; } ;
struct acpi_power_meter_resource {int* trip; int cap; int power; TYPE_1__ caps; } ;
struct acpi_device {struct acpi_power_meter_resource* driver_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,char*,...) ;
 struct acpi_device* FUNC_2 (struct device*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
   struct device_attribute *VAR_3,
   char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_3(VAR_3);
 struct acpi_device *VAR_6 = FUNC_2(VAR_2);
 struct acpi_power_meter_resource *VAR_7 = VAR_6->driver_data;
 u64 VAR_8 = 0;

 switch (VAR_5->index) {
 case 0:
  VAR_8 = VAR_7->caps.min_avg_interval;
  break;
 case 1:
  VAR_8 = VAR_7->caps.max_avg_interval;
  break;
 case 2:
  VAR_8 = VAR_7->caps.min_cap * 1000;
  break;
 case 3:
  VAR_8 = VAR_7->caps.max_cap * 1000;
  break;
 case 4:
  if (VAR_7->caps.hysteresis == VAR_1)
   return FUNC_1(VAR_4, "unknown\n");

  VAR_8 = VAR_7->caps.hysteresis * 1000;
  break;
 case 5:
  if (VAR_7->caps.flags & VAR_0)
   VAR_8 = 1;
  else
   VAR_8 = 0;
  break;
 case 6:
  if (VAR_7->power > VAR_7->cap)
   VAR_8 = 1;
  else
   VAR_8 = 0;
  break;
 case 7:
 case 8:
  if (VAR_7->trip[VAR_5->index - 7] < 0)
   return FUNC_1(VAR_4, "unknown\n");

  VAR_8 = VAR_7->trip[VAR_5->index - 7] * 1000;
  break;
 default:
  FUNC_0(1, "Implementation error: unexpected attribute index %d\n",
       VAR_5->index);
  break;
 }

 return FUNC_1(VAR_4, "%llu\n", VAR_8);
}
