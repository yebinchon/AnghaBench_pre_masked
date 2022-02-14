
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;


 int FUNC_0 (union acpi_operand_object**) ;
 int FUNC_1 () ;
 int FUNC_2 (union acpi_operand_object*) ;

void FUNC_3(union acpi_operand_object **VAR_0)
{
 union acpi_operand_object **VAR_1;

 FUNC_1();



 for (VAR_1 = VAR_0; *VAR_1; VAR_1++) {
  FUNC_2(*VAR_1);
 }



 FUNC_0(VAR_0);
 return;
}
