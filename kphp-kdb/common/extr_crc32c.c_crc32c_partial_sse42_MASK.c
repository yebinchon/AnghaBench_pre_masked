
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0 (const void *VAR_0, int VAR_1, unsigned VAR_2) {
  const char *VAR_3 = VAR_0;
  unsigned long long VAR_4 = VAR_2;
  while ((((uintptr_t) VAR_0) & 7) && (VAR_1 > 0)) {
    asm volatile (
       "crc32b (%2), %1\n\t"
     : "=r" (VAR_4)
     : "0" (VAR_4), "r" (VAR_3)
    );
    VAR_3++;
    VAR_1--;
  }
  while (VAR_1 >= 8) {
    asm volatile (
       "crc32q (%2), %1\n\t"
     : "=r" (VAR_4)
     : "0" (VAR_4), "r" (VAR_3)
    );
    VAR_3 += 8;
    VAR_1 -= 8;
  }
  while (VAR_1 > 0) {
    asm volatile (
       "crc32b (%2), %1\n\t"
     : "=r" (VAR_4)
     : "0" (VAR_4), "r" (VAR_3)
    );
    VAR_3++;
    VAR_1--;
  }
  return VAR_4;
}
