
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {union acpi_operand_object** notify_list; } ;
union acpi_operand_object {TYPE_1__ common_notify; } ;
struct TYPE_7__ {size_t handler_list_id; TYPE_4__* global; union acpi_operand_object* handler_list_head; scalar_t__ value; struct acpi_namespace_node* node; } ;
struct TYPE_6__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_3__ notify; TYPE_2__ common; } ;
typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct acpi_namespace_node {int type; } ;
typedef int acpi_status ;
struct TYPE_8__ {int handler; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct acpi_namespace_node*) ;
 int VAR_10 ;
 TYPE_4__* VAR_11 ;
 union acpi_operand_object* FUNC_4 (struct acpi_namespace_node*) ;
 int FUNC_5 (int ,int ,union acpi_generic_state*) ;
 union acpi_generic_state* FUNC_6 () ;
 int FUNC_7 (union acpi_generic_state*) ;
 int FUNC_8 (struct acpi_namespace_node*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ) ;
 int VAR_12 ;

acpi_status
FUNC_11(struct acpi_namespace_node *VAR_13, u32 VAR_14)
{
 union acpi_operand_object *VAR_15;
 union acpi_operand_object *VAR_16 = ((void*)0);
 union acpi_generic_state *VAR_17;
 u8 VAR_18 = 0;
 acpi_status VAR_19 = VAR_7;

 FUNC_2(VAR_12);



 if (!FUNC_3(VAR_13)) {
  return (VAR_8);
 }



 if (VAR_14 <= VAR_3) {
  VAR_18 = VAR_4;
 } else {
  VAR_18 = VAR_2;
 }



 VAR_15 = FUNC_4(VAR_13);
 if (VAR_15) {



  VAR_16 =
      VAR_15->common_notify.notify_list[VAR_18];
 }





 if (!VAR_11[VAR_18].handler
     && !VAR_16) {
  FUNC_0((VAR_0,
      "No notify handler for Notify, ignoring (%4.4s, %X) node %p\n",
      FUNC_8(VAR_13), VAR_14,
      VAR_13));

  return (VAR_7);
 }



 VAR_17 = FUNC_6();
 if (!VAR_17) {
  return (VAR_6);
 }

 VAR_17->common.descriptor_type = VAR_1;

 VAR_17->notify.node = VAR_13;
 VAR_17->notify.value = (u16)VAR_14;
 VAR_17->notify.handler_list_id = VAR_18;
 VAR_17->notify.handler_list_head = VAR_16;
 VAR_17->notify.global = &VAR_11[VAR_18];

 FUNC_0((VAR_0,
     "Dispatching Notify on [%4.4s] (%s) Value 0x%2.2X (%s) Node %p\n",
     FUNC_8(VAR_13),
     FUNC_10(VAR_13->type), VAR_14,
     FUNC_9(VAR_14, VAR_5),
     VAR_13));

 VAR_19 = FUNC_5(VAR_9,
     VAR_10, VAR_17);
 if (FUNC_1(VAR_19)) {
  FUNC_7(VAR_17);
 }

 return (VAR_19);
}
