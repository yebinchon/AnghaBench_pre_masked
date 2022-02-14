
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int ** VAR_2 ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,char*,char*,int) ;
 char* VAR_4 ;
 int VAR_5 ;

void FUNC_4 (void) {
  char VAR_6[100];
  int VAR_7;

  for (VAR_7 = VAR_0; VAR_7 < VAR_1; VAR_7++) {
    if (FUNC_3 (VAR_6, 100, "%s%03d", VAR_4, VAR_7) >= 100) {
      FUNC_2 (VAR_5, "Filename is too long.\n");
      FUNC_0 (1);
    }
    VAR_2[VAR_7] = FUNC_1 (VAR_6, "r");
    if (VAR_2[VAR_7] == ((void*)0)) {
      FUNC_2 (VAR_5, "File '%s' not found.\n", VAR_6);
      FUNC_0 (1);
    }
    VAR_3++;
  }
}
