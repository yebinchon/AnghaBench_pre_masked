
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct acpi_namespace_node* node; scalar_t__ sync_level; int os_mutex; } ;
union acpi_operand_object {TYPE_3__ mutex; } ;
typedef scalar_t__ u8 ;
struct acpi_walk_state {TYPE_2__** operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 int FUNC_3 (int *) ;
 union acpi_operand_object* FUNC_4 (int ) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

acpi_status FUNC_7(struct acpi_walk_state *VAR_5)
{
 acpi_status VAR_6 = VAR_3;
 union acpi_operand_object *VAR_7;

 FUNC_1(VAR_4, VAR_1);



 VAR_7 = FUNC_4(VAR_0);
 if (!VAR_7) {
  VAR_6 = VAR_2;
  goto cleanup;
 }



 VAR_6 = FUNC_3(&VAR_7->mutex.os_mutex);
 if (FUNC_0(VAR_6)) {
  goto cleanup;
 }



 VAR_7->mutex.sync_level = (u8)VAR_5->operands[1]->integer.value;
 VAR_7->mutex.node =
     (struct acpi_namespace_node *)VAR_5->operands[0];

 VAR_6 =
     FUNC_2(VAR_7->mutex.node, VAR_7,
      VAR_0);

cleanup:




 FUNC_5(VAR_7);
 FUNC_6(VAR_6);
}
