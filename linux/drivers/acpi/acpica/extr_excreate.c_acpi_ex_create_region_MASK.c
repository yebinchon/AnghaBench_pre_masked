
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int * handler; struct acpi_namespace_node* node; scalar_t__ length; scalar_t__ address; int space_id; } ;
struct TYPE_12__ {struct acpi_namespace_node* scope_node; int * method_REG; int aml_length; int * aml_start; } ;
union acpi_operand_object {TYPE_7__ common; TYPE_6__ region; TYPE_5__ extra; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {TYPE_4__* scope_info; TYPE_2__* op; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
struct TYPE_10__ {struct acpi_namespace_node* node; } ;
struct TYPE_11__ {TYPE_3__ scope; } ;
struct TYPE_8__ {struct acpi_namespace_node* node; } ;
struct TYPE_9__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 scalar_t__ FUNC_5 (struct acpi_namespace_node*) ;
 union acpi_operand_object* FUNC_6 (union acpi_operand_object*) ;
 union acpi_operand_object* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_8 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(u8 * VAR_9,
        u32 VAR_10,
        u8 VAR_11, struct acpi_walk_state *VAR_12)
{
 acpi_status VAR_13;
 union acpi_operand_object *VAR_14;
 struct acpi_namespace_node *VAR_15;
 union acpi_operand_object *VAR_16;

 FUNC_2(VAR_8);



 VAR_15 = VAR_12->op->common.node;





 if (FUNC_5(VAR_15)) {
  FUNC_10(VAR_4);
 }





 if (!FUNC_3(VAR_11)) {





  FUNC_1((VAR_2,
       "Invalid/unknown Address Space ID: 0x%2.2X",
       VAR_11));
 }

 FUNC_0((VAR_0, "Region Type - %s (0x%X)\n",
     FUNC_8(VAR_11), VAR_11));



 VAR_14 = FUNC_7(VAR_1);
 if (!VAR_14) {
  VAR_13 = VAR_3;
  goto cleanup;
 }





 VAR_16 = FUNC_6(VAR_14);
 VAR_16->extra.aml_start = VAR_9;
 VAR_16->extra.aml_length = VAR_10;
 VAR_16->extra.method_REG = ((void*)0);
 if (VAR_12->scope_info) {
  VAR_16->extra.scope_node =
      VAR_12->scope_info->scope.node;
 } else {
  VAR_16->extra.scope_node = VAR_15;
 }



 VAR_14->region.space_id = VAR_11;
 VAR_14->region.address = 0;
 VAR_14->region.length = 0;
 VAR_14->region.node = VAR_15;
 VAR_14->region.handler = ((void*)0);
 VAR_14->common.flags &=
     ~(VAR_7 | VAR_6 |
       VAR_5);



 VAR_13 = FUNC_4(VAR_15, VAR_14, VAR_1);

cleanup:



 FUNC_9(VAR_14);
 FUNC_10(VAR_13);
}
