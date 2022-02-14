
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_2__ {unsigned int seq; int list; } ;
struct list_head {int dummy; } ;
struct request {unsigned int cmd_flags; TYPE_1__ flush; struct list_head queuelist; struct request_queue* q; } ;
struct blk_flush_queue {size_t flush_pending_idx; struct list_head flush_data_in_flight; int flush_pending_since; struct list_head* flush_queue; } ;
typedef int blk_status_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;




 unsigned int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*,int) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request_queue*,struct blk_flush_queue*,unsigned int) ;
 int FUNC_6 (struct request*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct list_head*) ;
 int FUNC_10 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_11(struct request *VAR_1,
       struct blk_flush_queue *VAR_2,
       unsigned int VAR_3, blk_status_t VAR_4)
{
 struct request_queue *VAR_5 = VAR_1->q;
 struct list_head *VAR_6 = &VAR_2->flush_queue[VAR_2->flush_pending_idx];
 unsigned int VAR_7;

 FUNC_1(VAR_1->flush.seq & VAR_3);
 VAR_1->flush.seq |= VAR_3;
 VAR_7 = VAR_1->cmd_flags;

 if (FUNC_7(!VAR_4))
  VAR_3 = FUNC_2(VAR_1);
 else
  VAR_3 = 130;

 switch (VAR_3) {
 case 128:
 case 129:

  if (FUNC_9(VAR_6))
   VAR_2->flush_pending_since = VAR_0;
  FUNC_10(&VAR_1->flush.list, VAR_6);
  break;

 case 131:
  FUNC_10(&VAR_1->flush.list, &VAR_2->flush_data_in_flight);
  FUNC_3(VAR_1, 1);
  break;

 case 130:






  FUNC_1(!FUNC_9(&VAR_1->queuelist));
  FUNC_8(&VAR_1->flush.list);
  FUNC_4(VAR_1);
  FUNC_6(VAR_1, VAR_4);
  break;

 default:
  FUNC_0();
 }

 FUNC_5(VAR_5, VAR_2, VAR_7);
}
