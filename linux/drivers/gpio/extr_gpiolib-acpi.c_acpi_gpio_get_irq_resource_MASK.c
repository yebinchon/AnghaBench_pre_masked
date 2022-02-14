
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_resource_gpio {scalar_t__ connection_type; } ;
struct TYPE_2__ {struct acpi_resource_gpio gpio; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(struct acpi_resource *VAR_2,
    struct acpi_resource_gpio **VAR_3)
{
 struct acpi_resource_gpio *VAR_4;

 if (VAR_2->type != VAR_1)
  return 0;

 VAR_4 = &VAR_2->data.gpio;
 if (VAR_4->connection_type != VAR_0)
  return 0;

 *VAR_3 = VAR_4;
 return 1;
}
