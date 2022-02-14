
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {union acpi_operand_object* handler; } ;
struct TYPE_5__ {scalar_t__ handler; union acpi_operand_object* next; int * setup; void* context; struct acpi_namespace_node* node; int * region_list; void* handler_flags; void* space_id; } ;
struct TYPE_4__ {void* type; } ;
union acpi_operand_object {TYPE_3__ common_notify; TYPE_2__ address_space; TYPE_1__ common; } ;
typedef void* u8 ;
struct acpi_namespace_node {scalar_t__ type; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;
typedef int acpi_adr_space_type ;
typedef int * acpi_adr_space_setup ;
typedef scalar_t__ acpi_adr_space_handler ;


 void* VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 union acpi_operand_object* FUNC_3 (int,union acpi_operand_object*) ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 struct acpi_namespace_node* VAR_28 ;
 int FUNC_4 (struct acpi_namespace_node*,union acpi_operand_object*,scalar_t__) ;
 union acpi_operand_object* FUNC_5 (struct acpi_namespace_node*) ;
 int FUNC_6 (scalar_t__,struct acpi_namespace_node*,int ,int ,int ,int *,union acpi_operand_object*,int *) ;
 union acpi_operand_object* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct acpi_namespace_node*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (union acpi_operand_object*) ;
 int VAR_29 ;
 int FUNC_11 (int ) ;

acpi_status
FUNC_12(struct acpi_namespace_node *VAR_30,
         acpi_adr_space_type VAR_31,
         acpi_adr_space_handler VAR_32,
         acpi_adr_space_setup VAR_33, void *VAR_34)
{
 union acpi_operand_object *VAR_35;
 union acpi_operand_object *VAR_36;
 acpi_status VAR_37 = VAR_13;
 acpi_object_type VAR_38;
 u8 VAR_39 = 0;

 FUNC_2(VAR_29);





 if ((VAR_30->type != VAR_5) &&
     (VAR_30->type != VAR_7) &&
     (VAR_30->type != VAR_8) && (VAR_30 != VAR_28)) {
  VAR_37 = VAR_11;
  goto unlock_and_exit;
 }

 if (VAR_32 == VAR_2) {
  VAR_39 = VAR_0;

  switch (VAR_31) {
  case 128:

   VAR_32 = VAR_27;
   VAR_33 = VAR_21;
   break;

  case 129:

   VAR_32 = VAR_26;
   VAR_33 = VAR_18;
   break;







  case 133:

   VAR_32 = VAR_22;
   VAR_33 = VAR_15;
   break;







  case 132:

   VAR_32 = VAR_23;
   VAR_33 = ((void*)0);
   break;

  default:

   VAR_37 = VAR_11;
   goto unlock_and_exit;
  }
 }



 if (!VAR_33) {
  VAR_33 = VAR_16;
 }



 VAR_35 = FUNC_5(VAR_30);
 if (VAR_35) {




  VAR_36 = FUNC_3(VAR_31,
         VAR_35->
         common_notify.
         handler);

  if (VAR_36) {
   if (VAR_36->address_space.handler == VAR_32) {





    VAR_37 = VAR_14;
    goto unlock_and_exit;
   } else {


    VAR_37 = VAR_10;
   }

   goto unlock_and_exit;
  }
 } else {
  FUNC_0((VAR_1,
      "Creating object on Device %p while installing handler\n",
      VAR_30));



  if (VAR_30->type == VAR_4) {
   VAR_38 = VAR_5;
  } else {
   VAR_38 = VAR_30->type;
  }

  VAR_35 = FUNC_7(VAR_38);
  if (!VAR_35) {
   VAR_37 = VAR_12;
   goto unlock_and_exit;
  }



  VAR_35->common.type = (u8)VAR_38;



  VAR_37 = FUNC_4(VAR_30, VAR_35, VAR_38);



  FUNC_10(VAR_35);

  if (FUNC_1(VAR_37)) {
   goto unlock_and_exit;
  }
 }

 FUNC_0((VAR_1,
     "Installing address handler for region %s(%X) "
     "on Device %4.4s %p(%p)\n",
     FUNC_9(VAR_31), VAR_31,
     FUNC_8(VAR_30), VAR_30, VAR_35));







 VAR_36 =
     FUNC_7(VAR_6);
 if (!VAR_36) {
  VAR_37 = VAR_12;
  goto unlock_and_exit;
 }



 VAR_36->address_space.space_id = (u8)VAR_31;
 VAR_36->address_space.handler_flags = VAR_39;
 VAR_36->address_space.region_list = ((void*)0);
 VAR_36->address_space.node = VAR_30;
 VAR_36->address_space.handler = VAR_32;
 VAR_36->address_space.context = VAR_34;
 VAR_36->address_space.setup = VAR_33;



 VAR_36->address_space.next = VAR_35->common_notify.handler;





 VAR_35->common_notify.handler = VAR_36;
 VAR_37 = FUNC_6(VAR_4, VAR_30,
     VAR_9, VAR_3,
     VAR_17, ((void*)0),
     VAR_36, ((void*)0));

unlock_and_exit:
 FUNC_11(VAR_37);
}
