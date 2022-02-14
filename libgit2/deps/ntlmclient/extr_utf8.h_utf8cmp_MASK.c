
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const void *VAR_0, const void *VAR_1) {
  const unsigned char *VAR_2 = (const unsigned char *)VAR_0;
  const unsigned char *VAR_3 = (const unsigned char *)VAR_1;

  while (('\0' != *VAR_2) || ('\0' != *VAR_3)) {
    if (*VAR_2 < *VAR_3) {
      return -1;
    } else if (*VAR_2 > *VAR_3) {
      return 1;
    }

    VAR_2++;
    VAR_3++;
  }


  return 0;
}
