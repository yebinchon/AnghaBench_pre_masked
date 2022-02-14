
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef int u64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 union acpi_operand_object* FUNC_1 (int ) ;
 int FUNC_2 (union acpi_operand_object*) ;
 int VAR_1 ;

union acpi_operand_object *FUNC_3(u64 VAR_2)
{
 union acpi_operand_object *VAR_3;

 FUNC_0(VAR_1);



 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3) {
  FUNC_2(((void*)0));
 }

 VAR_3->integer.value = VAR_2;
 FUNC_2(VAR_3);
}
