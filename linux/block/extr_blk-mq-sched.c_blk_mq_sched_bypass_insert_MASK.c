
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_flags; int queuelist; } ;
struct blk_mq_hw_ctx {int lock; int dispatch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct blk_mq_hw_ctx *VAR_2,
           bool VAR_3,
           struct request *VAR_4)
{

 if (VAR_4->rq_flags & VAR_0) {
  FUNC_1(&VAR_2->lock);
  FUNC_0(&VAR_4->queuelist, &VAR_2->dispatch);
  FUNC_2(&VAR_2->lock);
  return 1;
 }

 if (VAR_3)
  VAR_4->rq_flags |= VAR_1;

 return 0;
}
