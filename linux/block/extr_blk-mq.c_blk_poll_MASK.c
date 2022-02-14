
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {TYPE_1__* mq_ops; struct blk_mq_hw_ctx** queue_hw_ctx; int queue_flags; } ;
struct blk_mq_hw_ctx {int poll_success; int poll_invoked; int poll_considered; } ;
typedef int blk_qc_t ;
struct TYPE_5__ {long state; scalar_t__ plug; } ;
struct TYPE_4__ {int (* poll ) (struct blk_mq_hw_ctx*) ;} ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (long) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct request_queue*,struct blk_mq_hw_ctx*,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (long,TYPE_2__*) ;
 int FUNC_8 (struct blk_mq_hw_ctx*) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct request_queue *VAR_3, blk_qc_t VAR_4, bool VAR_5)
{
 struct blk_mq_hw_ctx *VAR_6;
 long VAR_7;

 if (!FUNC_4(VAR_4) ||
     !FUNC_9(VAR_0, &VAR_3->queue_flags))
  return 0;

 if (VAR_2->plug)
  FUNC_1(VAR_2->plug, 0);

 VAR_6 = VAR_3->queue_hw_ctx[FUNC_3(VAR_4)];
 if (FUNC_2(VAR_3, VAR_6, VAR_4))
  return 1;

 VAR_6->poll_considered++;

 VAR_7 = VAR_2->state;
 do {
  int VAR_8;

  VAR_6->poll_invoked++;

  VAR_8 = VAR_3->mq_ops->poll(VAR_6);
  if (VAR_8 > 0) {
   VAR_6->poll_success++;
   FUNC_0(VAR_1);
   return VAR_8;
  }

  if (FUNC_7(VAR_7, VAR_2))
   FUNC_0(VAR_1);

  if (VAR_2->state == VAR_1)
   return 1;
  if (VAR_8 < 0 || !VAR_5)
   break;
  FUNC_5();
 } while (!FUNC_6());

 FUNC_0(VAR_1);
 return 0;
}
