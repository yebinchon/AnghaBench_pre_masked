
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct acpi_hotplug_profile {int enabled; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct acpi_hotplug_profile* FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_0,
        struct kobj_attribute *VAR_1, char *VAR_2)
{
 struct acpi_hotplug_profile *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "%d\n", VAR_3->enabled);
}
