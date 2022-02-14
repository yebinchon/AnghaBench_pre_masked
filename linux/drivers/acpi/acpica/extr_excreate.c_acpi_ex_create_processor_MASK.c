
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {scalar_t__ address; void* length; void* proc_id; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ processor; } ;
typedef void* u8 ;
struct acpi_walk_state {union acpi_operand_object** operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_io_address ;


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
 union acpi_operand_object *VAR_5;
 acpi_status VAR_6;

 FUNC_0(VAR_2, VAR_3);



 VAR_5 = FUNC_2(VAR_0);
 if (!VAR_5) {
  FUNC_4(VAR_1);
 }



 VAR_5->processor.proc_id = (u8) VAR_4[1]->integer.value;
 VAR_5->processor.length = (u8) VAR_4[3]->integer.value;
 VAR_5->processor.address =
     (acpi_io_address)VAR_4[2]->integer.value;



 VAR_6 = FUNC_1((struct acpi_namespace_node *)VAR_4[0],
           VAR_5, VAR_0);



 FUNC_3(VAR_5);
 FUNC_4(VAR_6);
}
