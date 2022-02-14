
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int arg; } ;
struct TYPE_5__ {TYPE_3__ value; } ;
union acpi_parse_object {TYPE_2__ common; } ;
struct TYPE_4__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {int type; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_parse_object*) ;
 int VAR_0 ;
 int FUNC_2 (struct acpi_walk_state*,int ,union acpi_operand_object**) ;
 int FUNC_3 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 scalar_t__ FUNC_4 (struct acpi_namespace_node*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(struct acpi_walk_state *VAR_2,
      struct acpi_namespace_node *VAR_3,
      union acpi_parse_object *VAR_4)
{
 acpi_status VAR_5;
 union acpi_operand_object *VAR_6;

 FUNC_1(VAR_1, VAR_4);






 if (FUNC_4(VAR_3)) {
  FUNC_6(VAR_0);
 }

 if (!VAR_4->common.value.arg) {



  FUNC_6(VAR_0);
 }



 VAR_5 =
     FUNC_2(VAR_2, VAR_4->common.value.arg,
       &VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_6(VAR_5);
 }



 VAR_3->type = VAR_6->common.type;



 VAR_5 = FUNC_3(VAR_3, VAR_6, VAR_3->type);



 FUNC_5(VAR_6);
 FUNC_6(VAR_5);
}
