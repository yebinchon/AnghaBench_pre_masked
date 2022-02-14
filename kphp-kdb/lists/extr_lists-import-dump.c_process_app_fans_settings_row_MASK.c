
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (void*) ;
 void* VAR_8 ;
 int FUNC_1 (scalar_t__,int) ;

void FUNC_2 (void) {
  int VAR_9 = VAR_0[VAR_7], VAR_10 = 0, VAR_11;
  VAR_8 = VAR_0[VAR_4];
  if (FUNC_0 (VAR_8) < 0 || !VAR_9) {
    return;
  }
  for (VAR_11 = VAR_6; VAR_11 <= VAR_5; VAR_11++) {
    if (VAR_0[VAR_11]) {
      VAR_10 += (1 << VAR_11);
    }
  }
  if (!VAR_0[VAR_6]) {
    FUNC_1 (VAR_1 + (1 << VAR_6), VAR_9);
  }
  FUNC_1 (VAR_2 + VAR_10, VAR_9);
  VAR_3++;
}
