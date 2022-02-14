
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct acpi_device*,int*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*) ;
 struct acpi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_2, "%s\n", FUNC_1(VAR_4));
}
