
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 size_t VAR_1 ;
 scalar_t__* VAR_2 ;
 size_t VAR_3 ;

void FUNC_2 (char *VAR_4) {
  if (VAR_4 == ((void*)0)) {
    return;
  }
  VAR_2[VAR_3++] = FUNC_0 (VAR_4);
  if (VAR_3 > VAR_0) {
    VAR_3 = 0;
  }
  if (VAR_1 >= VAR_3) {
    FUNC_1 (VAR_2[VAR_1]);
    VAR_2[VAR_1++] = 0;
    if (VAR_1 > VAR_0) {
      VAR_1 = 0;
    }
  }
}
