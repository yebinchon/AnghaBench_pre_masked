
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_namespace_node {TYPE_2__* object; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct acpi_namespace_node*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;

union acpi_operand_object *FUNC_4(struct
             acpi_namespace_node
             *VAR_5)
{
 FUNC_0(VAR_4, VAR_5);

 if (!VAR_5) {
  FUNC_2((VAR_3, "Null Node ptr"));
  FUNC_3(((void*)0));
 }

 if (!VAR_5->object ||
     ((FUNC_1(VAR_5->object) != VAR_1)
      && (FUNC_1(VAR_5->object) !=
   VAR_0))
     || ((VAR_5->object)->common.type == VAR_2)) {
  FUNC_3(((void*)0));
 }

 FUNC_3(VAR_5->object);
}
