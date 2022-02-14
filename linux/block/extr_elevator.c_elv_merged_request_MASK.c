
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct request* last_merge; struct elevator_queue* elevator; } ;
struct request {int dummy; } ;
struct elevator_queue {TYPE_2__* type; } ;
typedef enum elv_merge { ____Placeholder_elv_merge } elv_merge ;
struct TYPE_3__ {int (* request_merged ) (struct request_queue*,struct request*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct request_queue*,struct request*,int) ;

void FUNC_2(struct request_queue *VAR_1, struct request *VAR_2,
  enum elv_merge VAR_3)
{
 struct elevator_queue *VAR_4 = VAR_1->elevator;

 if (VAR_4->type->ops.request_merged)
  VAR_4->type->ops.request_merged(VAR_1, VAR_2, VAR_3);

 if (VAR_3 == VAR_0)
  FUNC_0(VAR_1, VAR_2);

 VAR_1->last_merge = VAR_2;
}
