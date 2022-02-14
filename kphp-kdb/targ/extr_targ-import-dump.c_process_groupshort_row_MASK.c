
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

void FUNC_0 (void) {
  int VAR_7 = VAR_2[VAR_5], VAR_8 = VAR_2[VAR_6];
  if (VAR_7 <= 0 || VAR_7 >= VAR_3 || VAR_8 <= 0 || VAR_8 >= 128) {
    return;
  }
  VAR_0[VAR_7] = VAR_8;
  if (VAR_7 >= VAR_1) { VAR_1 = VAR_7+1; }
  VAR_4++;
}
