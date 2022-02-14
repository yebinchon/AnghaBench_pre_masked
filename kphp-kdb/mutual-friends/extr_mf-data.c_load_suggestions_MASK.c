
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sugg; } ;
typedef TYPE_1__ user ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int* VAR_2 ;
 long long* VAR_3 ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 int FUNC_4 (int,...) ;
 int FUNC_5 (int *,int,int) ;

void FUNC_6 (char *VAR_4) {
  FUNC_0 (FUNC_3 (3, VAR_4, -1) >= 0);

  static int VAR_5[30000];

  int VAR_6, VAR_7;
  user *VAR_8;

  long long VAR_9;
  FUNC_0 (FUNC_4 (VAR_2[3], &VAR_9, sizeof (long long)) == sizeof (long long));
  FUNC_0 (VAR_9 == VAR_3[3]);

  while (FUNC_4 (VAR_2[3], &VAR_6, sizeof (int)) == sizeof (int)) {
    FUNC_0 (FUNC_4 (VAR_2[3], &VAR_7, sizeof (int)) == sizeof (int));
    FUNC_0 (0 <= VAR_7 && VAR_7 * 2 < 30000);
    int VAR_10 = sizeof (int) * 2 * VAR_7;
    FUNC_0 (FUNC_4 (VAR_2[3], VAR_5, VAR_10) == VAR_10);

    VAR_8 = FUNC_2 (VAR_6);
    if (VAR_8 == ((void*)0)) {
      continue;
    }

    if (VAR_7 > VAR_1) {
      VAR_7 = VAR_1;
    }

    int VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
      FUNC_5 (&VAR_8->sugg, VAR_5[2 * VAR_11 + 1], VAR_5[2 * VAR_11]);
    }
  }

  FUNC_0 (FUNC_1 (VAR_2[3]) >= 0);
  VAR_2[3] = -1;

}
