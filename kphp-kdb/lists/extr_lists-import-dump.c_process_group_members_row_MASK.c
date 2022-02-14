
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 size_t VAR_1 ;
 void** VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (scalar_t__,int,int) ;

void FUNC_2 (void) {
  int VAR_10 = VAR_2[VAR_7];
  int VAR_11 = VAR_2[VAR_5];
  int VAR_12 = VAR_2[VAR_8];
  VAR_9 = VAR_2[VAR_6];
  if (FUNC_0 (VAR_9) < 0 || VAR_9 <= 0 || VAR_10 <= 0 || VAR_11 <= 0 || VAR_11 > 2) {
    return;
  }
  if (VAR_9 < VAR_1) {
    if (VAR_0[VAR_9] == 3) {
      VAR_11 += 4;
    } else if (VAR_0[VAR_9] != 2) {
      return;
    }
  }
  FUNC_1 (VAR_3 + VAR_11 + 1, VAR_10, VAR_12 > 0 ? VAR_12 : 0);
  VAR_4++;
}
