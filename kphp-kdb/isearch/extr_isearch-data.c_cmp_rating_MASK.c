
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

int FUNC_0 (const void * VAR_1, const void * VAR_2) {
  int VAR_3 = *(int *)VAR_1, VAR_4 = *(int *)VAR_2;
  if (VAR_0[VAR_3] > VAR_0[VAR_4]) {
    return -1;
  }
  return VAR_0[VAR_3] < VAR_0[VAR_4];
}
