
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*) ;

int FUNC_2 (char *VAR_1) {
  if (VAR_1 == ((void*)0) || *VAR_1 == 0 || FUNC_1 (VAR_1) >= VAR_0) {
    return 0;
  }
  while (*VAR_1) {
    if (!FUNC_0 (*VAR_1)) {
      return 0;
    }
    VAR_1++;
  }
  return 1;
}
