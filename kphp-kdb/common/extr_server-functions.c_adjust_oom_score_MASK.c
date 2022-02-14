
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int,char*,int) ;

int FUNC_7 (int VAR_2) {
  static char VAR_3[64], VAR_4[16];
  FUNC_0 (FUNC_5 (VAR_3, "/proc/%d/oom_score_adj", FUNC_2()) < 64);
  int VAR_5 = FUNC_5 (VAR_4, "%d", VAR_2);
  FUNC_0 (VAR_5 <= 15);
  int VAR_6 = FUNC_4 (VAR_3, VAR_1 | VAR_0);
  if (VAR_6 < 0) {
    FUNC_3 ("cannot write to %s : %m\n", VAR_3);
    return -1;
  }
  int VAR_7 = FUNC_6 (VAR_6, VAR_4, VAR_5);
  if (VAR_7 < 0) {
    FUNC_3 ("cannot write to %s : %m\n", VAR_3);
    FUNC_1 (VAR_6);
    return -1;
  }
  FUNC_1 (VAR_6);
  return (VAR_7 == VAR_5);
}
