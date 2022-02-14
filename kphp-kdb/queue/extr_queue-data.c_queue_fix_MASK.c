
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ref_cnt; scalar_t__ keys_cnt; scalar_t__ subscr_cnt; int * ev_last; TYPE_2__* ev_first; } ;
typedef TYPE_1__ queue ;
struct TYPE_8__ {scalar_t__ ref_cnt; struct TYPE_8__* next; } ;
typedef TYPE_2__ event ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

void FUNC_4 (queue *VAR_2) {
  if (VAR_0 > 1) {
    FUNC_2 (VAR_1, "in queue fix %p %d\n", VAR_2, VAR_2->ref_cnt);
  }
  if (VAR_2->ref_cnt == 0) {
    event *VAR_3 = VAR_2->ev_first;
    while (VAR_3 != ((void*)0) && VAR_3->ref_cnt == 0) {
      VAR_2->ev_first = VAR_3->next;

      FUNC_1 (VAR_3);

      VAR_3 = VAR_2->ev_first;
    }
    if (VAR_3 == ((void*)0)) {
      VAR_2->ev_last = ((void*)0);
    }
  }


  if ( VAR_2->keys_cnt == 0) {
    FUNC_3 (VAR_2);
  }

  if ( VAR_2->keys_cnt == 0 && VAR_2->subscr_cnt == 0) {
    FUNC_0 (VAR_2);
  }
  if (VAR_0 > 1) {
    FUNC_2 (VAR_1, "exit queue fix\n");
  }
}
