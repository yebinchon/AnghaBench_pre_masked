
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct acpi_hotplug_profile {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct acpi_hotplug_profile*,unsigned int) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned int*) ;
 struct acpi_hotplug_profile* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
         struct kobj_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct acpi_hotplug_profile *VAR_5 = FUNC_2(VAR_1);
 unsigned int VAR_6;

 if (FUNC_1(VAR_3, 10, &VAR_6) || VAR_6 > 1)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_6);
 return VAR_4;
}
