
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0 (int VAR_0, int *VAR_1) {
  if (*VAR_1 == 2) {
    return 0;
  }
  if (*VAR_1 == 5) {
    if (VAR_0 != 1 && VAR_0 != 2) {
      *VAR_1 = 2;
      return 1;
    }
    *VAR_1 = 1;
    return 0;
  }
  if (VAR_0 == 9) {
    *VAR_1 = 5;
  }
  return 0;
}
