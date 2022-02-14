
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {union acpi_operand_object* handler; } ;
struct TYPE_7__ {int space_id; TYPE_2__* node; } ;
struct TYPE_5__ {int flags; } ;
union acpi_operand_object {TYPE_4__ common_notify; TYPE_3__ region; TYPE_1__ common; } ;
struct acpi_namespace_node {int type; struct acpi_namespace_node* parent; } ;
typedef int acpi_status ;
typedef int acpi_adr_space_type ;
struct TYPE_6__ {struct acpi_namespace_node* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (union acpi_operand_object*,union acpi_operand_object*,int ) ;
 int FUNC_3 (union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_4 (int ,union acpi_operand_object*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 union acpi_operand_object* FUNC_7 (struct acpi_namespace_node*) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(union acpi_operand_object *VAR_7)
{
 union acpi_operand_object *VAR_8;
 union acpi_operand_object *VAR_9;
 acpi_adr_space_type VAR_10;
 struct acpi_namespace_node *VAR_11;

 FUNC_1(VAR_6);

 if (!VAR_7) {
  FUNC_9(VAR_2);
 }

 if (VAR_7->common.flags & VAR_4) {
  FUNC_9(VAR_3);
 }

 VAR_7->common.flags |= VAR_4;

 VAR_11 = VAR_7->region.node->parent;
 VAR_10 = VAR_7->region.space_id;





 while (VAR_11) {



  VAR_8 = ((void*)0);
  VAR_9 = FUNC_7(VAR_11);
  if (VAR_9) {



   switch (VAR_11->type) {
   case 130:
   case 129:
   case 128:

    VAR_8 = VAR_9->common_notify.handler;
    break;

   default:



    break;
   }

   VAR_8 =
       FUNC_4(VAR_10, VAR_8);
   if (VAR_8) {



    FUNC_0((VAR_0,
        "Found handler %p for region %p in obj %p\n",
        VAR_8, VAR_7,
        VAR_9));

    (void)FUNC_2(VAR_8,
           VAR_7, VAR_5);





    FUNC_6();
    (void)FUNC_3(VAR_7,
         VAR_1);
    FUNC_5();
    FUNC_9(VAR_3);
   }
  }



  VAR_11 = VAR_11->parent;
 }






 FUNC_0((VAR_0,
     "No handler for RegionType %s(%X) (RegionObj %p)\n",
     FUNC_8(VAR_10), VAR_10,
     VAR_7));

 FUNC_9(VAR_3);
}
