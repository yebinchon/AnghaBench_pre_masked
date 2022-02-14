
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_qos {TYPE_1__* ops; struct rq_qos* next; } ;
struct request_queue {struct rq_qos* rq_qos; } ;
struct TYPE_2__ {scalar_t__ debugfs_attrs; } ;


 int FUNC_0 (struct rq_qos*) ;

__attribute__((used)) static inline void FUNC_1(struct request_queue *VAR_0, struct rq_qos *VAR_1)
{
 VAR_1->next = VAR_0->rq_qos;
 VAR_0->rq_qos = VAR_1;

 if (VAR_1->ops->debugfs_attrs)
  FUNC_0(VAR_1);
}
