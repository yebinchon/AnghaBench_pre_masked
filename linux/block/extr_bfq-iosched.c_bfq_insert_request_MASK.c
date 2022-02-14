
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct request* last_merge; TYPE_1__* elevator; } ;
struct request {unsigned int cmd_flags; int queuelist; } ;
struct blk_mq_hw_ctx {struct request_queue* queue; } ;
struct bfq_queue {int dummy; } ;
struct bfq_data {int lock; int dispatch; } ;
struct TYPE_2__ {struct bfq_data* elevator_data; } ;


 struct bfq_queue* FUNC_0 (struct request*) ;
 int FUNC_1 (struct bfq_data*,struct request*) ;
 struct bfq_queue* FUNC_2 (struct request*) ;
 int FUNC_3 (struct request_queue*,struct bfq_queue*,int,unsigned int) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request_queue*,struct request*) ;
 scalar_t__ FUNC_6 (struct request*) ;
 int FUNC_7 (struct request_queue*,struct request*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (struct request*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct blk_mq_hw_ctx *VAR_0, struct request *VAR_1,
          bool VAR_2)
{
 struct request_queue *VAR_3 = VAR_0->queue;
 struct bfq_data *VAR_4 = VAR_3->elevator->elevator_data;
 struct bfq_queue *VAR_5;
 bool VAR_6 = 0;
 unsigned int VAR_7;

 FUNC_11(&VAR_4->lock);
 if (FUNC_5(VAR_3, VAR_1)) {
  FUNC_12(&VAR_4->lock);
  return;
 }

 FUNC_12(&VAR_4->lock);

 FUNC_4(VAR_1);

 FUNC_11(&VAR_4->lock);
 VAR_5 = FUNC_2(VAR_1);
 if (!VAR_5 || VAR_2 || FUNC_6(VAR_1)) {
  if (VAR_2)
   FUNC_8(&VAR_1->queuelist, &VAR_4->dispatch);
  else
   FUNC_9(&VAR_1->queuelist, &VAR_4->dispatch);
 } else {
  VAR_6 = FUNC_1(VAR_4, VAR_1);





  VAR_5 = FUNC_0(VAR_1);

  if (FUNC_10(VAR_1)) {
   FUNC_7(VAR_3, VAR_1);
   if (!VAR_3->last_merge)
    VAR_3->last_merge = VAR_1;
  }
 }






 VAR_7 = VAR_1->cmd_flags;

 FUNC_12(&VAR_4->lock);

 FUNC_3(VAR_3, VAR_5, VAR_6,
    VAR_7);
}
