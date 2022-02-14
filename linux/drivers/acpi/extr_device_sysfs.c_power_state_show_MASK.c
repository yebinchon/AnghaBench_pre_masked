
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct acpi_device {TYPE_1__ power; } ;
typedef int ssize_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;
 struct acpi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_2(VAR_0);

 return FUNC_1(VAR_2, "%s\n", FUNC_0(VAR_3->power.state));
}
