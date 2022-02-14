
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ acpi_physical_address ;
struct TYPE_2__ {scalar_t__ acpi_rsdp_addr; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

acpi_physical_address FUNC_3(void)
{
 acpi_physical_address VAR_1;

 VAR_1 = VAR_0->acpi_rsdp_addr;






 if (!VAR_1)
  VAR_1 = FUNC_2();

 if (!VAR_1)
  VAR_1 = FUNC_1();

 if (!VAR_1)
  VAR_1 = FUNC_0();

 return VAR_1;
}
