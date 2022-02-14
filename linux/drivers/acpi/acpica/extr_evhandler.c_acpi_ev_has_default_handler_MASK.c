
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ space_id; int handler_flags; union acpi_operand_object* next; } ;
struct TYPE_3__ {union acpi_operand_object* handler; } ;
union acpi_operand_object {TYPE_2__ address_space; TYPE_1__ common_notify; } ;
typedef int u8 ;
struct acpi_namespace_node {int dummy; } ;
typedef scalar_t__ acpi_adr_space_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_operand_object* FUNC_0 (struct acpi_namespace_node*) ;

u8
FUNC_1(struct acpi_namespace_node *VAR_3,
       acpi_adr_space_type VAR_4)
{
 union acpi_operand_object *VAR_5;
 union acpi_operand_object *VAR_6;



 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5) {
  VAR_6 = VAR_5->common_notify.handler;



  while (VAR_6) {
   if (VAR_6->address_space.space_id == VAR_4) {
    if (VAR_6->address_space.handler_flags &
        VAR_0) {
     return (VAR_2);
    }
   }

   VAR_6 = VAR_6->address_space.next;
  }
 }

 return (VAR_1);
}
