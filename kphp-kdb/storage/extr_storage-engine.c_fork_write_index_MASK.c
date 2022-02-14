
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volume_t ;


 int ** VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int,char*,int) ;
 int VAR_5 ;

void FUNC_5 (void) {
  if (VAR_2) {
    FUNC_4 (1, "process with pid %d already generates index, skipping\n", VAR_2);
    return;
  }
  if (VAR_1 > 0) {
    FUNC_4 (1, "active_gathers = %d, skipping(waiting) generating index\n", VAR_1);
    return;
  }

  int VAR_6 = FUNC_1 ();
  if (VAR_6 < 0) {
    FUNC_2 ("fork: %m\n");
  } else if (!VAR_6) {
    int VAR_7, VAR_8 = 0;

    VAR_4 = 1;
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
      volume_t *VAR_9 = VAR_0[VAR_7];
      if (FUNC_3 (VAR_9)) {
        VAR_8 |= 1;
      }
    }
    FUNC_0 (VAR_8);
  } else {
    FUNC_4 (1, "created child process pid = %d\n", VAR_6);
    VAR_2 = VAR_6;
  }
  VAR_3 = 0;
}
