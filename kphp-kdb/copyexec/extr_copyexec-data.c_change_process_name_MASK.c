
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int ,unsigned long,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,char*,char*) ;

void FUNC_5 (char *VAR_3) {

  if (FUNC_1 (VAR_0, (unsigned long) VAR_3, 0, 0, 0) < 0) {
    FUNC_4 (1, "changing process name to %s failed. %m\n", VAR_3);
  }

  int VAR_4;
  for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++) {
    FUNC_0 (VAR_2[VAR_4], 0, FUNC_2 (VAR_2[VAR_4]));
  }
  VAR_4 = FUNC_2 (VAR_3) - FUNC_2 (VAR_2[0]);
  if (VAR_4 < 0) {
    VAR_4 = 0;
  }
  FUNC_3 (VAR_2[0], VAR_3 + VAR_4, FUNC_2 (VAR_2[0]));
}
