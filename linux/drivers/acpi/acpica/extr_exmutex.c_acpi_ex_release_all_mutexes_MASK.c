
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ thread_id; int * owner_thread; scalar_t__ acquisition_depth; union acpi_operand_object* next; int * prev; int original_sync_level; int os_mutex; int sync_level; TYPE_2__* node; } ;
union acpi_operand_object {TYPE_3__ mutex; } ;
struct acpi_thread_state {int current_sync_level; union acpi_operand_object* acquired_mutex_list; } ;
struct TYPE_4__ {int ascii; } ;
struct TYPE_5__ {TYPE_1__ name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 union acpi_operand_object* VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(struct acpi_thread_state *VAR_4)
{
 union acpi_operand_object *VAR_5 = VAR_4->acquired_mutex_list;
 union acpi_operand_object *VAR_6;

 FUNC_1(VAR_2);



 while (VAR_5) {
  VAR_6 = VAR_5;
  FUNC_0((VAR_0,
      "Mutex [%4.4s] force-release, SyncLevel %u Depth %u\n",
      VAR_6->mutex.node->name.ascii,
      VAR_6->mutex.sync_level,
      VAR_6->mutex.acquisition_depth));



  if (VAR_6 == VAR_1) {



   (void)FUNC_2();
  } else {
   FUNC_3(VAR_6->mutex.os_mutex);
  }



  VAR_4->current_sync_level =
      VAR_6->mutex.original_sync_level;



  VAR_5 = VAR_6->mutex.next;

  VAR_6->mutex.prev = ((void*)0);
  VAR_6->mutex.next = ((void*)0);
  VAR_6->mutex.acquisition_depth = 0;
  VAR_6->mutex.owner_thread = ((void*)0);
  VAR_6->mutex.thread_id = 0;
 }

 VAR_3;
}
