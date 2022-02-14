
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int descriptor_type; } ;
union acpi_generic_state {TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 union acpi_generic_state* FUNC_1 () ;

union acpi_generic_state *FUNC_2(void)
{
 union acpi_generic_state *VAR_2;

 FUNC_0();



 VAR_2 = FUNC_1();
 if (!VAR_2) {
  return (((void*)0));
 }



 VAR_2->common.descriptor_type = VAR_1;
 VAR_2->common.state = VAR_0;

 return (VAR_2);
}
