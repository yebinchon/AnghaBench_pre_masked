
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sync_level; int acquisition_depth; scalar_t__ original_sync_level; TYPE_3__* owner_thread; int node; } ;
struct TYPE_4__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_2__ mutex; TYPE_1__ integer; } ;
typedef int u16 ;
struct acpi_walk_state {TYPE_3__* thread; } ;
typedef int acpi_status ;
struct TYPE_6__ {scalar_t__ current_sync_level; int thread_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_operand_object*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,union acpi_operand_object*,int ) ;
 int FUNC_5 (union acpi_operand_object*,TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(union acpi_operand_object *VAR_6,
        union acpi_operand_object *VAR_7,
        struct acpi_walk_state *VAR_8)
{
 acpi_status VAR_9;

 FUNC_2(VAR_5, VAR_7);

 if (!VAR_7) {
  FUNC_7(VAR_3);
 }



 if (!VAR_8->thread) {
  FUNC_1((VAR_4,
       "Cannot acquire Mutex [%4.4s], null thread info",
       FUNC_6(VAR_7->mutex.node)));
  FUNC_7(VAR_1);
 }





 if (VAR_8->thread->current_sync_level > VAR_7->mutex.sync_level) {
  FUNC_1((VAR_4,
       "Cannot acquire Mutex [%4.4s], "
       "current SyncLevel is too large (%u)",
       FUNC_6(VAR_7->mutex.node),
       VAR_8->thread->current_sync_level));
  FUNC_7(VAR_2);
 }

 FUNC_0((VAR_0,
     "Acquiring: Mutex SyncLevel %u, Thread SyncLevel %u, "
     "Depth %u TID %p\n",
     VAR_7->mutex.sync_level,
     VAR_8->thread->current_sync_level,
     VAR_7->mutex.acquisition_depth,
     VAR_8->thread));

 VAR_9 = FUNC_4((u16)VAR_6->integer.value,
           VAR_7,
           VAR_8->thread->thread_id);

 if (FUNC_3(VAR_9) && VAR_7->mutex.acquisition_depth == 1) {



  VAR_7->mutex.owner_thread = VAR_8->thread;
  VAR_7->mutex.original_sync_level =
      VAR_8->thread->current_sync_level;
  VAR_8->thread->current_sync_level =
      VAR_7->mutex.sync_level;



  FUNC_5(VAR_7, VAR_8->thread);
 }

 FUNC_0((VAR_0,
     "Acquired: Mutex SyncLevel %u, Thread SyncLevel %u, Depth %u\n",
     VAR_7->mutex.sync_level,
     VAR_8->thread->current_sync_level,
     VAR_7->mutex.acquisition_depth));

 FUNC_7(VAR_9);
}
