
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {int * object; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (union acpi_operand_object*) ;
 int FUNC_3 (int ,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 union acpi_operand_object* FUNC_4 (struct acpi_namespace_node*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(u8 VAR_3,
     u32 VAR_4, struct acpi_walk_state *VAR_5)
{
 acpi_status VAR_6;
 struct acpi_namespace_node *VAR_7;
 union acpi_operand_object *VAR_8;

 FUNC_1(VAR_1);



 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_7);
 if (FUNC_0(VAR_6)) {
  VAR_2;
 }



 VAR_8 = FUNC_4(VAR_7);






 VAR_7->object = ((void*)0);

 if ((VAR_8) &&
     (FUNC_2(VAR_8) == VAR_0)) {





  FUNC_5(VAR_8);
 }

 VAR_2;
}
