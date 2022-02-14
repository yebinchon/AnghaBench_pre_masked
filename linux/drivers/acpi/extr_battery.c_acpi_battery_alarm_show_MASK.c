
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_battery {int alarm; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct acpi_battery* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct acpi_battery *VAR_3 = FUNC_2(FUNC_0(VAR_0));
 return FUNC_1(VAR_2, "%d\n", VAR_3->alarm * 1000);
}
