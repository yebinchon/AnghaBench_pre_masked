
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_id; int text; } ;
typedef TYPE_1__ entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*,int ) ;
 int VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 char* VAR_5 ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 () ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;

int FUNC_11 (int VAR_11, char *VAR_12[]) {
  int VAR_13;
  entry_t *VAR_14;
  VAR_5 = VAR_12[0];
  while ((VAR_13 = FUNC_4 (VAR_11, VAR_12, "hv")) != -1) {
    switch (VAR_13) {
    case 'v':
      VAR_9 = 1;
      break;
    case 'h':
      FUNC_10();
      return 2;
    }
  }
  if (VAR_11 <= VAR_4) {
    FUNC_10();
    return 2;
  }

  FUNC_5 ();

  VAR_6[2] = VAR_10[2] = VAR_1[2];

  while (VAR_4 < VAR_11) {
    VAR_3[0] = FUNC_7 (VAR_12[VAR_4], VAR_2);
    if (VAR_3[0] < 0) {
      FUNC_3 (VAR_7, "%s: cannot open() %s: %m\n", VAR_5, VAR_12[VAR_4]);
      VAR_4++;
      continue;
    }
    FUNC_0 (VAR_3[0] >= 0);
    VAR_6[0] = VAR_10[0] = VAR_1[0] + VAR_0;

    while ((VAR_14 = FUNC_6(0)) != 0) {
      VAR_8++;
      FUNC_9 (VAR_14->text, VAR_14->user_id);
    }

    FUNC_1 (VAR_3[0]);
    VAR_4++;
  }

  FUNC_2();

  if (VAR_9) {
    FUNC_8();
  }

  return 0;
}
