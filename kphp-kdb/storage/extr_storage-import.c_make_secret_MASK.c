
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

unsigned long long FUNC_1 (void) {
  unsigned long long VAR_0 = 0;
  int VAR_1 = 0;
  while (1) {
    VAR_0 |= (FUNC_0 () >> 15) & 0xffff;
    if (++VAR_1 == 4) {
      break;
    }
    VAR_0 <<= 16;
  }
  return VAR_0;
}
