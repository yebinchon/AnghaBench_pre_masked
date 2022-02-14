
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int const type; } ;
union acpi_operand_object {TYPE_2__ common; } ;
typedef int u8 ;
struct acpi_walk_state {scalar_t__ opcode; int result_obj; } ;
struct TYPE_3__ {int ascii; } ;
struct acpi_namespace_node {int type; TYPE_1__ name; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (union acpi_operand_object**,int,struct acpi_walk_state*) ;
 int FUNC_5 (union acpi_operand_object*,struct acpi_namespace_node*,struct acpi_walk_state*) ;
 int FUNC_6 (union acpi_operand_object*,union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object*,int *) ;
 int FUNC_8 (struct acpi_namespace_node*,union acpi_operand_object*,int const) ;
 union acpi_operand_object* FUNC_9 (struct acpi_namespace_node*) ;
 int FUNC_10 (struct acpi_namespace_node*) ;
 int FUNC_11 (union acpi_operand_object*) ;
 int FUNC_12 (int) ;
 int VAR_6 ;
 int FUNC_13 (int ) ;

acpi_status
FUNC_14(union acpi_operand_object *VAR_7,
        struct acpi_namespace_node *VAR_8,
        struct acpi_walk_state *VAR_9,
        u8 VAR_10)
{
 acpi_status VAR_11 = VAR_3;
 union acpi_operand_object *VAR_12;
 union acpi_operand_object *VAR_13;
 acpi_object_type VAR_14;

 FUNC_3(VAR_6, VAR_7);



 VAR_14 = FUNC_10(VAR_8);
 VAR_12 = FUNC_9(VAR_8);

 FUNC_0((VAR_0, "Storing %p [%s] to node %p [%s]\n",
     VAR_7,
     FUNC_11(VAR_7), VAR_8,
     FUNC_12(VAR_14)));



 if (VAR_9->opcode != VAR_4) {
  switch (VAR_14) {
  case 133:





   if (VAR_9->opcode == VAR_5) {
    if (VAR_7->common.type !=
        133) {
     FUNC_1((VAR_2,
          "Cannot assign type [%s] to [Package] "
          "(source must be type Pkg)",
          FUNC_11
          (VAR_7)));

     FUNC_13(VAR_1);
    }
    break;
   }



  case 140:
  case 139:
  case 134:
  case 130:
  case 132:
  case 131:
  case 128:

   FUNC_1((VAR_2,
        "Target must be [Buffer/Integer/String/Reference]"
        ", found [%s] (%4.4s)",
        FUNC_12(VAR_8->type),
        VAR_8->name.ascii));

   FUNC_13(VAR_1);

  default:
   break;
  }
 }





 VAR_11 = FUNC_4(&VAR_7, VAR_14, VAR_9);
 if (FUNC_2(VAR_11)) {
  FUNC_13(VAR_11);
 }



 switch (VAR_14) {




 case 138:
 case 129:
 case 142:

  if ((VAR_9->opcode == VAR_4) ||
      !VAR_10) {





   VAR_11 =
       FUNC_5(VAR_7, VAR_8,
        VAR_9);
   break;
  }



  VAR_11 =
      FUNC_6(VAR_7, VAR_12,
         &VAR_13, VAR_9);
  if (FUNC_2(VAR_11)) {
   FUNC_13(VAR_11);
  }

  if (VAR_13 != VAR_12) {
   VAR_11 =
       FUNC_8(VAR_8, VAR_13,
        VAR_13->common.type);

   FUNC_0((VAR_0,
       "Store type [%s] into [%s] via Convert/Attach\n",
       FUNC_11
       (VAR_7),
       FUNC_11
       (VAR_13)));
  }
  break;

 case 141:
 case 135:
 case 137:
 case 136:






  VAR_11 = FUNC_7(VAR_7, VAR_12,
           &VAR_9->result_obj);
  break;

 default:
  VAR_11 =
      FUNC_5(VAR_7, VAR_8, VAR_9);
  break;
 }

 FUNC_13(VAR_11);
}
