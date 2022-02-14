
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct request* last_merge; TYPE_1__* elevator; } ;
struct request {int queuelist; scalar_t__ fifo_time; } ;
struct deadline_data {int * fifo_list; scalar_t__* fifo_expire; int dispatch; } ;
struct blk_mq_hw_ctx {struct request_queue* queue; } ;
struct TYPE_2__ {struct deadline_data* elevator_data; } ;


 int FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request_queue*,struct request*) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct deadline_data*,struct request*) ;
 int FUNC_5 (struct request_queue*,struct request*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct request*) ;
 scalar_t__ FUNC_9 (struct request*) ;

__attribute__((used)) static void FUNC_10(struct blk_mq_hw_ctx *VAR_1, struct request *VAR_2,
         bool VAR_3)
{
 struct request_queue *VAR_4 = VAR_1->queue;
 struct deadline_data *VAR_5 = VAR_4->elevator->elevator_data;
 const int VAR_6 = FUNC_8(VAR_2);





 FUNC_2(VAR_2);

 if (FUNC_1(VAR_4, VAR_2))
  return;

 FUNC_0(VAR_2);

 if (VAR_3 || FUNC_3(VAR_2)) {
  if (VAR_3)
   FUNC_6(&VAR_2->queuelist, &VAR_5->dispatch);
  else
   FUNC_7(&VAR_2->queuelist, &VAR_5->dispatch);
 } else {
  FUNC_4(VAR_5, VAR_2);

  if (FUNC_9(VAR_2)) {
   FUNC_5(VAR_4, VAR_2);
   if (!VAR_4->last_merge)
    VAR_4->last_merge = VAR_2;
  }




  VAR_2->fifo_time = VAR_0 + VAR_5->fifo_expire[VAR_6];
  FUNC_7(&VAR_2->queuelist, &VAR_5->fifo_list[VAR_6]);
 }
}
