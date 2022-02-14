
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static long long FUNC_0 (unsigned char *VAR_0) {
  unsigned long VAR_1 = 0;
  int VAR_2 = 0;
  do {
    VAR_1 <<= 8;
    VAR_1 |= VAR_0[VAR_2];
  } while (++VAR_2 < 6);
  return VAR_1;
}
