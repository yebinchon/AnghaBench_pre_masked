
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 (char const*,int) ;

unsigned long long FUNC_1 (const char *VAR_0, int VAR_1) {
  unsigned long long VAR_2 = FUNC_0 (VAR_0, VAR_1);
  VAR_2 &= 0x7fffffffffffffffULL;
  if (*VAR_0 != 0x1f) {
    VAR_2 |= 0x8000000000000000ULL;
  }
  return VAR_2;
}
