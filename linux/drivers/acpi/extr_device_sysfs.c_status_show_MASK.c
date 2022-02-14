
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int handle; } ;
typedef int ssize_t ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (char*,char*,unsigned long long) ;
 struct acpi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3) {
 struct acpi_device *VAR_4 = FUNC_3(VAR_1);
 acpi_status VAR_5;
 unsigned long long VAR_6;

 VAR_5 = FUNC_1(VAR_4->handle, "_STA", ((void*)0), &VAR_6);
 if (FUNC_0(VAR_5))
  return -VAR_0;

 return FUNC_2(VAR_3, "%llu\n", VAR_6);
}
