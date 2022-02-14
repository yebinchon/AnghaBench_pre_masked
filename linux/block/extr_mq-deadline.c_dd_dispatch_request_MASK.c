
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct deadline_data {int lock; } ;
struct blk_mq_hw_ctx {TYPE_2__* queue; } ;
struct TYPE_4__ {TYPE_1__* elevator; } ;
struct TYPE_3__ {struct deadline_data* elevator_data; } ;


 struct request* FUNC_0 (struct deadline_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct request *FUNC_3(struct blk_mq_hw_ctx *VAR_0)
{
 struct deadline_data *VAR_1 = VAR_0->queue->elevator->elevator_data;
 struct request *VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
