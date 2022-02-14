
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct blk_mq_hw_ctx {TYPE_2__* queue; } ;
struct bfq_queue {int dummy; } ;
struct bfq_data {int lock; struct bfq_queue* in_service_queue; } ;
struct TYPE_4__ {TYPE_1__* elevator; } ;
struct TYPE_3__ {struct bfq_data* elevator_data; } ;


 struct request* FUNC_0 (struct blk_mq_hw_ctx*) ;
 scalar_t__ FUNC_1 (struct bfq_queue*) ;
 int FUNC_2 (TYPE_2__*,struct request*,struct bfq_queue*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct request *FUNC_5(struct blk_mq_hw_ctx *VAR_0)
{
 struct bfq_data *VAR_1 = VAR_0->queue->elevator->elevator_data;
 struct request *VAR_2;
 struct bfq_queue *VAR_3;
 bool VAR_4, VAR_5;

 FUNC_3(&VAR_1->lock);

 VAR_3 = VAR_1->in_service_queue;
 VAR_4 = VAR_3 && FUNC_1(VAR_3);

 VAR_2 = FUNC_0(VAR_0);

 VAR_5 =
  VAR_4 && !FUNC_1(VAR_3);

 FUNC_4(&VAR_1->lock);

 FUNC_2(VAR_0->queue, VAR_2, VAR_3,
      VAR_5);

 return VAR_2;
}
