
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 () ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int * VAR_5 ;
 int FUNC_10 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_11 (void) {
  if (VAR_6 > 0) {
    while (FUNC_8() != -1) {
    }

    if (!VAR_8 && !VAR_2) {
      int VAR_9;
      for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++) {
        user *VAR_10 = &VAR_5[VAR_9];
        FUNC_9 (VAR_10);
      }
    }
    FUNC_1 (VAR_5, sizeof (user) * VAR_4);

    FUNC_6 (&VAR_7);
    FUNC_7 (&VAR_0);
    FUNC_4 (&VAR_1);

    FUNC_5();

    FUNC_10();

    FUNC_3 (VAR_3, "Memory left: %ld\n", FUNC_2());
    FUNC_0 (FUNC_2() == 0);
  }
}
