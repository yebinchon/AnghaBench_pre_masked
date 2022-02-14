
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int queue_flags; TYPE_2__* mq_ops; } ;
struct request {int ipi_list; TYPE_1__* mq_ctx; struct request_queue* q; } ;
struct list_head {int * next; } ;
struct TYPE_4__ {int complete; } ;
struct TYPE_3__ {int cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int,struct request*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct list_head* FUNC_9 (int *) ;

void FUNC_10(struct request *VAR_4)
{
 struct request_queue *VAR_5 = VAR_4->q;
 int VAR_6, VAR_7 = VAR_4->mq_ctx->cpu;
 unsigned long VAR_8;
 bool VAR_9 = 0;

 FUNC_0(!VAR_5->mq_ops->complete);

 FUNC_4(VAR_8);
 VAR_6 = FUNC_7();




 if (FUNC_8(VAR_1, &VAR_5->queue_flags) && VAR_7 != -1) {
  if (!FUNC_8(VAR_2, &VAR_5->queue_flags))
   VAR_9 = FUNC_1(VAR_6, VAR_7);
 } else
  VAR_7 = VAR_6;
 if (VAR_7 == VAR_6 || VAR_9) {
  struct list_head *VAR_10;
do_local:
  VAR_10 = FUNC_9(&VAR_3);
  FUNC_2(&VAR_4->ipi_list, VAR_10);







  if (VAR_10->next == &VAR_4->ipi_list)
   FUNC_6(VAR_0);
 } else if (FUNC_5(VAR_7, VAR_4))
  goto do_local;

 FUNC_3(VAR_8);
}
