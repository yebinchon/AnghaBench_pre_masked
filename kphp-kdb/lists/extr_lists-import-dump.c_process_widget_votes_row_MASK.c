
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int,int,int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

void FUNC_4 (void) {
  int VAR_8 = VAR_0[VAR_5];
  int VAR_9 = VAR_0[VAR_7];
  int VAR_10 = VAR_0[VAR_4];
  int VAR_11 = VAR_0[VAR_6];
  if (VAR_11 < VAR_2 - 10) {
    FUNC_1 (VAR_3, "date goes back by %d seconds\n", VAR_2 - VAR_11);
  } else if (VAR_11 > VAR_2) {
    FUNC_3 (VAR_11);
    VAR_2 = VAR_11;
  }
  if (FUNC_0 (VAR_10)) {
    FUNC_2 (VAR_10, VAR_8, 0, 0);
    VAR_1++;
  }
  if (FUNC_0 (VAR_8)) {
    FUNC_2 (-VAR_8, VAR_9, VAR_10, 0);
    VAR_1++;
  }
}
