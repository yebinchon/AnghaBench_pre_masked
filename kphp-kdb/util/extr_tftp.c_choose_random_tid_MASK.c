
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int ** VAR_0 ;
 int const FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1 (void) {
  const int VAR_3 = VAR_1 - VAR_2 + 1;
  int VAR_4 = FUNC_0 () % VAR_3, VAR_5 = VAR_3;
  while (--VAR_5 >= 0) {
    if (VAR_0[VAR_2 + VAR_4] == ((void*)0)) {
      return VAR_2 + VAR_4;
    }
    VAR_4 = (VAR_4 + 1) % VAR_3;
  }
  return -1;
}
