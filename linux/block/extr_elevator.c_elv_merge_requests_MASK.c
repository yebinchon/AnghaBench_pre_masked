
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct request* last_merge; struct elevator_queue* elevator; } ;
struct request {int dummy; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct TYPE_3__ {int (* requests_merged ) (struct request_queue*,struct request*,struct request*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct request_queue*,struct request*,struct request*) ;

void FUNC_2(struct request_queue *VAR_0, struct request *VAR_1,
        struct request *VAR_2)
{
 struct elevator_queue *VAR_3 = VAR_0->elevator;

 if (VAR_3->type->ops.requests_merged)
  VAR_3->type->ops.requests_merged(VAR_0, VAR_1, VAR_2);

 FUNC_0(VAR_0, VAR_1);
 VAR_0->last_merge = VAR_1;
}
