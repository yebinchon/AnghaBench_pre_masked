
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (union acpi_operand_object*) ;
 int FUNC_3 (union acpi_operand_object*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;

const char *FUNC_6(union acpi_operand_object *VAR_4)
{
 FUNC_1(VAR_3);

 if (!VAR_4) {
  FUNC_0((VAR_0, "Null Object Descriptor\n"));
  FUNC_5("[NULL Object Descriptor]");
 }



 if ((FUNC_2(VAR_4) != VAR_2) &&
     (FUNC_2(VAR_4) != VAR_1)) {
  FUNC_0((VAR_0,
      "Invalid object descriptor type: 0x%2.2X [%s] (%p)\n",
      FUNC_2(VAR_4),
      FUNC_3(VAR_4),
      VAR_4));

  FUNC_5("Invalid object");
 }

 FUNC_5(FUNC_4(VAR_4->common.type));
}
