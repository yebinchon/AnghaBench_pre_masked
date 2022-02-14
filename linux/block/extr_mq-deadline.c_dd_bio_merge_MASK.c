
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct deadline_data {int lock; } ;
struct blk_mq_hw_ctx {struct request_queue* queue; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct deadline_data* elevator_data; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request_queue*,struct bio*,unsigned int,struct request**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct blk_mq_hw_ctx *VAR_0, struct bio *VAR_1,
  unsigned int VAR_2)
{
 struct request_queue *VAR_3 = VAR_0->queue;
 struct deadline_data *VAR_4 = VAR_3->elevator->elevator_data;
 struct request *VAR_5 = ((void*)0);
 bool VAR_6;

 FUNC_2(&VAR_4->lock);
 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_2, &VAR_5);
 FUNC_3(&VAR_4->lock);

 if (VAR_5)
  FUNC_0(VAR_5);

 return VAR_6;
}
