
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct kyber_queue_data {int dummy; } ;
struct kyber_hctx_data {scalar_t__ batching; size_t cur_domain; int lock; } ;
struct blk_mq_hw_ctx {struct kyber_hctx_data* sched_data; TYPE_2__* queue; } ;
struct TYPE_4__ {TYPE_1__* elevator; } ;
struct TYPE_3__ {struct kyber_queue_data* elevator_data; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 struct request* FUNC_0 (struct kyber_queue_data*,struct kyber_hctx_data*,struct blk_mq_hw_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct request *FUNC_3(struct blk_mq_hw_ctx *VAR_2)
{
 struct kyber_queue_data *VAR_3 = VAR_2->queue->elevator->elevator_data;
 struct kyber_hctx_data *VAR_4 = VAR_2->sched_data;
 struct request *VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4->lock);





 if (VAR_4->batching < VAR_1[VAR_4->cur_domain]) {
  VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);
  if (VAR_5)
   goto out;
 }
 VAR_4->batching = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4->cur_domain == VAR_0 - 1)
   VAR_4->cur_domain = 0;
  else
   VAR_4->cur_domain++;

  VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);
  if (VAR_5)
   goto out;
 }

 VAR_5 = ((void*)0);
out:
 FUNC_2(&VAR_4->lock);
 return VAR_5;
}
