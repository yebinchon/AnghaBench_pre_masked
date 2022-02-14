
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_battery {unsigned long alarm; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (struct acpi_battery*) ;
 int FUNC_1 (struct acpi_battery*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,char*,unsigned long*) ;
 struct acpi_battery* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4;
 struct acpi_battery *VAR_5 = FUNC_4(FUNC_2(VAR_0));
 if (FUNC_3(VAR_2, "%lu\n", &VAR_4) == 1)
  VAR_5->alarm = VAR_4/1000;
 if (FUNC_0(VAR_5))
  FUNC_1(VAR_5);
 return VAR_3;
}
