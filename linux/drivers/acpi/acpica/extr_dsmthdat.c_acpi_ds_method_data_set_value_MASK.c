
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int reference_count; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {union acpi_operand_object* object; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static acpi_status
FUNC_7(u8 VAR_2,
         u32 VAR_3,
         union acpi_operand_object *VAR_4,
         struct acpi_walk_state *VAR_5)
{
 acpi_status VAR_6;
 struct acpi_namespace_node *VAR_7;

 FUNC_2(VAR_1);

 FUNC_0((VAR_0,
     "NewObj %p Type %2.2X, Refs=%u [%s]\n", VAR_4,
     VAR_2, VAR_4->common.reference_count,
     FUNC_5(VAR_4->common.type)));



 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_5, &VAR_7);
 if (FUNC_1(VAR_6)) {
  FUNC_6(VAR_6);
 }







 FUNC_4(VAR_4);



 VAR_7->object = VAR_4;
 FUNC_6(VAR_6);
}
