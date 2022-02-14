
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int handle; } ;
struct device_attribute {int dummy; } ;
struct device {struct dock_station* platform_data; } ;
struct acpi_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct acpi_device**) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct dock_station *VAR_4 = VAR_1->platform_data;
 struct acpi_device *VAR_5 = ((void*)0);

 FUNC_0(VAR_4->handle, &VAR_5);
 return FUNC_2(VAR_3, VAR_0, "%u\n", FUNC_1(VAR_5));
}
