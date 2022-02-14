
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1 (long long VAR_2) {
  int VAR_3 = 0;
  if (VAR_2 & 1) {
    VAR_3 |= VAR_0;
  }
  if (VAR_2 & VAR_1) {
    VAR_3 |= VAR_1;
  }
  FUNC_0 (VAR_3);
}
