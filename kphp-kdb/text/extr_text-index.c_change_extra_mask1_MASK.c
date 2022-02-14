
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_0 (int VAR_5) {
  int VAR_6;
  ++VAR_3;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    if ((VAR_5 & (1 << VAR_6)) && VAR_3 >= VAR_2[VAR_6]) {
      VAR_1 |= 1 << VAR_6;
    }
  }
  VAR_1 &= VAR_5 & VAR_4;
}
