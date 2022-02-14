
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ common; } ;
struct acpi_walk_state {TYPE_4__* control_state; int op; union acpi_operand_object** operands; } ;
typedef int acpi_status ;
struct TYPE_7__ {scalar_t__ state; int value; } ;
struct TYPE_8__ {TYPE_3__ common; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct acpi_walk_state*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_6 (struct acpi_walk_state*,int ,int ) ;
 int FUNC_7 (union acpi_operand_object*,struct acpi_walk_state*,int ) ;
 int FUNC_8 (union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_9 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_10 (union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_11 (union acpi_operand_object*) ;
 int FUNC_12 (union acpi_operand_object*) ;
 int VAR_11 ;
 int FUNC_13 (int ) ;

acpi_status
FUNC_14(struct acpi_walk_state *VAR_12,
       union acpi_operand_object *VAR_13)
{
 acpi_status VAR_14 = VAR_8;
 union acpi_operand_object *VAR_15;
 union acpi_operand_object *VAR_16 = ((void*)0);

 FUNC_4(VAR_11, VAR_12);

 VAR_12->control_state->common.state = 0;

 if (VAR_13) {
  VAR_14 = FUNC_8(&VAR_15, VAR_12);
  if (FUNC_3(VAR_14)) {
   FUNC_2((VAR_7, VAR_14,
     "Could not get result from predicate evaluation"));

   FUNC_13(VAR_14);
  }
 } else {
  VAR_14 = FUNC_6(VAR_12, VAR_12->op, 0);
  if (FUNC_3(VAR_14)) {
   FUNC_13(VAR_14);
  }

  VAR_14 =
      FUNC_10(&VAR_12->operands[0],
          VAR_12);
  if (FUNC_3(VAR_14)) {
   FUNC_13(VAR_14);
  }

  VAR_15 = VAR_12->operands[0];
 }

 if (!VAR_15) {
  FUNC_1((VAR_7,
       "No predicate ObjDesc=%p State=%p",
       VAR_15, VAR_12));

  FUNC_13(VAR_4);
 }





 VAR_14 = FUNC_9(VAR_15, &VAR_16,
         VAR_2);
 if (FUNC_3(VAR_14)) {
  goto cleanup;
 }

 if (VAR_16->common.type != VAR_3) {
  FUNC_1((VAR_7,
       "Bad predicate (not an integer) ObjDesc=%p State=%p Type=0x%X",
       VAR_15, VAR_12, VAR_15->common.type));

  VAR_14 = VAR_5;
  goto cleanup;
 }



 (void)FUNC_11(VAR_16);





 if (VAR_16->integer.value) {
  VAR_12->control_state->common.value = VAR_10;
 } else {




  VAR_12->control_state->common.value = VAR_9;
  VAR_14 = VAR_6;
 }



 (void)FUNC_7(VAR_16, VAR_12, VAR_10);

cleanup:

 FUNC_0((VAR_1,
     "Completed a predicate eval=%X Op=%p\n",
     VAR_12->control_state->common.value,
     VAR_12->op));



 FUNC_5(VAR_16, VAR_12);





 if (VAR_16 != VAR_15) {
  FUNC_12(VAR_16);
 }
 FUNC_12(VAR_15);

 VAR_12->control_state->common.state = VAR_0;
 FUNC_13(VAR_14);
}
