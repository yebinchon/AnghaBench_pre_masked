
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline int FUNC_0 (unsigned long long VAR_0, unsigned int VAR_1, unsigned int VAR_2) {
  unsigned long long VAR_3 = 0;
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
    VAR_3 *= VAR_1;
    VAR_3 ^= (VAR_0 >> (16 * VAR_4)) & (0xffff);
  }


  return (VAR_3 >> 32) % VAR_2;
}
