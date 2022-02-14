
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; int locked_until; struct TYPE_6__* unlock_next; } ;
typedef TYPE_1__ transaction_t ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_5 (int VAR_5) {
  transaction_t *VAR_6 = FUNC_3 (VAR_5);
  if (!VAR_6) {
    return 0;
  }
  int VAR_7 = FUNC_1 (VAR_6);
  if (VAR_7 < 0) {
    return VAR_7;
  }
  if (VAR_6->status != VAR_3) {
    return 0;
  }
  if (!VAR_6->locked_until) {
    FUNC_0 (!VAR_6->unlock_next);
    VAR_6->unlock_next = VAR_1[(VAR_2 + 15) & (VAR_0-1)];
    VAR_1[(VAR_2 + 15) & (VAR_0-1)] = VAR_6;
  }
  if (VAR_6->locked_until < VAR_2 + 15) {
    VAR_6->locked_until = VAR_2 + 15;
  }

  FUNC_0 (FUNC_4 (VAR_6) == 1);
  VAR_6->status = VAR_4;

  FUNC_2 (0);

  return 2;
}
