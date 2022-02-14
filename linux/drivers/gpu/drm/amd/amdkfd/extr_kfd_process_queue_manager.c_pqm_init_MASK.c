
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_queue_manager {struct kfd_process* process; int queue_slot_bitmap; int queues; } ;
struct kfd_process {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct process_queue_manager *VAR_4, struct kfd_process *VAR_5)
{
 FUNC_1(&VAR_4->queues);
 VAR_4->queue_slot_bitmap =
   FUNC_2(FUNC_0(VAR_3,
     VAR_0), VAR_2);
 if (!VAR_4->queue_slot_bitmap)
  return -VAR_1;
 VAR_4->process = VAR_5;

 return 0;
}
