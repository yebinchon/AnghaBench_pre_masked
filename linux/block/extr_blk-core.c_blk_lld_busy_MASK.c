
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* mq_ops; } ;
struct TYPE_2__ {int (* busy ) (struct request_queue*) ;} ;


 scalar_t__ FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;

int FUNC_2(struct request_queue *VAR_0)
{
 if (FUNC_0(VAR_0) && VAR_0->mq_ops->busy)
  return VAR_0->mq_ops->busy(VAR_0);

 return 0;
}
