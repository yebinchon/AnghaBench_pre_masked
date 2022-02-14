
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {unsigned int nr_hw_queues; TYPE_1__** queue_hw_ctx; } ;
struct request {int dummy; } ;
struct blk_mq_alloc_data {int flags; unsigned int cmd_flags; int ctx; TYPE_1__* hctx; } ;
typedef int blk_mq_req_flags_t ;
struct TYPE_2__ {int cpumask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct request* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct request_queue*,unsigned int) ;
 struct request* FUNC_3 (struct request_queue*,int *,struct blk_mq_alloc_data*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct request_queue*,int) ;
 int FUNC_6 (struct request_queue*) ;
 int VAR_5 ;
 unsigned int FUNC_7 (int ,int ) ;

struct request *FUNC_8(struct request_queue *VAR_6,
 unsigned int VAR_7, blk_mq_req_flags_t VAR_8, unsigned int VAR_9)
{
 struct blk_mq_alloc_data VAR_10 = { .flags = VAR_8, .cmd_flags = VAR_7 };
 struct request *VAR_11;
 unsigned int VAR_12;
 int VAR_13;







 if (FUNC_1(!(VAR_8 & VAR_0)))
  return FUNC_0(-VAR_1);

 if (VAR_9 >= VAR_6->nr_hw_queues)
  return FUNC_0(-VAR_2);

 VAR_13 = FUNC_5(VAR_6, VAR_8);
 if (VAR_13)
  return FUNC_0(VAR_13);





 VAR_10.hctx = VAR_6->queue_hw_ctx[VAR_9];
 if (!FUNC_4(VAR_10.hctx)) {
  FUNC_6(VAR_6);
  return FUNC_0(-VAR_4);
 }
 VAR_12 = FUNC_7(VAR_10.hctx->cpumask, VAR_5);
 VAR_10.ctx = FUNC_2(VAR_6, VAR_12);

 VAR_11 = FUNC_3(VAR_6, ((void*)0), &VAR_10);
 FUNC_6(VAR_6);

 if (!VAR_11)
  return FUNC_0(-VAR_3);

 return VAR_11;
}
