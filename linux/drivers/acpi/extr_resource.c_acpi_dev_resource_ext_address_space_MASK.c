
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; } ;
struct resource_win {TYPE_1__ res; } ;
struct acpi_resource_extended_address64 {int address; } ;
struct acpi_resource_address {int dummy; } ;
struct TYPE_4__ {struct acpi_resource_extended_address64 ext_address64; } ;
struct acpi_resource {scalar_t__ type; TYPE_2__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct resource_win*,struct acpi_resource_address*,int *) ;

bool FUNC_1(struct acpi_resource *VAR_1,
      struct resource_win *VAR_2)
{
 struct acpi_resource_extended_address64 *VAR_3;

 VAR_2->res.flags = 0;
 if (VAR_1->type != VAR_0)
  return 0;

 VAR_3 = &VAR_1->data.ext_address64;

 return FUNC_0(VAR_2, (struct acpi_resource_address *)VAR_3,
     &VAR_3->address);
}
