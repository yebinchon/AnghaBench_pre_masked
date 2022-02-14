
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_id; int last_visited; scalar_t__ online_prev; scalar_t__ online_next; } ;
typedef TYPE_1__ user_t ;
typedef int olist_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;

int FUNC_8 (user_t *VAR_4) {
  if (!VAR_4) {
    return 0;
  }

  if (VAR_3 > 2) {
    FUNC_0 (VAR_2, "setting last_visited for user %d to %d\n", VAR_4->user_id, VAR_1);
  }

  FUNC_2 ();

  if (VAR_4->online_next) {
    FUNC_6 (FUNC_7 (VAR_4));
    if (VAR_3 > 2) {
      FUNC_0 (VAR_2, "last_visited was %d, convert was %d\n", VAR_4->last_visited, FUNC_3 (VAR_4->last_visited));
    }
    FUNC_4 (FUNC_3 (VAR_4->last_visited), -1);
  }

  if (FUNC_1 (VAR_1)) {
    int VAR_5 = FUNC_3 (VAR_1);
    FUNC_5 ((olist_t *)&VAR_0[VAR_5], FUNC_7 (VAR_4));
    if (VAR_3 > 2) {
      FUNC_0 (VAR_2, "new convert is %d\n", VAR_5);
    }
    FUNC_4 (VAR_5, +1);
  } else {
    VAR_4->online_next = VAR_4->online_prev = 0;
  }

  VAR_4->last_visited = VAR_1;

  return 1;
}
