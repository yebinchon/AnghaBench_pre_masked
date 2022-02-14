
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_power_resource {int ref_count; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct device*) ;
 struct acpi_power_resource* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2) {
 struct acpi_power_resource *VAR_3;

 VAR_3 = FUNC_2(FUNC_1(VAR_0));
 return FUNC_0(VAR_2, "%u\n", !!VAR_3->ref_count);
}
