
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; union acpi_operand_object* next_object; } ;
struct TYPE_5__ {int space_id; } ;
struct TYPE_4__ {int aml_start; } ;
union acpi_operand_object {TYPE_3__ common; TYPE_2__ region; TYPE_1__ method; } ;
struct acpi_namespace_node {int flags; int type; union acpi_operand_object* object; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (union acpi_operand_object*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct acpi_namespace_node*) ;
 int FUNC_5 (int ,struct acpi_namespace_node*) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_7(struct acpi_namespace_node *VAR_9)
{
 union acpi_operand_object *VAR_10;

 FUNC_2(VAR_7);

 VAR_10 = VAR_9->object;

 if (!VAR_10 || (VAR_10->common.type == VAR_3)) {
  VAR_8;
 }

 if (VAR_9->flags & VAR_6) {



  if (VAR_10->common.type == VAR_4) {
   FUNC_1(VAR_10->method.aml_start);
  }
 }

 if (VAR_10->common.type == VAR_5) {
  FUNC_5(VAR_10->region.space_id, VAR_9);
 }



 VAR_9->object = ((void*)0);
 if (FUNC_3(VAR_10) == VAR_1) {



  VAR_9->object = VAR_10->common.next_object;



  if (VAR_9->object &&
      (VAR_9->object->common.type != VAR_3)) {
   VAR_9->object = VAR_9->object->common.next_object;
  }





  if (VAR_10->common.next_object &&
      ((VAR_10->common.next_object)->common.type ==
       VAR_3)) {
   VAR_10->common.next_object = ((void*)0);
  }
 }



 VAR_9->type = VAR_2;

 FUNC_0((VAR_0, "Node %p [%4.4s] Object %p\n",
     VAR_9, FUNC_4(VAR_9), VAR_10));



 FUNC_6(VAR_10);
 VAR_8;
}
