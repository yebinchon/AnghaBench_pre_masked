
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rr_si {TYPE_1__* head; TYPE_1__* tail; } ;
struct TYPE_2__ {struct TYPE_2__* qnext; scalar_t__ status; } ;



__attribute__((used)) static inline void
FUNC_0(struct rr_si *VAR_0)
{
 if (VAR_0->head == ((void*)0))
  return;
 VAR_0->head->status = 0;

 if (VAR_0->head == VAR_0->tail) {
  VAR_0->head = VAR_0->tail = ((void*)0);
  return;
 }

 VAR_0->head = VAR_0->head->qnext;
 VAR_0->tail->qnext = VAR_0->head;
}
