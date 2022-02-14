
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_5__ {TYPE_1__* node; int target_type; union acpi_operand_object** where; int value; int class; } ;
union acpi_operand_object {TYPE_3__ common; TYPE_2__ reference; } ;
typedef int u8 ;
struct acpi_walk_state {int opcode; } ;
typedef int acpi_status ;
struct TYPE_4__ {union acpi_operand_object* object; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (int ,int ,struct acpi_walk_state*,union acpi_operand_object**) ;
 int FUNC_7 (struct acpi_walk_state*,union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_9 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static acpi_status
FUNC_11(union acpi_operand_object **VAR_10,
    struct acpi_walk_state *VAR_11)
{
 acpi_status VAR_12 = VAR_6;
 union acpi_operand_object *VAR_13;
 union acpi_operand_object *VAR_14 = ((void*)0);
 u8 VAR_15;

 FUNC_3(VAR_9);

 VAR_13 = *VAR_10;



 switch (VAR_13->common.type) {
 case 130:

  VAR_15 = VAR_13->reference.class;

  switch (VAR_15) {
  case 138:
  case 141:




   VAR_12 = FUNC_6(VAR_15,
              VAR_13->
              reference.value,
              VAR_11,
              &VAR_14);
   if (FUNC_2(VAR_12)) {
    FUNC_10(VAR_12);
   }

   FUNC_0((VAR_0,
       "[Arg/Local %X] ValueObj is %p\n",
       VAR_13->reference.value,
       VAR_14));





   FUNC_9(VAR_13);
   *VAR_10 = VAR_14;
   break;

  case 139:

   switch (VAR_13->reference.target_type) {
   case 133:


    break;

   case 128:



    if ((VAR_11->opcode ==
         VAR_8)
        || (VAR_11->opcode ==
     VAR_7)) {
     break;
    }



    VAR_14 = *VAR_13->reference.where;
    if (VAR_14) {





     FUNC_8(VAR_14);
     *VAR_10 = VAR_14;
    } else {




     FUNC_1((VAR_5,
          "Attempt to dereference an Index to "
          "NULL package element Idx=%p",
          VAR_13));
     VAR_12 = VAR_4;
    }
    break;

   default:



    FUNC_1((VAR_5,
         "Unknown TargetType 0x%X in Index/Reference object %p",
         VAR_13->reference.target_type,
         VAR_13));
    VAR_12 = VAR_3;
    break;
   }
   break;

  case 136:
  case 140:
  case 135:



   break;

  case 137:



   if ((VAR_13->reference.node->type ==
        VAR_1)
       || (VAR_13->reference.node->type ==
    VAR_2)) {



    *VAR_10 = (void *)VAR_13->reference.node;
   } else {


    *VAR_10 =
        (VAR_13->reference.node)->object;
    FUNC_8(*VAR_10);
   }

   FUNC_9(VAR_13);
   break;

  default:

   FUNC_1((VAR_5,
        "Unknown Reference type 0x%X in %p",
        VAR_15, VAR_13));
   VAR_12 = VAR_3;
   break;
  }
  break;

 case 134:

  VAR_12 = FUNC_4(VAR_13);
  break;

 case 128:

  VAR_12 = FUNC_5(VAR_13);
  break;

 case 133:
 case 129:
 case 132:
 case 131:

  FUNC_0((VAR_0,
      "FieldRead SourceDesc=%p Type=%X\n",
      VAR_13, VAR_13->common.type));

  VAR_12 =
      FUNC_7(VAR_11, VAR_13,
       &VAR_14);



  FUNC_9(*VAR_10);
  *VAR_10 = (void *)VAR_14;
  break;

 default:

  break;
 }

 FUNC_10(VAR_12);
}
