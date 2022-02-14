
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ (* setup ) (union acpi_operand_object*,int ,struct acpi_connection_info*,void**) ;scalar_t__ (* handler ) (scalar_t__,scalar_t__,scalar_t__,int *,struct acpi_connection_info*,void*) ;int handler_flags; struct acpi_connection_info* context; } ;
struct TYPE_7__ {scalar_t__ space_id; int flags; union acpi_operand_object* handler; scalar_t__ address; int node; } ;
struct TYPE_6__ {void* region_context; } ;
struct TYPE_5__ {scalar_t__ bit_length; scalar_t__ pin_number_index; int access_length; int resource_length; int resource_buffer; } ;
union acpi_operand_object {TYPE_4__ address_space; TYPE_3__ region; TYPE_2__ extra; TYPE_1__ field; } ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct acpi_connection_info {int access_length; int length; int connection; } ;
typedef scalar_t__ acpi_status ;
typedef scalar_t__ acpi_physical_address ;
typedef scalar_t__ (* acpi_adr_space_setup ) (union acpi_operand_object*,int ,struct acpi_connection_info*,void**) ;
typedef scalar_t__ (* acpi_adr_space_handler ) (scalar_t__,scalar_t__,scalar_t__,int *,struct acpi_connection_info*,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 union acpi_operand_object* FUNC_8 (union acpi_operand_object*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_11 (scalar_t__) ;

acpi_status
FUNC_12(union acpi_operand_object *VAR_11,
          union acpi_operand_object *VAR_12,
          u32 VAR_13,
          u32 VAR_14, u32 VAR_15, u64 *VAR_16)
{
 acpi_status VAR_17;
 acpi_adr_space_handler VAR_18;
 acpi_adr_space_setup VAR_19;
 union acpi_operand_object *VAR_20;
 union acpi_operand_object *VAR_21;
 void *VAR_22 = ((void*)0);
 struct acpi_connection_info *VAR_23;
 acpi_physical_address VAR_24;

 FUNC_5(VAR_10);

 VAR_21 = FUNC_8(VAR_11);
 if (!VAR_21) {
  FUNC_11(VAR_7);
 }



 VAR_20 = VAR_11->region.handler;
 if (!VAR_20) {
  FUNC_1((VAR_6,
       "No handler for Region [%4.4s] (%p) [%s]",
       FUNC_9(VAR_11->region.node),
       VAR_11,
       FUNC_10(VAR_11->region.
          space_id)));

  FUNC_11(VAR_7);
 }

 VAR_23 = VAR_20->address_space.context;





 if (!(VAR_11->region.flags & VAR_9)) {



  VAR_19 = VAR_20->address_space.setup;
  if (!VAR_19) {



   FUNC_1((VAR_6,
        "No init routine for region(%p) [%s]",
        VAR_11,
        FUNC_10(VAR_11->region.
           space_id)));
   FUNC_11(VAR_7);
  }






  FUNC_7();

  VAR_17 = VAR_19(VAR_11, VAR_5,
          VAR_23, &VAR_22);



  FUNC_6();



  if (FUNC_3(VAR_17)) {
   FUNC_2((VAR_6, VAR_17,
     "During region initialization: [%s]",
     FUNC_10(VAR_11->
        region.
        space_id)));
   FUNC_11(VAR_17);
  }



  if (!(VAR_11->region.flags & VAR_9)) {
   VAR_11->region.flags |= VAR_9;





   if (!(VAR_21->extra.region_context)) {
    VAR_21->extra.region_context =
        VAR_22;
   }
  }
 }



 VAR_18 = VAR_20->address_space.handler;
 VAR_24 = (VAR_11->region.address + VAR_14);
 if ((VAR_11->region.space_id == VAR_3) &&
     VAR_23 && VAR_12) {



  VAR_23->connection = VAR_12->field.resource_buffer;
  VAR_23->length = VAR_12->field.resource_length;
  VAR_23->access_length = VAR_12->field.access_length;
 }
 if ((VAR_11->region.space_id == VAR_2) &&
     VAR_23 && VAR_12) {



  VAR_23->connection = VAR_12->field.resource_buffer;
  VAR_23->length = VAR_12->field.resource_length;
  VAR_23->access_length = VAR_12->field.access_length;
  VAR_24 = VAR_12->field.pin_number_index;
  VAR_15 = VAR_12->field.bit_length;
 }

 FUNC_0((VAR_4,
     "Handler %p (@%p) Address %8.8X%8.8X [%s]\n",
     &VAR_11->region.handler->address_space, VAR_18,
     FUNC_4(VAR_24),
     FUNC_10(VAR_11->region.
        space_id)));

 if (!(VAR_20->address_space.handler_flags &
       VAR_0)) {





  FUNC_7();
 }



 VAR_17 = VAR_18(VAR_13, VAR_24, VAR_15, VAR_16, VAR_23,
    VAR_21->extra.region_context);

 if (FUNC_3(VAR_17)) {
  FUNC_2((VAR_6, VAR_17, "Returned by Handler for [%s]",
    FUNC_10(VAR_11->region.
       space_id)));





  if ((VAR_11->region.space_id == VAR_1) &&
      (VAR_17 == VAR_8)) {
   FUNC_1((VAR_6,
        "Timeout from EC hardware or EC device driver"));
  }
 }

 if (!(VAR_20->address_space.handler_flags &
       VAR_0)) {




  FUNC_6();
 }

 FUNC_11(VAR_17);
}
