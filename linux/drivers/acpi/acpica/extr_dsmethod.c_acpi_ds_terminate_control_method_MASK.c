
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int info_flags; int thread_count; scalar_t__ node; int owner_id; scalar_t__ sync_level; TYPE_3__* mutex; } ;
union acpi_operand_object {TYPE_5__ method; } ;
struct acpi_walk_state {TYPE_6__* method_node; TYPE_1__* thread; } ;
struct acpi_namespace_node {int dummy; } ;
struct TYPE_10__ {int ascii; } ;
struct TYPE_12__ {TYPE_4__ name; } ;
struct TYPE_8__ {scalar_t__ thread_id; int os_mutex; int original_sync_level; int acquisition_depth; } ;
struct TYPE_9__ {TYPE_2__ mutex; } ;
struct TYPE_7__ {int current_sync_level; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct acpi_walk_state*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct acpi_namespace_node*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_12(union acpi_operand_object *VAR_9,
     struct acpi_walk_state *VAR_10)
{

 FUNC_2(VAR_7, VAR_10);



 if (!VAR_9) {
  VAR_8;
 }

 if (VAR_10) {



  FUNC_4(VAR_10);
  if (!(VAR_9->method.info_flags & VAR_3)
      && (VAR_9->method.thread_count == 1)) {



   (void)FUNC_6();
   FUNC_9(VAR_10->
        method_node);
   (void)FUNC_5();
   if (VAR_9->method.
       info_flags & VAR_2) {
    (void)FUNC_6();
    FUNC_8(VAR_9->
          method.
          owner_id);
    (void)FUNC_5();
    VAR_9->method.info_flags &=
        ~VAR_2;
   }
  }





  if (VAR_9->method.mutex) {



   VAR_9->method.mutex->mutex.acquisition_depth--;
   if (!VAR_9->method.mutex->mutex.acquisition_depth) {
    VAR_10->thread->current_sync_level =
        VAR_9->method.mutex->mutex.
        original_sync_level;

    FUNC_10(VAR_9->method.
            mutex->mutex.os_mutex);
    VAR_9->method.mutex->mutex.thread_id = 0;
   }
  }
 }



 if (VAR_9->method.thread_count) {
  VAR_9->method.thread_count--;
 } else {
  FUNC_1((VAR_6, "Invalid zero thread count in method"));
 }



 if (VAR_9->method.thread_count) {




  FUNC_0((VAR_0,
      "*** Completed execution of one thread, %u threads remaining\n",
      VAR_9->method.thread_count));
 } else {
  if (VAR_9->method.
      info_flags & VAR_5) {
   if (VAR_10) {
    FUNC_3(("Marking method %4.4s as Serialized "
        "because of AE_ALREADY_EXISTS error",
        VAR_10->method_node->name.
        ascii));
   }
   VAR_9->method.info_flags &=
       ~VAR_5;

   VAR_9->method.info_flags |=
       (VAR_4 |
        VAR_1);
   VAR_9->method.sync_level = 0;
  }



  if (!
      (VAR_9->method.
       info_flags & VAR_3)) {
   FUNC_11(&VAR_9->method.owner_id);
  }
 }

 FUNC_7((struct acpi_namespace_node *)VAR_9->
      method.node, VAR_9, VAR_10);

 VAR_8;
}
