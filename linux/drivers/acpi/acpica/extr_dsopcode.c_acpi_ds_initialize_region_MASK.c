
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_operand_object*) ;
 union acpi_operand_object* FUNC_1 (int ) ;

acpi_status FUNC_2(acpi_handle VAR_0)
{
 union acpi_operand_object *VAR_1;
 acpi_status VAR_2;

 VAR_1 = FUNC_1(VAR_0);



 VAR_2 = FUNC_0(VAR_1);
 return (VAR_2);
}
