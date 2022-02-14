
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2) {
  const unsigned char *VAR_3 = (const unsigned char *)VAR_0;
  const unsigned char *VAR_4 = (const unsigned char *)VAR_1;

  while ((('\0' != *VAR_3) || ('\0' != *VAR_4)) && (0 != VAR_2--)) {
    if (*VAR_3 < *VAR_4) {
      return -1;
    } else if (*VAR_3 > *VAR_4) {
      return 1;
    }

    VAR_3++;
    VAR_4++;
  }


  return 0;
}
