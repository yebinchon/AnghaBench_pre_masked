
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {scalar_t__ resource_order; scalar_t__ system_level; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ power_resource; } ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct acpi_walk_state {union acpi_operand_object** operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,struct acpi_walk_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_2 (int ) ;
 int FUNC_3 (union acpi_operand_object*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

acpi_status FUNC_5(struct acpi_walk_state *VAR_3)
{
 union acpi_operand_object **VAR_4 = &VAR_3->operands[0];
 acpi_status VAR_5;
 union acpi_operand_object *VAR_6;

 FUNC_0(VAR_2, VAR_3);



 VAR_6 = FUNC_2(VAR_0);
 if (!VAR_6) {
  FUNC_4(VAR_1);
 }



 VAR_6->power_resource.system_level = (u8) VAR_4[1]->integer.value;
 VAR_6->power_resource.resource_order =
     (u16) VAR_4[2]->integer.value;



 VAR_5 = FUNC_1((struct acpi_namespace_node *)VAR_4[0],
           VAR_6, VAR_0);



 FUNC_3(VAR_6);
 FUNC_4(VAR_5);
}
