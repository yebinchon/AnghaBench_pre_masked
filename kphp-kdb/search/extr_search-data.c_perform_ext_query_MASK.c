
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int priority; scalar_t__ op; int cur; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long long FUNC_0 (TYPE_1__*,long long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ,int) ;
 int VAR_10 ;

int FUNC_9 (void) {
  long long VAR_11;

  if (VAR_10 > 1) {
    FUNC_3 (VAR_9, "performing extended query: root=%p\n", VAR_3);
    FUNC_2 (VAR_3);
    FUNC_3 (VAR_9, "\n");
  }

  FUNC_1 (VAR_3 && !VAR_4);
  FUNC_7 ();

  if (VAR_10 > 1) {
    FUNC_3 (VAR_9, "after killing duplicate words: root=%p\n", VAR_3);
    FUNC_2 (VAR_3);
    FUNC_3 (VAR_9, "\n");
  }

  VAR_8 = 0;
  if (FUNC_6 (VAR_3) < 0) {
    return 0;
  }

  VAR_11 = VAR_1;

  do {
    if (VAR_8) {
      VAR_3 = FUNC_4 (VAR_3);
      VAR_8 = 0;
      if (VAR_10 > 1) {
        FUNC_3 (VAR_9, "query after optimization: root=%p\n", VAR_3);
        FUNC_2 (VAR_3);
        FUNC_3 (VAR_9, "\n");
      }
    }

    if (VAR_3->op == VAR_7) {
      break;
    }

    VAR_11 = FUNC_0 (VAR_3, VAR_11 + 1);
    if (VAR_11 == VAR_0) {
      break;
    }
  } while (FUNC_8 (VAR_3->cur, VAR_3->priority > 10 ? 10 : VAR_3->priority));

  FUNC_5();

  return VAR_2 ? VAR_6 : VAR_5;

}
