
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (union acpi_operand_object*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (union acpi_operand_object*,int *) ;
 int FUNC_3 (union acpi_operand_object*,int *) ;

acpi_status
FUNC_4(union acpi_operand_object *VAR_2,
   acpi_size *VAR_3)
{
 acpi_status VAR_4;

 FUNC_0();

 if ((FUNC_1(VAR_2) ==
      VAR_0) &&
     (VAR_2->common.type == VAR_1)) {
  VAR_4 =
      FUNC_2(VAR_2,
          VAR_3);
 } else {
  VAR_4 =
      FUNC_3(VAR_2, VAR_3);
 }

 return (VAR_4);
}
