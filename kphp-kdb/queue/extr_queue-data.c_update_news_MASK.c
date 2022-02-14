
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int keys_cnt; int name; } ;
typedef TYPE_1__ queue ;
struct TYPE_8__ {int timeout; int * prev_time; int next_time; int * prev_st; int st; TYPE_1__* q; scalar_t__ lock; } ;
typedef TYPE_2__ qkey ;


 int FUNC_0 (char*,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,int) ;

void FUNC_3 (queue *VAR_1) {
  qkey *VAR_2 = FUNC_2 (VAR_1->name, 2);

  FUNC_0 ("update news [%s] mk = %p\n", VAR_1->name, VAR_2);

  if (VAR_2->q == ((void*)0)) {
    VAR_2->q = VAR_1;
    VAR_2->lock = 0;
    VAR_2->q->keys_cnt++;
    VAR_2->st = *(VAR_2->prev_st = ((void*)0));




    VAR_2->timeout = 20 * (VAR_0 % 2 + 1);

    VAR_2->next_time = *(VAR_2->prev_time = ((void*)0));
  }
  FUNC_1 (VAR_2);
}
