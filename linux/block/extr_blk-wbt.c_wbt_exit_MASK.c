
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {int cb; } ;
struct rq_qos {struct request_queue* q; } ;
struct request_queue {int dummy; } ;


 struct rq_wb* FUNC_0 (struct rq_qos*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*,int ) ;
 int FUNC_3 (struct rq_wb*) ;

__attribute__((used)) static void FUNC_4(struct rq_qos *VAR_0)
{
 struct rq_wb *VAR_1 = FUNC_0(VAR_0);
 struct request_queue *VAR_2 = VAR_0->q;

 FUNC_2(VAR_2, VAR_1->cb);
 FUNC_1(VAR_1->cb);
 FUNC_3(VAR_1);
}
