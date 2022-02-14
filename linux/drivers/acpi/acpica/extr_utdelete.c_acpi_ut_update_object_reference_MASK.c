
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {union acpi_operand_object* object; int class; } ;
struct TYPE_19__ {union acpi_operand_object* data_obj; union acpi_operand_object* index_obj; } ;
struct TYPE_18__ {union acpi_operand_object* region_obj; union acpi_operand_object* bank_obj; } ;
struct TYPE_17__ {union acpi_operand_object* region_obj; } ;
struct TYPE_16__ {union acpi_operand_object* buffer_obj; } ;
struct TYPE_15__ {int type; } ;
struct TYPE_14__ {size_t count; union acpi_operand_object** elements; } ;
struct TYPE_13__ {union acpi_operand_object** next; } ;
struct TYPE_12__ {union acpi_operand_object** notify_list; } ;
union acpi_operand_object {TYPE_9__ reference; TYPE_8__ index_field; TYPE_7__ bank_field; TYPE_6__ field; TYPE_5__ buffer_field; TYPE_4__ common; TYPE_3__ package; TYPE_2__ notify; TYPE_1__ common_notify; } ;
struct TYPE_11__ {union acpi_operand_object* object; } ;
union acpi_generic_state {TYPE_10__ update; } ;
typedef size_t u32 ;
typedef int u16 ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (union acpi_operand_object*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (union acpi_operand_object*,int ,union acpi_generic_state**) ;
 int FUNC_6 (union acpi_generic_state*) ;
 union acpi_generic_state* FUNC_7 (union acpi_generic_state**) ;
 int FUNC_8 (union acpi_operand_object*,int ) ;
 int VAR_7 ;

acpi_status
FUNC_9(union acpi_operand_object *VAR_8, u16 VAR_9)
{
 acpi_status VAR_10 = VAR_6;
 union acpi_generic_state *VAR_11 = ((void*)0);
 union acpi_operand_object *VAR_12 = ((void*)0);
 union acpi_operand_object *VAR_13;
 union acpi_generic_state *VAR_14;
 u32 VAR_15;

 FUNC_3(VAR_7);

 while (VAR_8) {



  if (FUNC_4(VAR_8) == VAR_1) {
   FUNC_0((VAR_0,
       "Object %p is NS handle\n", VAR_8));
   return (VAR_6);
  }





  switch (VAR_8->common.type) {
  case 139:
  case 131:
  case 132:
  case 128:




   for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
    VAR_13 =
        VAR_8->common_notify.notify_list[VAR_15];
    while (VAR_13) {
     VAR_12 =
         VAR_13->notify.next[VAR_15];
     FUNC_8(VAR_13,
         VAR_9);
     VAR_13 = VAR_12;
    }
   }
   break;

  case 133:




   for (VAR_15 = 0; VAR_15 < VAR_8->package.count; VAR_15++) {




    VAR_12 = VAR_8->package.elements[VAR_15];
    if (!VAR_12) {
     continue;
    }

    switch (VAR_12->common.type) {
    case 138:
    case 129:
    case 141:





     FUNC_8(VAR_12,
         VAR_9);
     break;

    default:




     VAR_10 =
         FUNC_5
         (VAR_12, VAR_9, &VAR_11);
     if (FUNC_2(VAR_10)) {
      goto error_exit;
     }
     break;
    }
   }
   VAR_12 = ((void*)0);
   break;

  case 140:

   VAR_12 = VAR_8->buffer_field.buffer_obj;
   break;

  case 134:

   VAR_12 = VAR_8->field.region_obj;
   break;

  case 137:

   VAR_12 = VAR_8->bank_field.bank_obj;
   VAR_10 =
       FUNC_5(VAR_8->
         bank_field.
         region_obj,
         VAR_9,
         &VAR_11);
   if (FUNC_2(VAR_10)) {
    goto error_exit;
   }
   break;

  case 136:

   VAR_12 = VAR_8->index_field.index_obj;
   VAR_10 =
       FUNC_5(VAR_8->
         index_field.
         data_obj,
         VAR_9,
         &VAR_11);
   if (FUNC_2(VAR_10)) {
    goto error_exit;
   }
   break;

  case 135:





   if ((VAR_8->reference.class == VAR_3) ||
       (VAR_8->reference.class == VAR_4)) {
    VAR_12 = VAR_8->reference.object;
   }
   break;

  case 130:
  default:

   break;
  }






  FUNC_8(VAR_8, VAR_9);
  VAR_8 = ((void*)0);



  if (VAR_12) {
   VAR_8 = VAR_12;
   VAR_12 = ((void*)0);
  } else if (VAR_11) {
   VAR_14 = FUNC_7(&VAR_11);
   VAR_8 = VAR_14->update.object;
   FUNC_6(VAR_14);
  }
 }

 return (VAR_6);

error_exit:

 FUNC_1((VAR_5, VAR_10,
   "Could not update object reference count"));



 while (VAR_11) {
  VAR_14 = FUNC_7(&VAR_11);
  FUNC_6(VAR_14);
 }

 return (VAR_10);
}
