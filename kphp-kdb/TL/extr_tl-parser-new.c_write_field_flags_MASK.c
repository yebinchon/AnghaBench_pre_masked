
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

void FUNC_1 (long long VAR_4) {
  int VAR_5 = 0;

  if (VAR_4 & 1) {
    VAR_5 |= VAR_0;
  }
  if (VAR_4 & 32) {
    VAR_5 |= VAR_3;
  }
  if (VAR_4 & VAR_1) {
    VAR_5 |= VAR_1;
  }
  if (VAR_4 & VAR_2) {

    VAR_5 |= 2;
  }
  if (VAR_4 & (1 << 21)) {
    VAR_5 |= 4;
  }
  FUNC_0 (VAR_5);
}
