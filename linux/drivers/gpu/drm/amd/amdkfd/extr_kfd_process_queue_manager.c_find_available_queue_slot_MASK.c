
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process_queue_manager {int queue_slot_bitmap; TYPE_1__* process; } ;
struct TYPE_2__ {int pasid; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct process_queue_manager *VAR_2,
     unsigned int *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_2->queue_slot_bitmap,
   VAR_1);

 FUNC_1("The new slot id %lu\n", VAR_4);

 if (VAR_4 >= VAR_1) {
  FUNC_2("Cannot open more queues for process with pasid %d\n",
    VAR_2->process->pasid);
  return -VAR_0;
 }

 FUNC_3(VAR_4, VAR_2->queue_slot_bitmap);
 *VAR_3 = VAR_4;

 return 0;
}
