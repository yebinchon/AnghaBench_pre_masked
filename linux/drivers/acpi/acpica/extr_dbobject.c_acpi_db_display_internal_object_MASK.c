
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t value; int class; union acpi_operand_object* node; union acpi_operand_object* object; union acpi_operand_object** where; int target_type; } ;
struct TYPE_5__ {int type; } ;
union acpi_operand_object {TYPE_4__ reference; TYPE_1__ common; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {TYPE_3__* arguments; TYPE_2__* local_variables; } ;
struct acpi_namespace_node {TYPE_4__ reference; TYPE_1__ common; } ;
struct TYPE_7__ {union acpi_operand_object* object; } ;
struct TYPE_6__ {union acpi_operand_object* object; } ;





 int FUNC_0 (union acpi_operand_object*) ;
 int VAR_0 ;


 int FUNC_1 (union acpi_operand_object*) ;
 int FUNC_2 (union acpi_operand_object*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (union acpi_operand_object*) ;

void
FUNC_6(union acpi_operand_object *VAR_1,
    struct acpi_walk_state *VAR_2)
{
 u8 VAR_3;

 FUNC_3("%p ", VAR_1);

 if (!VAR_1) {
  FUNC_3("<Null Object>\n");
  return;
 }



 switch (FUNC_0(VAR_1)) {
 case 138:

  FUNC_3("<Parser> ");
  break;

 case 140:

  FUNC_2((struct acpi_namespace_node *)VAR_1);
  break;

 case 139:

  VAR_3 = VAR_1->common.type;
  if (VAR_3 > VAR_0) {
   FUNC_3(" Type %X [Invalid Type]", (u32)VAR_3);
   return;
  }



  switch (VAR_1->common.type) {
  case 129:

   FUNC_3("[%s] ",
           FUNC_5(VAR_1));



   switch (VAR_1->reference.class) {
   case 134:

    FUNC_3("%X ",
            VAR_1->reference.value);
    if (VAR_2) {
     VAR_1 = VAR_2->local_variables
         [VAR_1->reference.value].object;
     FUNC_3("%p", VAR_1);
     FUNC_1
         (VAR_1);
    }
    break;

   case 137:

    FUNC_3("%X ",
            VAR_1->reference.value);
    if (VAR_2) {
     VAR_1 = VAR_2->arguments
         [VAR_1->reference.value].object;
     FUNC_3("%p", VAR_1);
     FUNC_1
         (VAR_1);
    }
    break;

   case 135:

    switch (VAR_1->reference.target_type) {
    case 130:

     FUNC_3("%p",
             VAR_1->reference.
             object);
     FUNC_1
         (VAR_1->reference.object);
     break;

    case 128:

     FUNC_3("%p",
             VAR_1->reference.
             where);
     if (!VAR_1->reference.where) {
      FUNC_3
          (" Uninitialized WHERE pointer");
     } else {
      FUNC_1(*
                (VAR_1->
          reference.
          where));
     }
     break;

    default:

     FUNC_3
         ("Unknown index target type");
     break;
    }
    break;

   case 132:

    if (!VAR_1->reference.object) {
     FUNC_3
         ("Uninitialized reference subobject pointer");
     break;
    }



    switch (FUNC_0
     (VAR_1->reference.object)) {
    case 140:

     FUNC_2(VAR_1->reference.
           object);
     break;

    case 139:

     FUNC_1
         (VAR_1->reference.object);
     break;

    default:
     break;
    }
    break;

   case 133:

    FUNC_2(VAR_1->reference.node);
    break;

   case 136:
   case 131:

    FUNC_3("\n");
    break;

   default:

    FUNC_3("%2.2X\n",
            VAR_1->reference.class);
    break;
   }
   break;

  default:

   FUNC_3("<Obj>          ");
   FUNC_1(VAR_1);
   break;
  }
  break;

 default:

  FUNC_3("<Not a valid ACPI Object Descriptor> [%s]",
          FUNC_4(VAR_1));
  break;
 }

 FUNC_3("\n");
}
