
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_qos {int dummy; } ;
struct request_queue {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;
 scalar_t__ FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 struct rq_qos* FUNC_4 (struct request_queue*) ;

void FUNC_5(struct request_queue *VAR_1)
{
 struct rq_qos *VAR_2 = FUNC_4(VAR_1);

 if (VAR_2)
  return;


 if (!FUNC_1(VAR_1))
  return;

 if (FUNC_2(VAR_1) && FUNC_0(VAR_0))
  FUNC_3(VAR_1);
}
