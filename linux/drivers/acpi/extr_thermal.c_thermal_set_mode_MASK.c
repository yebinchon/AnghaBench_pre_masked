
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct acpi_thermal {int tz_enabled; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct acpi_thermal*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_4,
    enum thermal_device_mode VAR_5)
{
 struct acpi_thermal *VAR_6 = VAR_4->devdata;
 int VAR_7;

 if (!VAR_6)
  return -VAR_1;




 if (VAR_5 == VAR_3)
  VAR_7 = 1;
 else if (VAR_5 == VAR_2) {
  VAR_7 = 0;
  FUNC_2("thermal zone will be disabled\n");
 } else
  return -VAR_1;

 if (VAR_7 != VAR_6->tz_enabled) {
  VAR_6->tz_enabled = VAR_7;
  FUNC_0((VAR_0,
   "%s kernel ACPI thermal control\n",
   VAR_6->tz_enabled ? "Enable" : "Disable"));
  FUNC_1(VAR_6);
 }
 return 0;
}
