
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int handle; } ;
struct device_attribute {int dummy; } ;
struct device {struct dock_station* platform_data; } ;
typedef int ssize_t ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (char*,int ,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 unsigned long long VAR_4;
 struct dock_station *VAR_5 = VAR_1->platform_data;
 acpi_status VAR_6 = FUNC_1(VAR_5->handle,
     "_UID", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_6))
     return 0;

 return FUNC_2(VAR_3, VAR_0, "%llx\n", VAR_4);
}
