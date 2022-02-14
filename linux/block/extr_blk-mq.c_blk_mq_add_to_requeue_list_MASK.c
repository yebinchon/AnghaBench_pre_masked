
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int requeue_lock; int requeue_list; } ;
struct request {int rq_flags; int queuelist; struct request_queue* q; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct request *VAR_1, bool VAR_2,
    bool VAR_3)
{
 struct request_queue *VAR_4 = VAR_1->q;
 unsigned long VAR_5;





 FUNC_0(VAR_1->rq_flags & VAR_0);

 FUNC_4(&VAR_4->requeue_lock, VAR_5);
 if (VAR_2) {
  VAR_1->rq_flags |= VAR_0;
  FUNC_2(&VAR_1->queuelist, &VAR_4->requeue_list);
 } else {
  FUNC_3(&VAR_1->queuelist, &VAR_4->requeue_list);
 }
 FUNC_5(&VAR_4->requeue_lock, VAR_5);

 if (VAR_3)
  FUNC_1(VAR_4);
}
