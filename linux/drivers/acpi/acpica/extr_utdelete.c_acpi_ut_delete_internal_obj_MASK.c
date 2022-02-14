
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_18__ {void* internal_pcc_buffer; } ;
struct TYPE_17__ {int region_context; } ;
struct TYPE_16__ {int handler_flags; int context; int (* setup ) (union acpi_operand_object*,int ,int ,int *) ;union acpi_operand_object* region_list; union acpi_operand_object* next; } ;
struct TYPE_15__ {union acpi_operand_object* next; union acpi_operand_object* handler; TYPE_14__* node; int space_id; } ;
struct TYPE_28__ {int * node; union acpi_operand_object* mutex; } ;
struct TYPE_27__ {int os_mutex; } ;
struct TYPE_26__ {int * os_semaphore; } ;
struct TYPE_25__ {union acpi_operand_object* handler; } ;
struct TYPE_24__ {int gpe_block; } ;
struct TYPE_23__ {void* elements; int count; } ;
struct TYPE_22__ {void* pointer; } ;
struct TYPE_21__ {int type; int flags; } ;
struct TYPE_20__ {void* pointer; } ;
union acpi_operand_object {TYPE_13__ field; TYPE_12__ extra; TYPE_11__ address_space; TYPE_10__ region; TYPE_9__ method; TYPE_8__ mutex; TYPE_7__ event; TYPE_6__ common_notify; TYPE_5__ device; TYPE_4__ package; TYPE_3__ buffer; TYPE_2__ common; TYPE_1__ string; } ;
struct TYPE_19__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,union acpi_operand_object*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union acpi_operand_object*) ;
 union acpi_operand_object* VAR_7 ;
 int * VAR_8 ;
 union acpi_operand_object* FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (union acpi_operand_object*) ;
 int FUNC_11 (union acpi_operand_object*) ;
 int FUNC_12 (int ,TYPE_14__*) ;
 int FUNC_13 (union acpi_operand_object*) ;
 int VAR_9 ;
 int FUNC_14 (union acpi_operand_object*,int ,int ,int *) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_15(union acpi_operand_object *VAR_11)
{
 void *VAR_12 = ((void*)0);
 union acpi_operand_object *VAR_13;
 union acpi_operand_object *VAR_14;
 union acpi_operand_object *VAR_15;
 union acpi_operand_object *VAR_16;
 union acpi_operand_object **VAR_17;

 FUNC_4(VAR_10, VAR_11);

 if (!VAR_11) {
  VAR_9;
 }





 switch (VAR_11->common.type) {
 case 129:

  FUNC_0((VAR_1,
      "**** String %p, ptr %p\n", VAR_11,
      VAR_11->string.pointer));



  if (!(VAR_11->common.flags & VAR_6)) {



   VAR_12 = VAR_11->string.pointer;
  }
  break;

 case 139:

  FUNC_0((VAR_1,
      "**** Buffer %p, ptr %p\n", VAR_11,
      VAR_11->buffer.pointer));



  if (!(VAR_11->common.flags & VAR_6)) {



   VAR_12 = VAR_11->buffer.pointer;
  }
  break;

 case 132:

  FUNC_0((VAR_1,
      " **** Package of count %X\n",
      VAR_11->package.count));
  VAR_12 = VAR_11->package.elements;
  break;





 case 137:

  if (VAR_11->device.gpe_block) {
   (void)FUNC_5(VAR_11->device.
             gpe_block);
  }



 case 131:
 case 128:



  VAR_13 = VAR_11->common_notify.handler;
  while (VAR_13) {
   VAR_15 = VAR_13->address_space.next;
   FUNC_13(VAR_13);
   VAR_13 = VAR_15;
  }
  break;

 case 133:

  FUNC_0((VAR_1,
      "***** Mutex %p, OS Mutex %p\n",
      VAR_11, VAR_11->mutex.os_mutex));

  if (VAR_11 == VAR_7) {



   (void)
       FUNC_9
       (VAR_8);
   VAR_8 = ((void*)0);

   FUNC_8(VAR_11->mutex.os_mutex);
   VAR_7 = ((void*)0);
  } else {
   FUNC_6(VAR_11);
   FUNC_8(VAR_11->mutex.os_mutex);
  }
  break;

 case 136:

  FUNC_0(*(VAR_1,
      "***** Event %p, OS Semaphore %p\n",
      VAR_11, VAR_11->event.os_semaphore));

  (void)FUNC_9(VAR_11->event.os_semaphore);
  VAR_11->event.os_semaphore = ((void*)0);
  break;

 case 134:

  FUNC_0((VAR_1,
      "***** Method %p\n", VAR_11));



  if (VAR_11->method.mutex) {
   FUNC_8(VAR_11->method.mutex->mutex.
          os_mutex);
   FUNC_10(VAR_11->method.mutex);
   VAR_11->method.mutex = ((void*)0);
  }

  if (VAR_11->method.node) {
   VAR_11->method.node = ((void*)0);
  }
  break;

 case 130:

  FUNC_0((VAR_1,
      "***** Region %p\n", VAR_11));





  if (!(VAR_11->region.node->flags & VAR_5)) {
   FUNC_12(VAR_11->region.space_id,
           VAR_11->region.node);
  }

  VAR_14 = FUNC_7(VAR_11);
  if (VAR_14) {





   VAR_13 = VAR_11->region.handler;
   if (VAR_13) {
    VAR_15 =
        VAR_13->address_space.region_list;
    VAR_16 = VAR_15;
    VAR_17 =
        &VAR_13->address_space.region_list;



    while (VAR_15) {
     if (VAR_15 == VAR_11) {
      *VAR_17 =
          VAR_15->region.next;
      break;
     }



     VAR_17 = &VAR_15->region.next;
     VAR_15 = VAR_15->region.next;



     if (VAR_15 == VAR_16) {
      FUNC_2((VAR_4,
           "Circular region list in address handler object %p",
           VAR_13));
      VAR_9;
     }
    }

    if (VAR_13->address_space.handler_flags &
        VAR_0) {



     if (VAR_13->address_space.setup) {
      (void)VAR_13->
          address_space.setup(VAR_11,
         VAR_3,
         VAR_13->
         address_space.
         context,
         &VAR_14->
         extra.
         region_context);
     }
    }

    FUNC_13(VAR_13);
   }



   FUNC_10(VAR_14);
  }
  if (VAR_11->field.internal_pcc_buffer) {
   FUNC_3(VAR_11->field.internal_pcc_buffer);
  }

  break;

 case 138:

  FUNC_0((VAR_1,
      "***** Buffer Field %p\n", VAR_11));

  VAR_14 = FUNC_7(VAR_11);
  if (VAR_14) {
   FUNC_10(VAR_14);
  }
  break;

 case 135:

  FUNC_0((VAR_1,
      "***** Bank Field %p\n", VAR_11));

  VAR_14 = FUNC_7(VAR_11);
  if (VAR_14) {
   FUNC_10(VAR_14);
  }
  break;

 default:

  break;
 }



 if (VAR_12) {
  FUNC_0((VAR_1,
      "Deleting Object Subptr %p\n", VAR_12));
  FUNC_3(VAR_12);
 }



 FUNC_1((VAR_1,
         "%s: Deleting Object %p [%s]\n",
         VAR_2, VAR_11,
         FUNC_11(VAR_11)));

 FUNC_10(VAR_11);
 VAR_9;
}
