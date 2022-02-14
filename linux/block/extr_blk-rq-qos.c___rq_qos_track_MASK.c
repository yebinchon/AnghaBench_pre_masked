
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_qos {struct rq_qos* next; TYPE_1__* ops; } ;
struct request {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int (* track ) (struct rq_qos*,struct request*,struct bio*) ;} ;


 int FUNC_0 (struct rq_qos*,struct request*,struct bio*) ;

void FUNC_1(struct rq_qos *VAR_0, struct request *VAR_1, struct bio *VAR_2)
{
 do {
  if (VAR_0->ops->track)
   VAR_0->ops->track(VAR_0, VAR_1, VAR_2);
  VAR_0 = VAR_0->next;
 } while (VAR_0);
}
