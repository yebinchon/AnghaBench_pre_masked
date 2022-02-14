
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; } ;
struct resource_win {TYPE_1__ res; } ;
struct acpi_resource_address64 {int address; } ;
struct acpi_resource_address {int dummy; } ;
struct acpi_resource {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct resource_win*,struct acpi_resource_address*,int *) ;
 int FUNC_2 (struct acpi_resource*,struct acpi_resource_address64*) ;

bool FUNC_3(struct acpi_resource *VAR_0,
         struct resource_win *VAR_1)
{
 struct acpi_resource_address64 VAR_2;

 VAR_1->res.flags = 0;
 if (FUNC_0(FUNC_2(VAR_0, &VAR_2)))
  return 0;

 return FUNC_1(VAR_1, (struct acpi_resource_address *)&VAR_2,
     &VAR_2.address);
}
