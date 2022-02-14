
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {scalar_t__ fifo_time; int cmd_flags; int queuelist; } ;
struct bfq_queue {struct request* next_rq; } ;


 struct bfq_queue* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct request_queue *VAR_0, struct request *VAR_1,
    struct request *VAR_2)
{
 struct bfq_queue *VAR_3 = FUNC_0(VAR_1),
  *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_3)
  return;
 if (VAR_3 == VAR_4 &&
     !FUNC_4(&VAR_1->queuelist) && !FUNC_4(&VAR_2->queuelist) &&
     VAR_2->fifo_time < VAR_1->fifo_time) {
  FUNC_3(&VAR_1->queuelist);
  FUNC_5(&VAR_2->queuelist, &VAR_1->queuelist);
  VAR_1->fifo_time = VAR_2->fifo_time;
 }

 if (VAR_3->next_rq == VAR_2)
  VAR_3->next_rq = VAR_1;

 FUNC_1(FUNC_2(VAR_3), VAR_2->cmd_flags);
}
