
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {union acpi_parse_object* arg; } ;
struct TYPE_8__ {scalar_t__ aml_opcode; union acpi_parse_object* next; struct acpi_namespace_node* node; TYPE_1__ value; } ;
union acpi_parse_object {TYPE_4__ common; } ;
struct TYPE_7__ {scalar_t__ value; } ;
struct TYPE_6__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_3__ integer; TYPE_2__ bank_field; } ;
typedef scalar_t__ u32 ;
struct acpi_walk_state {union acpi_operand_object** operands; scalar_t__ operand_index; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_parse_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct acpi_walk_state*,union acpi_parse_object*,int ) ;
 int FUNC_4 (union acpi_operand_object**,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_5 (struct acpi_namespace_node*) ;
 union acpi_parse_object* FUNC_6 (union acpi_parse_object*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

acpi_status
FUNC_10(struct acpi_walk_state *VAR_4,
     union acpi_parse_object *VAR_5)
{
 acpi_status VAR_6;
 union acpi_operand_object *VAR_7;
 union acpi_operand_object *VAR_8;
 struct acpi_namespace_node *VAR_9;
 union acpi_parse_object *VAR_10;
 union acpi_parse_object *VAR_11;

 FUNC_2(VAR_3, VAR_5);
 VAR_10 = VAR_5->common.value.arg;



 VAR_10 = VAR_10->common.next;



 VAR_10 = VAR_10->common.next;







 VAR_4->operand_index = 0;

 VAR_6 = FUNC_3(VAR_4, VAR_10, 0);
 if (FUNC_1(VAR_6)) {
  FUNC_9(VAR_6);
 }

 VAR_6 = FUNC_4(&VAR_4->operands[0], VAR_4);
 if (FUNC_1(VAR_6)) {
  FUNC_9(VAR_6);
 }

 FUNC_0(VAR_0,
      FUNC_7(VAR_5->common.aml_opcode), 1);




 VAR_8 = VAR_4->operands[0];



 VAR_11 = FUNC_6(VAR_5, 4);
 while (VAR_11) {



  if (VAR_11->common.aml_opcode == VAR_2) {
   VAR_9 = VAR_11->common.node;

   VAR_7 = FUNC_5(VAR_9);
   if (!VAR_7) {
    FUNC_9(VAR_1);
   }

   VAR_7->bank_field.value =
       (u32) VAR_8->integer.value;
  }



  VAR_11 = VAR_11->common.next;
 }

 FUNC_8(VAR_8);
 FUNC_9(VAR_6);
}
