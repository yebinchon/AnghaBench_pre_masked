
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int pipe; int queue; } ;
struct device_queue_manager {int next_pipe_to_allocate; int* allocated_queues; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device_queue_manager*) ;
 int FUNC_2 (struct device_queue_manager*,int ,int) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct device_queue_manager *VAR_1, struct queue *VAR_2)
{
 bool VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = 0;

 for (VAR_4 = VAR_1->next_pipe_to_allocate, VAR_6 = 0;
   VAR_6 < FUNC_1(VAR_1);
   VAR_4 = ((VAR_4 + 1) % FUNC_1(VAR_1)), ++VAR_6) {

  if (!FUNC_2(VAR_1, 0, VAR_4))
   continue;

  if (VAR_1->allocated_queues[VAR_4] != 0) {
   VAR_5 = FUNC_0(VAR_1->allocated_queues[VAR_4]) - 1;
   VAR_1->allocated_queues[VAR_4] &= ~(1 << VAR_5);
   VAR_2->pipe = VAR_4;
   VAR_2->queue = VAR_5;
   VAR_3 = 1;
   break;
  }
 }

 if (!VAR_3)
  return -VAR_0;

 FUNC_3("hqd slot - pipe %d, queue %d\n", VAR_2->pipe, VAR_2->queue);

 VAR_1->next_pipe_to_allocate = (VAR_4 + 1) % FUNC_1(VAR_1);

 return 0;
}
