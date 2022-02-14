
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_qos {TYPE_1__* ops; struct rq_qos* next; } ;
struct request_queue {struct rq_qos* rq_qos; } ;
struct TYPE_2__ {int (* exit ) (struct rq_qos*) ;} ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct rq_qos*) ;

void FUNC_2(struct request_queue *VAR_0)
{
 FUNC_0(VAR_0);

 while (VAR_0->rq_qos) {
  struct rq_qos *VAR_1 = VAR_0->rq_qos;
  VAR_0->rq_qos = VAR_1->next;
  VAR_1->ops->exit(VAR_1);
 }
}
