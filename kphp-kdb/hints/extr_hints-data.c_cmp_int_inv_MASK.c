
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (const void * VAR_0, const void * VAR_1) {
  int VAR_2 = *(int *)VAR_0, VAR_3 = *(int *)VAR_1;
  if (VAR_2 < VAR_3) {
    return +1;
  } else if (VAR_2 > VAR_3) {
    return -1;
  }
  return 0;
}
