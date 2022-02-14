
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_battery {int alarm_capacity; } ;
typedef int ssize_t ;


 int FUNC_0 (struct acpi_battery*) ;
 int FUNC_1 (struct acpi_battery*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 struct acpi_battery* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct acpi_battery *VAR_3 = FUNC_4(FUNC_2(VAR_0));
 FUNC_0(VAR_3);
 return FUNC_3(VAR_2, "%d\n", VAR_3->alarm_capacity *
    FUNC_1(VAR_3) * 1000);
}
