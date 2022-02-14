
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {scalar_t__ enable_state; scalar_t__ wb_normal; int cb; } ;
struct rq_qos {int dummy; } ;
struct request_queue {int dummy; } ;


 struct rq_wb* FUNC_0 (struct rq_qos*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 struct rq_qos* FUNC_2 (struct request_queue*) ;

void FUNC_3(struct request_queue *VAR_1)
{
 struct rq_qos *VAR_2 = FUNC_2(VAR_1);
 struct rq_wb *VAR_3;
 if (!VAR_2)
  return;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->enable_state == VAR_0) {
  FUNC_1(VAR_3->cb);
  VAR_3->wb_normal = 0;
 }
}
