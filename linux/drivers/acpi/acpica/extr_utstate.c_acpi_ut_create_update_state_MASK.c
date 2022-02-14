
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct TYPE_4__ {int value; union acpi_operand_object* object; } ;
struct TYPE_3__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_2__ update; TYPE_1__ common; } ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 () ;
 union acpi_generic_state* FUNC_1 () ;

union acpi_generic_state *FUNC_2(union acpi_operand_object
            *VAR_1, u16 VAR_2)
{
 union acpi_generic_state *VAR_3;

 FUNC_0();



 VAR_3 = FUNC_1();
 if (!VAR_3) {
  return (((void*)0));
 }



 VAR_3->common.descriptor_type = VAR_0;
 VAR_3->update.object = VAR_1;
 VAR_3->update.value = VAR_2;
 return (VAR_3);
}
