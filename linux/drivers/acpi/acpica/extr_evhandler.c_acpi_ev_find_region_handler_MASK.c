
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ space_id; union acpi_operand_object* next; } ;
union acpi_operand_object {TYPE_1__ address_space; } ;
typedef scalar_t__ acpi_adr_space_type ;



union acpi_operand_object *FUNC_0(acpi_adr_space_type
             VAR_0,
             union acpi_operand_object
             *VAR_1)
{



 while (VAR_1) {



  if (VAR_1->address_space.space_id == VAR_0) {
   return (VAR_1);
  }



  VAR_1 = VAR_1->address_space.next;
 }

 return (((void*)0));
}
