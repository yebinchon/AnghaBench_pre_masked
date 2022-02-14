
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* ev_last; TYPE_2__* ev_first; } ;
typedef TYPE_1__ queue ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ event ;


 int FUNC_0 (int ) ;

inline void FUNC_1 (queue *VAR_0, event *VAR_1) {
  FUNC_0 (VAR_1->next == ((void*)0));
  if (VAR_0->ev_first == ((void*)0)) {
    VAR_0->ev_first = VAR_0->ev_last = VAR_1;
  } else {
    VAR_0->ev_last->next = VAR_1;
    VAR_0->ev_last = VAR_1;
  }
}
