
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct acpi_walk_state {TYPE_3__* arguments; union acpi_operand_object* method_desc; struct acpi_namespace_node* method_node; } ;
struct acpi_namespace_node {scalar_t__ type; TYPE_2__* object; } ;
struct TYPE_6__ {union acpi_operand_object* object; } ;
struct TYPE_4__ {int param_count; } ;
struct TYPE_5__ {TYPE_1__ method; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (union acpi_operand_object*,struct acpi_walk_state*) ;
 struct acpi_namespace_node* VAR_4 ;
 int FUNC_1 (char*,...) ;
 size_t FUNC_2 (struct acpi_namespace_node*) ;

void FUNC_3(struct acpi_walk_state *VAR_5)
{
 u32 VAR_6;
 union acpi_operand_object *VAR_7;
 struct acpi_namespace_node *VAR_8;
 u8 VAR_9 = VAR_2;

 VAR_8 = VAR_5->method_node;
 VAR_7 = VAR_5->method_desc;



 if (VAR_8 == VAR_4) {
  return;
 }

 if (!VAR_8) {
  FUNC_1
      ("No method node (Executing subtree for buffer or opregion)\n");
  return;
 }

 if (VAR_8->type != VAR_1) {
  FUNC_1("Executing subtree for Buffer/Package/Region\n");
  return;
 }



 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = VAR_5->arguments[VAR_6].object;
  if (VAR_7) {
   VAR_9 = VAR_3;
   break;
  }
 }



 if (VAR_9) {
  FUNC_1("Initialized Arguments for Method [%4.4s]:  "
          "(%X arguments defined for method invocation)\n",
          FUNC_2(VAR_8),
          VAR_8->object->method.param_count);

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   VAR_7 = VAR_5->arguments[VAR_6].object;
   if (VAR_7) {
    FUNC_1("  Arg%u:   ", VAR_6);
    FUNC_0(VAR_7,
        VAR_5);
   }
  }
 } else {
  FUNC_1
      ("No Arguments are initialized for method [%4.4s]\n",
       FUNC_2(VAR_8));
 }
}
