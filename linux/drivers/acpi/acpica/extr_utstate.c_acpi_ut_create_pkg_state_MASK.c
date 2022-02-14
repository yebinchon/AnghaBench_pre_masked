
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct TYPE_4__ {int num_packages; int index; void* dest_object; union acpi_operand_object* source_object; } ;
struct TYPE_3__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_2__ pkg; TYPE_1__ common; } ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 union acpi_generic_state* FUNC_1 () ;

union acpi_generic_state *FUNC_2(void *VAR_1,
         void *VAR_2,
         u32 VAR_3)
{
 union acpi_generic_state *VAR_4;

 FUNC_0();



 VAR_4 = FUNC_1();
 if (!VAR_4) {
  return (((void*)0));
 }



 VAR_4->common.descriptor_type = VAR_0;
 VAR_4->pkg.source_object = (union acpi_operand_object *)VAR_1;
 VAR_4->pkg.dest_object = VAR_2;
 VAR_4->pkg.index = VAR_3;
 VAR_4->pkg.num_packages = 1;

 return (VAR_4);
}
