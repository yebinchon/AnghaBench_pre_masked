
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ class; int object; } ;
struct TYPE_3__ {int reference_count; scalar_t__ type; } ;
union acpi_operand_object {TYPE_2__ reference; TYPE_1__ common; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (union acpi_operand_object*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,int ,struct acpi_walk_state*) ;
 int FUNC_5 (scalar_t__,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 int FUNC_6 (scalar_t__,int ,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_7 (union acpi_operand_object*,int ,struct acpi_walk_state*,int ) ;
 union acpi_operand_object* FUNC_8 (struct acpi_namespace_node*) ;
 int FUNC_9 (union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_10 (union acpi_operand_object*) ;
 int VAR_7 ;
 int FUNC_11 (int ) ;

acpi_status
FUNC_12(u8 VAR_8,
         u32 VAR_9,
         union acpi_operand_object *VAR_10,
         struct acpi_walk_state *VAR_11)
{
 acpi_status VAR_12;
 struct acpi_namespace_node *VAR_13;
 union acpi_operand_object *VAR_14;
 union acpi_operand_object *VAR_15;

 FUNC_2(VAR_7);
 FUNC_0((VAR_0, "Type=%2.2X Index=%u Obj=%p\n",
     VAR_8, VAR_9, VAR_10));



 if (!VAR_10) {
  FUNC_11(VAR_6);
 }



 VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_11, &VAR_13);
 if (FUNC_1(VAR_12)) {
  FUNC_11(VAR_12);
 }

 VAR_14 = FUNC_8(VAR_13);
 if (VAR_14 == VAR_10) {
  FUNC_0((VAR_0, "Obj=%p already installed!\n",
      VAR_10));
  FUNC_11(VAR_12);
 }
 VAR_15 = VAR_10;
 if (VAR_10->common.reference_count > 1) {
  VAR_12 =
      FUNC_9(VAR_10, &VAR_15,
          VAR_11);
  if (FUNC_1(VAR_12)) {
   FUNC_11(VAR_12);
  }
 }







 if (VAR_14) {
  if (VAR_8 == VAR_3) {




   if ((FUNC_3(VAR_14) ==
        VAR_1) &&
       (VAR_14->common.type ==
        VAR_5) &&
       (VAR_14->reference.class ==
        VAR_4)) {
    FUNC_0((VAR_0,
        "Arg (%p) is an ObjRef(Node), storing in node %p\n",
        VAR_15,
        VAR_14));






    VAR_12 =
        FUNC_7(VAR_15,
         VAR_14->
         reference.
         object,
         VAR_11,
         VAR_2);



    if (VAR_15 != VAR_10) {
     FUNC_10(VAR_15);
    }

    FUNC_11(VAR_12);
   }
  }



  FUNC_4(VAR_8, VAR_9, VAR_11);
 }






 VAR_12 =
     FUNC_6(VAR_8, VAR_9, VAR_15,
       VAR_11);



 if (VAR_15 != VAR_10) {
  FUNC_10(VAR_15);
 }

 FUNC_11(VAR_12);
}
