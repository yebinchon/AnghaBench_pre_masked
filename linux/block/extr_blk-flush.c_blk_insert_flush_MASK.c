
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {unsigned long queue_flags; } ;
struct TYPE_2__ {int saved_end_io; int list; } ;
struct request {scalar_t__ bio; scalar_t__ biotail; int end_io; TYPE_1__ flush; int rq_flags; int cmd_flags; int mq_ctx; struct request_queue* q; } ;
struct blk_flush_queue {int mq_flush_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct request*,struct blk_flush_queue*,unsigned int,int ) ;
 unsigned int FUNC_3 (unsigned long,struct request*) ;
 struct blk_flush_queue* FUNC_4 (struct request_queue*,int ) ;
 int FUNC_5 (struct request*,int ) ;
 int FUNC_6 (struct request*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct request *VAR_10)
{
 struct request_queue *VAR_11 = VAR_10->q;
 unsigned long VAR_12 = VAR_11->queue_flags;
 unsigned int VAR_13 = FUNC_3(VAR_12, VAR_10);
 struct blk_flush_queue *VAR_14 = FUNC_4(VAR_11, VAR_10->mq_ctx);





 VAR_10->cmd_flags &= ~VAR_6;
 if (!(VAR_12 & (1UL << VAR_0)))
  VAR_10->cmd_flags &= ~VAR_5;






 VAR_10->cmd_flags |= VAR_7;







 if (!VAR_13) {
  FUNC_5(VAR_10, 0);
  return;
 }

 FUNC_0(VAR_10->bio != VAR_10->biotail);






 if ((VAR_13 & VAR_2) &&
     !(VAR_13 & (VAR_4 | VAR_3))) {
  FUNC_6(VAR_10, 0);
  return;
 }





 FUNC_7(&VAR_10->flush, 0, sizeof(VAR_10->flush));
 FUNC_1(&VAR_10->flush.list);
 VAR_10->rq_flags |= VAR_8;
 VAR_10->flush.saved_end_io = VAR_10->end_io;

 VAR_10->end_io = VAR_9;

 FUNC_8(&VAR_14->mq_flush_lock);
 FUNC_2(VAR_10, VAR_14, VAR_1 & ~VAR_13, 0);
 FUNC_9(&VAR_14->mq_flush_lock);
}
