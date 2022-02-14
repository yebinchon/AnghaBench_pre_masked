
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ bus_address; } ;
struct acpi_device {TYPE_1__ pnp; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 struct acpi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct acpi_device *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->pnp.bus_address > VAR_0)
  return FUNC_0(VAR_3, "0x%016llx\n", VAR_4->pnp.bus_address);
 else
  return FUNC_0(VAR_3, "0x%08llx\n", VAR_4->pnp.bus_address);
}
