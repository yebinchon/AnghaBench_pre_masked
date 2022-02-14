
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* mq_ops; } ;
struct request {struct request_queue* q; } ;
struct TYPE_2__ {int (* complete ) (struct request*) ;} ;


 int FUNC_0 (struct request*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct request *VAR_1 = VAR_0;
 struct request_queue *VAR_2 = VAR_1->q;

 VAR_2->mq_ops->complete(VAR_1);
}
