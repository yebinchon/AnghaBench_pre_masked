
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct acpi_driver {int ids; } ;
struct TYPE_2__ {scalar_t__ match_driver; } ;
struct acpi_device {TYPE_1__ flags; } ;


 int FUNC_0 (struct acpi_device*,int ) ;
 struct acpi_device* FUNC_1 (struct device*) ;
 struct acpi_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_1(VAR_0);
 struct acpi_driver *VAR_3 = FUNC_2(VAR_1);

 return VAR_2->flags.match_driver
  && !FUNC_0(VAR_2, VAR_3->ids);
}
