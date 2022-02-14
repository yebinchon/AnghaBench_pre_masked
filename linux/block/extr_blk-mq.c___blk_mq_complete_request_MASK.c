
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int nr_hw_queues; TYPE_1__* mq_ops; int queue_flags; } ;
struct TYPE_4__ {scalar_t__ flags; struct request* info; int func; } ;
struct request {int cmd_flags; TYPE_2__ csd; int state; struct request_queue* q; struct blk_mq_ctx* mq_ctx; } ;
struct blk_mq_ctx {int cpu; } ;
struct TYPE_3__ {int (* complete ) (struct request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct request*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int,TYPE_2__*) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (struct request*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct request *VAR_5)
{
 struct blk_mq_ctx *VAR_6 = VAR_5->mq_ctx;
 struct request_queue *VAR_7 = VAR_5->q;
 bool VAR_8 = 0;
 int VAR_9;

 FUNC_0(VAR_5->state, VAR_0);
 if (VAR_7->nr_hw_queues == 1) {
  FUNC_1(VAR_5);
  return;
 }





 if ((VAR_5->cmd_flags & VAR_3) ||
     !FUNC_9(VAR_1, &VAR_7->queue_flags)) {
  VAR_7->mq_ops->complete(VAR_5);
  return;
 }

 VAR_9 = FUNC_4();
 if (!FUNC_9(VAR_2, &VAR_7->queue_flags))
  VAR_8 = FUNC_3(VAR_9, VAR_6->cpu);

 if (VAR_9 != VAR_6->cpu && !VAR_8 && FUNC_2(VAR_6->cpu)) {
  VAR_5->csd.func = VAR_4;
  VAR_5->csd.info = VAR_5;
  VAR_5->csd.flags = 0;
  FUNC_6(VAR_6->cpu, &VAR_5->csd);
 } else {
  VAR_7->mq_ops->complete(VAR_5);
 }
 FUNC_5();
}
