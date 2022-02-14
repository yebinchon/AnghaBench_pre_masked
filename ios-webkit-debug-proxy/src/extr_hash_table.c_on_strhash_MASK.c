
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ht_t ;



intptr_t FUNC_0(ht_t VAR_0, const void *VAR_1) {
  int VAR_2 = 0;
  char *VAR_3 = (char *)VAR_1;
  if (VAR_3) {
    int VAR_4;
    while ((VAR_4 = *VAR_3++)) {
      VAR_2 = ((VAR_2 << 5) + VAR_2) ^ VAR_4;
    }
  }
  return VAR_2;
}
