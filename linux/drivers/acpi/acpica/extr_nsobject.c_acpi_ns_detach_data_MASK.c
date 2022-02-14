
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; union acpi_operand_object* next_object; } ;
struct TYPE_4__ {scalar_t__ handler; } ;
union acpi_operand_object {TYPE_1__ common; TYPE_2__ data; } ;
struct acpi_namespace_node {union acpi_operand_object* object; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_handler ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union acpi_operand_object*) ;

acpi_status
FUNC_1(struct acpi_namespace_node *VAR_3,
      acpi_object_handler VAR_4)
{
 union acpi_operand_object *VAR_5;
 union acpi_operand_object *VAR_6;

 VAR_6 = ((void*)0);
 VAR_5 = VAR_3->object;
 while (VAR_5) {
  if ((VAR_5->common.type == VAR_0) &&
      (VAR_5->data.handler == VAR_4)) {
   if (VAR_6) {
    VAR_6->common.next_object =
        VAR_5->common.next_object;
   } else {
    VAR_3->object = VAR_5->common.next_object;
   }

   FUNC_0(VAR_5);
   return (VAR_2);
  }

  VAR_6 = VAR_5;
  VAR_5 = VAR_5->common.next_object;
 }

 return (VAR_1);
}
