
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {union acpi_parse_object* arg; } ;
struct TYPE_6__ {int aml_opcode; TYPE_1__ value; struct acpi_namespace_node* node; } ;
union acpi_parse_object {TYPE_2__ common; } ;
struct TYPE_8__ {int flags; int length; int address; } ;
struct TYPE_7__ {int pointer; } ;
union acpi_operand_object {TYPE_4__ region; TYPE_3__ string; } ;
typedef int u32 ;
struct acpi_walk_state {union acpi_operand_object** operands; } ;
struct acpi_table_header {int length; } ;
struct acpi_namespace_node {int dummy; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,union acpi_parse_object*) ;
 int FUNC_5 (struct acpi_table_header*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct acpi_walk_state*,union acpi_parse_object*) ;
 scalar_t__ FUNC_7 (int ,int ,struct acpi_walk_state*) ;
 scalar_t__ FUNC_8 (int ,struct acpi_table_header**) ;
 union acpi_operand_object* FUNC_9 (struct acpi_namespace_node*) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int *) ;
 int FUNC_11 (union acpi_operand_object*) ;
 int VAR_6 ;
 int FUNC_12 (scalar_t__) ;

acpi_status
FUNC_13(struct acpi_walk_state *VAR_7,
       union acpi_parse_object *VAR_8)
{
 acpi_status VAR_9;
 union acpi_operand_object *VAR_10;
 union acpi_operand_object **VAR_11;
 struct acpi_namespace_node *VAR_12;
 union acpi_parse_object *VAR_13;
 struct acpi_table_header *VAR_14;
 u32 VAR_15;

 FUNC_4(VAR_6, VAR_8);





 VAR_12 = VAR_8->common.node;



 VAR_13 = VAR_8->common.value.arg;





 VAR_9 = FUNC_6(VAR_7, VAR_13);
 if (FUNC_2(VAR_9)) {
  FUNC_12(VAR_9);
 }

 VAR_11 = &VAR_7->operands[0];





 VAR_9 =
     FUNC_7(VAR_8->common.aml_opcode, VAR_1,
         VAR_7);
 if (FUNC_2(VAR_9)) {
  goto cleanup;
 }



 VAR_9 = FUNC_10(VAR_11[0]->string.pointer,
        VAR_11[1]->string.pointer,
        VAR_11[2]->string.pointer, &VAR_15);
 if (FUNC_2(VAR_9)) {
  if (VAR_9 == VAR_4) {
   FUNC_1((VAR_2,
        "ACPI Table [%4.4s] OEM:(%s, %s) not found in RSDT/XSDT",
        VAR_11[0]->string.pointer,
        VAR_11[1]->string.pointer,
        VAR_11[2]->string.pointer));
  }
  goto cleanup;
 }

 VAR_9 = FUNC_8(VAR_15, &VAR_14);
 if (FUNC_2(VAR_9)) {
  goto cleanup;
 }

 VAR_10 = FUNC_9(VAR_12);
 if (!VAR_10) {
  VAR_9 = VAR_3;
  goto cleanup;
 }

 VAR_10->region.address = FUNC_5(VAR_14);
 VAR_10->region.length = VAR_14->length;

 FUNC_0((VAR_0, "RgnObj %p Addr %8.8X%8.8X Len %X\n",
     VAR_10,
     FUNC_3(VAR_10->region.address),
     VAR_10->region.length));



 VAR_10->region.flags |= VAR_5;

cleanup:
 FUNC_11(VAR_11[0]);
 FUNC_11(VAR_11[1]);
 FUNC_11(VAR_11[2]);

 FUNC_12(VAR_9);
}
