
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rr_si {struct rr_queue* head; struct rr_queue* tail; } ;
struct rr_queue {int status; struct rr_queue* qnext; int quantum; int credit; } ;



__attribute__((used)) static inline void
FUNC_0(struct rr_queue *VAR_0, struct rr_si *VAR_1)
{
 VAR_0->status = 1;
 VAR_0->credit = VAR_0->quantum;


 if (VAR_1->head == ((void*)0))
  VAR_1->head = VAR_0;
 else
  VAR_1->tail->qnext = VAR_0;
 VAR_1->tail = VAR_0;
 VAR_0->qnext = VAR_1->head;
}
