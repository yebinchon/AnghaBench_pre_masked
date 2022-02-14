
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,char*,int,char,int,int) ;
 int VAR_4 ;

void FUNC_1 (void) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    FUNC_0 (VAR_4, "%3d:  '%c'\t%d\t%d\n", VAR_5, VAR_3[VAR_5] ? VAR_3[VAR_5] : '.', VAR_0[VAR_5], VAR_1[VAR_5]);
  }
}
