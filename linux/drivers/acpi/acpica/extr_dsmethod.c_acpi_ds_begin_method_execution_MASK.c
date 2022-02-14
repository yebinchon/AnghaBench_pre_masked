
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ thread_count; int info_flags; scalar_t__ sync_level; TYPE_3__* mutex; int owner_id; } ;
union acpi_operand_object {TYPE_4__ method; } ;
struct acpi_walk_state {TYPE_1__* thread; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
struct TYPE_6__ {scalar_t__ sync_level; scalar_t__ thread_id; scalar_t__ original_sync_level; int os_mutex; int acquisition_depth; } ;
struct TYPE_7__ {TYPE_2__ mutex; } ;
struct TYPE_5__ {scalar_t__ current_sync_level; scalar_t__ thread_id; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_namespace_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (union acpi_operand_object*) ;
 int FUNC_4 (struct acpi_namespace_node*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct acpi_namespace_node*) ;
 int VAR_10 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(struct acpi_namespace_node *VAR_11,
          union acpi_operand_object *VAR_12,
          struct acpi_walk_state *VAR_13)
{
 acpi_status VAR_14 = VAR_8;

 FUNC_2(VAR_10, VAR_11);

 if (!VAR_11) {
  FUNC_10(VAR_7);
 }

 FUNC_4(VAR_11, VAR_12, VAR_13);



 if (VAR_12->method.thread_count == VAR_2) {
  FUNC_0((VAR_6,
       "Method reached maximum reentrancy limit (255)"));
  FUNC_10(VAR_4);
 }




 if (VAR_12->method.info_flags & VAR_1) {





  if (!VAR_12->method.mutex) {
   VAR_14 = FUNC_3(VAR_12);
   if (FUNC_1(VAR_14)) {
    FUNC_10(VAR_14);
   }
  }
  if (VAR_13 &&
      (!(VAR_12->method.
         info_flags & VAR_0))
      && (VAR_13->thread->current_sync_level >
   VAR_12->method.mutex->mutex.sync_level)) {
   FUNC_0((VAR_6,
        "Cannot acquire Mutex for method [%4.4s]"
        ", current SyncLevel is too large (%u)",
        FUNC_9(VAR_11),
        VAR_13->thread->current_sync_level));

   FUNC_10(VAR_5);
  }





  if (!VAR_13 ||
      !VAR_12->method.mutex->mutex.thread_id ||
      (VAR_13->thread->thread_id !=
       VAR_12->method.mutex->mutex.thread_id)) {




   VAR_14 =
       FUNC_5(VAR_12->method.mutex->
            mutex.os_mutex,
            VAR_3);
   if (FUNC_1(VAR_14)) {
    FUNC_10(VAR_14);
   }



   if (VAR_13) {
    VAR_12->method.mutex->mutex.
        original_sync_level =
        VAR_13->thread->current_sync_level;

    VAR_12->method.mutex->mutex.thread_id =
        VAR_13->thread->thread_id;
    if (!(VAR_12->method.info_flags &
          VAR_0)) {
     VAR_13->thread->current_sync_level =
         VAR_12->method.sync_level;
    }
   } else {
    VAR_12->method.mutex->mutex.
        original_sync_level =
        VAR_12->method.mutex->mutex.sync_level;

    VAR_12->method.mutex->mutex.thread_id =
        FUNC_6();
   }
  }



  VAR_12->method.mutex->mutex.acquisition_depth++;
 }






 if (!VAR_12->method.owner_id) {
  VAR_14 = FUNC_8(&VAR_12->method.owner_id);
  if (FUNC_1(VAR_14)) {
   goto cleanup;
  }
 }





 VAR_12->method.thread_count++;
 VAR_9++;
 FUNC_10(VAR_14);

cleanup:


 if (VAR_12->method.mutex) {
  FUNC_7(VAR_12->method.mutex->mutex.os_mutex);
 }
 FUNC_10(VAR_14);
}
