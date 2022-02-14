
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {int type; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 int FUNC_4 (union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static acpi_status
FUNC_9(union acpi_operand_object *VAR_2,
        struct acpi_namespace_node *VAR_3,
        struct acpi_walk_state *VAR_4)
{
 acpi_status VAR_5;
 union acpi_operand_object *VAR_6;

 FUNC_2(VAR_1);

 FUNC_0((VAR_0,
     "Storing [%s] (%p) directly into node [%s] (%p)"
     " with no implicit conversion\n",
     FUNC_5(VAR_2),
     VAR_2, FUNC_6(VAR_3->type),
     VAR_3));



 VAR_5 =
     FUNC_4(VAR_2, &VAR_6, VAR_4);
 if (FUNC_1(VAR_5)) {
  FUNC_8(VAR_5);
 }



 VAR_5 = FUNC_3(VAR_3, VAR_6, VAR_6->common.type);
 FUNC_7(VAR_6);
 FUNC_8(VAR_5);
}
