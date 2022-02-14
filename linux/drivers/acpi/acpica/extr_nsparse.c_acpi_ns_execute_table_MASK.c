
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aml_length; int info_flags; int owner_id; int * aml_start; } ;
union acpi_operand_object {TYPE_1__ method; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_table_header {int length; int signature; } ;
struct acpi_namespace_node {int flags; } ;
struct acpi_evaluate_info {struct acpi_evaluate_info* full_pathname; struct acpi_namespace_node* node; int node_flags; union acpi_operand_object* obj_desc; int pass_number; } ;
typedef int acpi_status ;
typedef int acpi_owner_id ;


 struct acpi_evaluate_info* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_evaluate_info*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,struct acpi_table_header**) ;
 struct acpi_evaluate_info* FUNC_6 (struct acpi_namespace_node*,int ) ;
 int FUNC_7 (struct acpi_evaluate_info*) ;
 int FUNC_8 (int,int *) ;
 union acpi_operand_object* FUNC_9 (int ) ;
 int FUNC_10 (union acpi_operand_object*) ;
 int VAR_9 ;
 int FUNC_11 (int ) ;

acpi_status
FUNC_12(u32 VAR_10, struct acpi_namespace_node *VAR_11)
{
 acpi_status VAR_12;
 struct acpi_table_header *VAR_13;
 acpi_owner_id VAR_14;
 struct acpi_evaluate_info *VAR_15 = ((void*)0);
 u32 VAR_16;
 u8 *VAR_17;
 union acpi_operand_object *VAR_18 = ((void*)0);

 FUNC_4(VAR_9);

 VAR_12 = FUNC_5(VAR_10, &VAR_13);
 if (FUNC_2(VAR_12)) {
  FUNC_11(VAR_12);
 }



 if (VAR_13->length < sizeof(struct acpi_table_header)) {
  FUNC_11(VAR_6);
 }

 VAR_17 = (u8 *)VAR_13 + sizeof(struct acpi_table_header);
 VAR_16 = VAR_13->length - sizeof(struct acpi_table_header);

 VAR_12 = FUNC_8(VAR_10, &VAR_14);
 if (FUNC_2(VAR_12)) {
  FUNC_11(VAR_12);
 }



 VAR_18 = FUNC_9(VAR_5);
 if (!VAR_18) {
  FUNC_11(VAR_7);
 }



 VAR_15 = FUNC_0(sizeof(struct acpi_evaluate_info));
 if (!VAR_15) {
  VAR_12 = VAR_7;
  goto cleanup;
 }

 FUNC_1((VAR_1,
         "%s: Create table pseudo-method for [%4.4s] @%p, method %p\n",
         VAR_2, VAR_13->signature, VAR_13,
         VAR_18));

 VAR_18->method.aml_start = VAR_17;
 VAR_18->method.aml_length = VAR_16;
 VAR_18->method.owner_id = VAR_14;
 VAR_18->method.info_flags |= VAR_4;

 VAR_15->pass_number = VAR_3;
 VAR_15->node = VAR_11;
 VAR_15->obj_desc = VAR_18;
 VAR_15->node_flags = VAR_15->node->flags;
 VAR_15->full_pathname = FUNC_6(VAR_15->node, VAR_8);
 if (!VAR_15->full_pathname) {
  VAR_12 = VAR_7;
  goto cleanup;
 }



 FUNC_1((VAR_0,
         "%-26s:  (Definition Block level)\n",
         "Module-level evaluation"));

 VAR_12 = FUNC_7(VAR_15);



 FUNC_1((VAR_0,
         "%-26s:  (Definition Block level)\n",
         "Module-level complete"));

cleanup:
 if (VAR_15) {
  FUNC_3(VAR_15->full_pathname);
  VAR_15->full_pathname = ((void*)0);
 }
 FUNC_3(VAR_15);
 FUNC_10(VAR_18);
 FUNC_11(VAR_12);
}
