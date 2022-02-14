
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ poll_nsec; } ;
struct request {int dummy; } ;
struct blk_mq_hw_ctx {int sched_tags; int tags; } ;
typedef int blk_qc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct request_queue*,struct blk_mq_hw_ctx*,struct request*) ;
 struct request* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct request_queue *VAR_1,
          struct blk_mq_hw_ctx *VAR_2, blk_qc_t VAR_3)
{
 struct request *VAR_4;

 if (VAR_1->poll_nsec == VAR_0)
  return 0;

 if (!FUNC_2(VAR_3))
  VAR_4 = FUNC_1(VAR_2->tags, FUNC_3(VAR_3));
 else {
  VAR_4 = FUNC_1(VAR_2->sched_tags, FUNC_3(VAR_3));






  if (!VAR_4)
   return 0;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_4);
}
