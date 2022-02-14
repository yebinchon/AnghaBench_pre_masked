
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blk_mq_hw_ctx {TYPE_2__* queue; } ;
struct bfq_data {int dispatch; } ;
struct TYPE_4__ {TYPE_1__* elevator; } ;
struct TYPE_3__ {struct bfq_data* elevator_data; } ;


 scalar_t__ FUNC_0 (struct bfq_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct blk_mq_hw_ctx *VAR_0)
{
 struct bfq_data *VAR_1 = VAR_0->queue->elevator->elevator_data;





 return !FUNC_1(&VAR_1->dispatch) ||
  FUNC_0(VAR_1) > 0;
}
