
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int treap ;
struct TYPE_6__ {scalar_t__ keys_cnt; int * subs; } ;
typedef TYPE_1__ queue ;
typedef int ll ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int) ;
 TYPE_1__* FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

queue *FUNC_8 (ll VAR_1, int VAR_2) {

  queue *VAR_3;

  if (!FUNC_0 (VAR_1)) {
    VAR_3 = FUNC_5 (VAR_1);
    if (VAR_3 == ((void*)0)) {
      return ((void*)0);
    }
  } else {
    VAR_3 = FUNC_4 (FUNC_3 (VAR_1), VAR_2);
  }
  if (VAR_3 != ((void*)0)) {

    if (VAR_3->keys_cnt == 0 && !VAR_2) {
      return ((void*)0);
    }
    if (VAR_3->subs == ((void*)0)) {

      VAR_0 -= FUNC_1();
      VAR_3->subs = FUNC_2 (sizeof (treap));
      VAR_0 += FUNC_1();
      FUNC_6 (VAR_3->subs);
    }

    if (VAR_2) {
      FUNC_7 (VAR_3);
    }
  }

  return VAR_3;
}
