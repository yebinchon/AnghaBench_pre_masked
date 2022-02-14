
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_generic_state* next; } ;
union acpi_generic_state {TYPE_1__ common; } ;


 int FUNC_0 () ;

void
FUNC_1(union acpi_generic_state **VAR_0,
      union acpi_generic_state *VAR_1)
{
 FUNC_0();



 VAR_1->common.next = *VAR_0;
 *VAR_0 = VAR_1;
 return;
}
