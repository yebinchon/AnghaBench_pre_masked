
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wakeup_time; int wakeup; scalar_t__ h_idx; } ;
struct conn_query {TYPE_1__ timer; TYPE_2__* requester; int req_generation; struct conn_query* next; struct conn_query* prev; } ;
struct TYPE_4__ {int pending_queries; int generation; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2 (struct conn_query *VAR_1, struct conn_query *VAR_2) {
  VAR_1->prev = VAR_2;
  VAR_1->next = VAR_2->next;
  VAR_2->next->prev = VAR_1;
  VAR_2->next = VAR_1;
  FUNC_0 (VAR_1->requester);
  VAR_1->req_generation = VAR_1->requester->generation;
  VAR_1->requester->pending_queries++;
  VAR_1->timer.h_idx = 0;
  VAR_1->timer.wakeup = VAR_0;
  if (VAR_1->timer.wakeup_time > 0) {
    FUNC_1 (&VAR_1->timer);
  }
  return 0;
}
