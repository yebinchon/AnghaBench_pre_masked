
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* aml_start; int param_count; int sync_level; int info_flags; union acpi_operand_object* node; int aml_length; } ;
struct TYPE_3__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_2__ method; TYPE_1__ integer; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {union acpi_operand_object** operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,struct acpi_walk_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_2 (int ) ;
 int FUNC_3 (union acpi_operand_object*) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(u8 * VAR_7,
        u32 VAR_8, struct acpi_walk_state *VAR_9)
{
 union acpi_operand_object **VAR_10 = &VAR_9->operands[0];
 union acpi_operand_object *VAR_11;
 acpi_status VAR_12;
 u8 VAR_13;

 FUNC_0(VAR_6, VAR_9);



 VAR_11 = FUNC_2(VAR_1);
 if (!VAR_11) {
  VAR_12 = VAR_2;
  goto exit;
 }



 VAR_11->method.aml_start = VAR_7;
 VAR_11->method.aml_length = VAR_8;
 VAR_11->method.node = VAR_10[0];





 VAR_13 = (u8)VAR_10[1]->integer.value;
 VAR_11->method.param_count = (u8)
     (VAR_13 & VAR_3);





 if (VAR_13 & VAR_4) {
  VAR_11->method.info_flags = VAR_0;





  VAR_11->method.sync_level = (u8)
      ((VAR_13 & VAR_5) >> 4);
 }



 VAR_12 = FUNC_1((struct acpi_namespace_node *)VAR_10[0],
           VAR_11, VAR_1);



 FUNC_3(VAR_11);

exit:


 FUNC_3(VAR_10[1]);
 FUNC_4(VAR_12);
}
