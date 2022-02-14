
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,scalar_t__,int) ;
 int VAR_7 ;

void FUNC_3 (void) {
  int VAR_8;
  if (VAR_5 > VAR_6) {
    VAR_8 = VAR_5 - VAR_6;
    VAR_7 += VAR_8;
    VAR_2 += VAR_8;
  }
  if (VAR_4 < VAR_5) {
    VAR_8 = VAR_5 - VAR_4;
    if (VAR_3 >= 1) {
      FUNC_0 (FUNC_2 (VAR_3, VAR_4, VAR_8) == VAR_8);
    } else {
      FUNC_1 (&VAR_1, VAR_4, VAR_8);
    }
  }
  VAR_4 = VAR_5 = VAR_6 = VAR_0;
}
