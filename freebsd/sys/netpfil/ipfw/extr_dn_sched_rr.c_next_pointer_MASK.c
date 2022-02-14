
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rr_si {TYPE_2__* tail; TYPE_1__* head; } ;
struct TYPE_4__ {struct TYPE_4__* qnext; } ;
struct TYPE_3__ {struct TYPE_3__* qnext; } ;



__attribute__((used)) static inline void
FUNC_0(struct rr_si *VAR_0)
{
 if (VAR_0->head == ((void*)0))
  return;

 VAR_0->head = VAR_0->head->qnext;
 VAR_0->tail = VAR_0->tail->qnext;
}
