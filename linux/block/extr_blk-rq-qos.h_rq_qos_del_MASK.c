
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_qos {struct rq_qos* next; } ;
struct request_queue {struct rq_qos* rq_qos; } ;


 int FUNC_0 (struct rq_qos*) ;

__attribute__((used)) static inline void FUNC_1(struct request_queue *VAR_0, struct rq_qos *VAR_1)
{
 struct rq_qos **VAR_2;

 for (VAR_2 = &VAR_0->rq_qos; *VAR_2; VAR_2 = &(*VAR_2)->next) {
  if (*VAR_2 == VAR_1) {
   *VAR_2 = VAR_1->next;
   break;
  }
 }

 FUNC_0(VAR_1);
}
