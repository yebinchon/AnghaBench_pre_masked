
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

void FUNC_2 (int *VAR_0) {
  int VAR_1 = VAR_0 ? VAR_0[-1] : 0;
  FUNC_0 (VAR_1);
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    static char VAR_3[4];
    VAR_3[0] = (char)((VAR_0[2 * VAR_2]>>16) & 0xff);
    VAR_3[1] = (char)((VAR_0[2 * VAR_2]>>8) & 0xff);
    VAR_3[2] = (char)(VAR_0[2 * VAR_2] & 0xff);
    VAR_3[3] = 0;
    FUNC_1 (VAR_3);
    FUNC_0 (VAR_0[2 * VAR_2 + 1]);
  }
}
