
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int length; int data; } ;
struct TYPE_7__ {int string; } ;
struct TYPE_8__ {scalar_t__ aml_opcode; struct acpi_namespace_node* node; TYPE_1__ value; } ;
union acpi_parse_object {TYPE_5__ named; TYPE_2__ common; } ;
struct TYPE_12__ {struct acpi_namespace_node* node; } ;
struct TYPE_10__ {int aml_length; int aml_start; } ;
struct TYPE_9__ {union acpi_operand_object* next_object; } ;
union acpi_operand_object {TYPE_6__ buffer_field; TYPE_4__ extra; TYPE_3__ common; } ;
typedef int u32 ;
struct acpi_walk_state {int parse_flags; int scope_info; scalar_t__ method_node; struct acpi_namespace_node* deferred_node; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_5 (struct acpi_namespace_node*) ;
 int FUNC_6 (int ,int ,int ,int ,int,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 union acpi_parse_object* FUNC_7 (union acpi_parse_object*,int) ;
 union acpi_operand_object* FUNC_8 (int ) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_15 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(union acpi_parse_object *VAR_16,
       struct acpi_walk_state *VAR_17)
{
 union acpi_parse_object *VAR_18;
 struct acpi_namespace_node *VAR_19;
 acpi_status VAR_20;
 union acpi_operand_object *VAR_21;
 union acpi_operand_object *VAR_22 = ((void*)0);
 u32 VAR_23;

 FUNC_3(VAR_15);




 if (VAR_16->common.aml_opcode == VAR_14) {



  VAR_18 = FUNC_7(VAR_16, 3);
 } else {


  VAR_18 = FUNC_7(VAR_16, 2);
 }

 if (!VAR_18) {
  FUNC_10(VAR_10);
 }

 if (VAR_17->deferred_node) {
  VAR_19 = VAR_17->deferred_node;
  VAR_20 = VAR_13;
 } else {


  if (!(VAR_17->parse_flags & VAR_5)) {
   FUNC_0((VAR_11, "Parse execute mode is not set"));
   FUNC_10(VAR_9);
  }



  VAR_23 = VAR_3 | VAR_1 |
      VAR_2;





  if (VAR_17->method_node &&
      !(VAR_17->parse_flags & VAR_6)) {
   VAR_23 |= VAR_4;
  }



  VAR_20 = FUNC_6(VAR_17->scope_info,
     VAR_18->common.value.string, VAR_7,
     VAR_0, VAR_23,
     VAR_17, &VAR_19);
  if (FUNC_2(VAR_20)) {
   FUNC_1(VAR_17->scope_info,
          VAR_18->common.value.string, VAR_20);
   FUNC_10(VAR_20);
  }
 }






 VAR_16->common.node = VAR_19;






 VAR_21 = FUNC_5(VAR_19);
 if (VAR_21) {
  FUNC_10(VAR_13);
 }
 VAR_21 = FUNC_8(VAR_8);
 if (!VAR_21) {
  VAR_20 = VAR_12;
  goto cleanup;
 }





 VAR_22 = VAR_21->common.next_object;
 VAR_22->extra.aml_start = VAR_16->named.data;
 VAR_22->extra.aml_length = VAR_16->named.length;
 VAR_21->buffer_field.node = VAR_19;



 VAR_20 = FUNC_4(VAR_19, VAR_21, VAR_8);
 if (FUNC_2(VAR_20)) {
  goto cleanup;
 }

cleanup:



 FUNC_9(VAR_21);
 FUNC_10(VAR_20);
}
