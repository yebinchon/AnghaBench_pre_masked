
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int,int,int,int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;

void FUNC_4 (void) {
  int VAR_11 = VAR_0[VAR_7];
  int VAR_12 = VAR_0[VAR_5];
  int VAR_13 = VAR_0[VAR_4];
  int VAR_14 = VAR_0[VAR_6];
  if (VAR_14 < VAR_2) {
    FUNC_1 (VAR_3, "date goes back by %d seconds\n", VAR_2 - VAR_14);
  } else if (VAR_14 > VAR_2) {
    FUNC_2 (VAR_14);
    VAR_2 = VAR_14;
  }
  if (!FUNC_0 (VAR_13)) {
    return;
  }
  FUNC_3 (VAR_13, VAR_0[VAR_9], VAR_0[VAR_8], VAR_0[VAR_10], VAR_11, !!VAR_11 * 2 + !!VAR_12);
  VAR_1++;
}
