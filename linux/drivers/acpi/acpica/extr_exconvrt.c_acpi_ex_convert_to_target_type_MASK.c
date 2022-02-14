
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
struct acpi_walk_state {int opcode; TYPE_2__* op_info; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_object_type ;
struct TYPE_4__ {int runtime_args; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;







 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;






 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (union acpi_operand_object*,union acpi_operand_object**) ;
 scalar_t__ FUNC_5 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 scalar_t__ FUNC_6 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (scalar_t__) ;

acpi_status
FUNC_10(acpi_object_type VAR_8,
          union acpi_operand_object *VAR_9,
          union acpi_operand_object **VAR_10,
          struct acpi_walk_state *VAR_11)
{
 acpi_status VAR_12 = VAR_5;

 FUNC_2(VAR_7);



 *VAR_10 = VAR_9;





 switch (FUNC_3(VAR_11->op_info->runtime_args)) {
 case 130:
 case 133:
 case 132:

  switch (VAR_8) {
  case 135:



   break;

  default:



   if (VAR_8 != VAR_9->common.type) {
    FUNC_0((VAR_0,
        "Explicit operator, will store (%s) over existing type (%s)\n",
        FUNC_7
        (VAR_9),
        FUNC_8
        (VAR_8)));
    VAR_12 = VAR_6;
   }
  }
  break;

 case 128:
 case 129:

  switch (VAR_8) {
  case 138:
  case 139:
  case 137:
  case 136:




   VAR_12 =
       FUNC_5(VAR_9, VAR_10,
             VAR_1);
   break;

  case 134:




   VAR_12 =
       FUNC_6(VAR_9, VAR_10,
            VAR_2);
   break;

  case 140:




   VAR_12 =
       FUNC_4(VAR_9, VAR_10);
   break;

  default:

   FUNC_1((VAR_4,
        "Bad destination type during conversion: 0x%X",
        VAR_8));
   VAR_12 = VAR_3;
   break;
  }
  break;

 case 131:



  break;

 default:

  FUNC_1((VAR_4,
       "Unknown Target type ID 0x%X AmlOpcode 0x%X DestType %s",
       FUNC_3(VAR_11->op_info->
       runtime_args),
       VAR_11->opcode,
       FUNC_8(VAR_8)));
  VAR_12 = VAR_3;
 }







 if (VAR_12 == VAR_6) {
  VAR_12 = VAR_5;
 }

 FUNC_9(VAR_12);
}
