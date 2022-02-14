
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct request {int dummy; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct TYPE_3__ {struct request* (* next_request ) (struct request_queue*,struct request*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 struct request* FUNC_0 (struct request_queue*,struct request*) ;

struct request *FUNC_1(struct request_queue *VAR_0, struct request *VAR_1)
{
 struct elevator_queue *VAR_2 = VAR_0->elevator;

 if (VAR_2->type->ops.next_request)
  return VAR_2->type->ops.next_request(VAR_0, VAR_1);

 return ((void*)0);
}
