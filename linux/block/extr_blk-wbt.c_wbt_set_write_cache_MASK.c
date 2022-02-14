
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_qos {int dummy; } ;
struct request_queue {int dummy; } ;
struct TYPE_2__ {int wc; } ;


 TYPE_1__* FUNC_0 (struct rq_qos*) ;
 struct rq_qos* FUNC_1 (struct request_queue*) ;

void FUNC_2(struct request_queue *VAR_0, bool VAR_1)
{
 struct rq_qos *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  FUNC_0(VAR_2)->wc = VAR_1;
}
