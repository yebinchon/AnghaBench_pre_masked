
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rr_si {struct rr_queue* tail; struct rr_queue* head; } ;
struct rr_queue {int status; struct rr_queue* qnext; } ;


 int FUNC_0 (struct rr_si*) ;

__attribute__((used)) static inline void
FUNC_1(struct rr_queue *VAR_0, struct rr_si *VAR_1)
{
 struct rr_queue *VAR_2;

 if (VAR_0->status != 1)
  return;
 if (VAR_0 == VAR_1->head) {
  FUNC_0(VAR_1);
  return;
 }

 for (VAR_2 = VAR_1->head; VAR_2; VAR_2 = VAR_2->qnext) {
  if (VAR_2->qnext != VAR_0)
   continue;
  VAR_2->qnext = VAR_0->qnext;
  if (VAR_0 == VAR_1->tail)
   VAR_1->tail = VAR_2;
  VAR_0->status = 0;
  break;
 }
}
