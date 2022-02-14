
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_qos {struct rq_qos* next; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* queue_depth_changed ) (struct rq_qos*) ;} ;


 int FUNC_0 (struct rq_qos*) ;

void FUNC_1(struct rq_qos *VAR_0)
{
 do {
  if (VAR_0->ops->queue_depth_changed)
   VAR_0->ops->queue_depth_changed(VAR_0);
  VAR_0 = VAR_0->next;
 } while (VAR_0);
}
