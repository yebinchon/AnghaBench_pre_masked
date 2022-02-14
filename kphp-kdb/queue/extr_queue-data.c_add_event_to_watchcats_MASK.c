
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,int ,int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

void FUNC_5 (long long *VAR_2, int VAR_3, char *VAR_4) {
  int VAR_5 = FUNC_4 (VAR_4), VAR_6;

  if (VAR_0 > 1) {
    FUNC_1 (VAR_1, "add %s to ", VAR_4);
  }
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    if (VAR_0 > 1) {
      FUNC_1 (VAR_1, " %lld", VAR_2[VAR_6]);
    }
    FUNC_0 (FUNC_2 (FUNC_3 (VAR_2[VAR_6]), 0), VAR_4, VAR_5, 0, 0, 0);
  }
  if (VAR_0 > 1) {
    FUNC_1 (VAR_1, "\n");
  }
}
