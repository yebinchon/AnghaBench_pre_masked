
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lev_support_delete_answer {int user_id; } ;
typedef TYPE_5__* answers_list_ptr ;
typedef int answers_list ;
struct TYPE_13__ {int user_id; struct TYPE_13__* E; TYPE_4__* next; TYPE_2__* prev; } ;
struct TYPE_12__ {TYPE_3__* E; TYPE_2__* prev; } ;
struct TYPE_11__ {int user_id; } ;
struct TYPE_10__ {TYPE_1__* E; TYPE_4__* next; } ;
struct TYPE_9__ {int user_id; } ;


 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (TYPE_5__*) ;
 void** FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5 (struct lev_support_delete_answer *VAR_3) {
  if (VAR_2 > 1) {
    FUNC_1 (VAR_0, "Deleting answer for question %d\n", VAR_3->user_id);
  }

  void **VAR_4 = FUNC_3 (&VAR_1, VAR_3->user_id);
  if (VAR_4 != ((void*)0)) {
    answers_list_ptr VAR_5 = *VAR_4;
    VAR_5->next->prev = VAR_5->prev;
    VAR_5->prev->next = VAR_5->next;
    FUNC_1 (VAR_0, "%d %d %d\n", VAR_5->prev->E->user_id, VAR_5->E->user_id, VAR_5->next->E->user_id);
    FUNC_4 (VAR_5, -1);
    FUNC_0 (VAR_5->E, FUNC_2 (VAR_5->E));
    FUNC_0 (VAR_5, sizeof (answers_list));
  }

  return 1;
}
