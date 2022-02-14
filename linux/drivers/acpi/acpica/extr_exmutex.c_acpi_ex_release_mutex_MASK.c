
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sync_level; int acquisition_depth; int node; struct acpi_thread_state* owner_thread; } ;
union acpi_operand_object {TYPE_4__ mutex; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct acpi_walk_state {TYPE_3__* thread; } ;
struct acpi_thread_state {scalar_t__ thread_id; scalar_t__ current_sync_level; TYPE_2__* acquired_mutex_list; } ;
typedef int acpi_status ;
struct TYPE_7__ {scalar_t__ thread_id; int current_sync_level; } ;
struct TYPE_5__ {scalar_t__ original_sync_level; } ;
struct TYPE_6__ {TYPE_1__ mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (union acpi_operand_object*) ;
 union acpi_operand_object* VAR_8 ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_10,
        struct acpi_walk_state *VAR_11)
{
 u8 VAR_12;
 struct acpi_thread_state *VAR_13;
 acpi_status VAR_14 = VAR_7;

 FUNC_3(VAR_9);

 if (!VAR_10) {
  FUNC_6(VAR_5);
 }

 VAR_13 = VAR_10->mutex.owner_thread;



 if (!VAR_13) {
  FUNC_1((VAR_6,
       "Cannot release Mutex [%4.4s], not acquired",
       FUNC_5(VAR_10->mutex.node)));
  FUNC_6(VAR_2);
 }



 if (!VAR_11->thread) {
  FUNC_1((VAR_6,
       "Cannot release Mutex [%4.4s], null thread info",
       FUNC_5(VAR_10->mutex.node)));
  FUNC_6(VAR_1);
 }





 if ((VAR_13->thread_id != VAR_11->thread->thread_id) &&
     (VAR_10 != VAR_8)) {
  FUNC_1((VAR_6,
       "Thread %u cannot release Mutex [%4.4s] acquired by thread %u",
       (u32)VAR_11->thread->thread_id,
       FUNC_5(VAR_10->mutex.node),
       (u32)VAR_13->thread_id));
  FUNC_6(VAR_4);
 }
 if (VAR_10->mutex.sync_level != VAR_13->current_sync_level) {
  FUNC_1((VAR_6,
       "Cannot release Mutex [%4.4s], SyncLevel mismatch: "
       "mutex %u current %u",
       FUNC_5(VAR_10->mutex.node),
       VAR_10->mutex.sync_level,
       VAR_11->thread->current_sync_level));
  FUNC_6(VAR_3);
 }






 VAR_12 =
     VAR_13->acquired_mutex_list->mutex.original_sync_level;

 FUNC_0((VAR_0,
     "Releasing: Object SyncLevel %u, Thread SyncLevel %u, "
     "Prev SyncLevel %u, Depth %u TID %p\n",
     VAR_10->mutex.sync_level,
     VAR_11->thread->current_sync_level,
     VAR_12,
     VAR_10->mutex.acquisition_depth,
     VAR_11->thread));

 VAR_14 = FUNC_4(VAR_10);
 if (FUNC_2(VAR_14)) {
  FUNC_6(VAR_14);
 }

 if (VAR_10->mutex.acquisition_depth == 0) {



  VAR_13->current_sync_level = VAR_12;
 }

 FUNC_0((VAR_0,
     "Released: Object SyncLevel %u, Thread SyncLevel, %u, "
     "Prev SyncLevel %u, Depth %u\n",
     VAR_10->mutex.sync_level,
     VAR_11->thread->current_sync_level,
     VAR_12,
     VAR_10->mutex.acquisition_depth));

 FUNC_6(VAR_14);
}
