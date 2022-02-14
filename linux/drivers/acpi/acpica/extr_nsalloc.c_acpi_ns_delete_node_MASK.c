
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; union acpi_operand_object* next_object; } ;
struct TYPE_4__ {int pointer; int (* handler ) (struct acpi_namespace_node*,int ) ;} ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ data; } ;
struct acpi_namespace_node {union acpi_operand_object* object; } ;
struct TYPE_6__ {int total_freed; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 struct acpi_namespace_node* VAR_5 ;
 int FUNC_3 (struct acpi_namespace_node*) ;
 int FUNC_4 (int ,struct acpi_namespace_node*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct acpi_namespace_node*,int ) ;

void FUNC_7(struct acpi_namespace_node *VAR_8)
{
 union acpi_operand_object *VAR_9;
 union acpi_operand_object *VAR_10;

 FUNC_1(VAR_6);

 if (!VAR_8) {
  VAR_7;
 }



 FUNC_3(VAR_8);







 VAR_9 = VAR_8->object;
 while (VAR_9 && (VAR_9->common.type == VAR_1)) {



  if (VAR_9->data.handler) {
   VAR_9->data.handler(VAR_8, VAR_9->data.pointer);
  }

  VAR_10 = VAR_9->common.next_object;
  FUNC_5(VAR_9);
  VAR_9 = VAR_10;
 }



 if (VAR_8 == VAR_5) {
  return;
 }



 (void)FUNC_4(VAR_3, VAR_8);

 FUNC_2(VAR_4->total_freed++);
 FUNC_0((VAR_0, "Node %p, Remaining %X\n",
     VAR_8, VAR_2));
}
