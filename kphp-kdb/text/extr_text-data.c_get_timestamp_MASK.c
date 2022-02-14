
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int history_ts; } ;
typedef TYPE_1__ user_t ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 () ;

int FUNC_4 (int VAR_0, int VAR_1) {
  user_t *VAR_2;

  if (FUNC_0 (VAR_0) < 0) {
    return -1;
  }

  if (VAR_1) {
    VAR_2 = FUNC_2 (VAR_0);
    if (!VAR_2->history_ts) {
      VAR_2->history_ts = FUNC_3 ();
    }
  } else {
    VAR_2 = FUNC_1 (VAR_0);
    if (!VAR_2 || !VAR_2->history_ts) {
      return 0;
    }
  }

  return VAR_2->history_ts;
}
