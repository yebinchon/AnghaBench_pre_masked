
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(const void *VAR_0) {
  const unsigned char *VAR_1 = (const unsigned char *)VAR_0;
  size_t VAR_2 = 0;

  while ('\0' != *VAR_1) {
    if (0xf0 == (0xf8 & *VAR_1)) {

      VAR_1 += 4;
    } else if (0xe0 == (0xf0 & *VAR_1)) {

      VAR_1 += 3;
    } else if (0xc0 == (0xe0 & *VAR_1)) {

      VAR_1 += 2;
    } else {

      VAR_1 += 1;
    }



    VAR_2++;
  }

  return VAR_2;
}
