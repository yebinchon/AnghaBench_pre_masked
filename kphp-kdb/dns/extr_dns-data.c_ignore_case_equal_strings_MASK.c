
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1 (char *VAR_0, char *VAR_1, int VAR_2) {
  while (--VAR_2 >= 0) {
    if (FUNC_0 (*VAR_0) != FUNC_0 (*VAR_1)) { return 0; }
    VAR_0++;
    VAR_1++;
  }
  return 1;
}
