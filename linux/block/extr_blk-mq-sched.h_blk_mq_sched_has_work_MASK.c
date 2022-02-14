
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct elevator_queue {TYPE_3__* type; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
struct TYPE_5__ {int (* has_work ) (struct blk_mq_hw_ctx*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {struct elevator_queue* elevator; } ;


 int FUNC_0 (struct blk_mq_hw_ctx*) ;

__attribute__((used)) static inline bool FUNC_1(struct blk_mq_hw_ctx *VAR_0)
{
 struct elevator_queue *VAR_1 = VAR_0->queue->elevator;

 if (VAR_1 && VAR_1->type->ops.has_work)
  return VAR_1->type->ops.has_work(VAR_0);

 return 0;
}
