
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (char *VAR_0, int VAR_1, unsigned VAR_2) {
  char *VAR_3 = VAR_0;
  *VAR_3++ = 0x1f;
  *VAR_3++ = VAR_1;
  while (VAR_2 >= 0x40) {
    *VAR_3++ = 0x80 + (VAR_2 & 0x7f);
    VAR_2 >>= 7;
  }
  *VAR_3++ = 0x40 + VAR_2;
  *VAR_3 = 0;
  return VAR_3 - VAR_0;
}
