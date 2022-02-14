
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline int FUNC_0 (void *VAR_0, int VAR_1) {
  unsigned long long VAR_2 = 0;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
    VAR_2 *= 239017;
    VAR_2 ^= ((long)VAR_0 >> ((sizeof (long) / 4) * VAR_3)) & (0xffff);
    VAR_2 *= 999987;
    VAR_2 ^= (VAR_1 >> (8 * VAR_3)) & (0xffff);
  }

  return VAR_2 >> 16;
}
