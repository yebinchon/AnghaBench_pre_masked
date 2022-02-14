
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3 (long long VAR_1) {
  int VAR_2 = 0;
  if (VAR_1 & 1) {
    VAR_2 |= VAR_0;
  }
  if (VAR_2 & VAR_0) {
    FUNC_0 ("Sorry, bare vars are not (yet ?) supported.\n");
    FUNC_1 (!(VAR_2 & VAR_0));
  }
  FUNC_2 (VAR_2);
}
