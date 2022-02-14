
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned FUNC_0 (unsigned long long VAR_0, int VAR_1) {
  int VAR_2 = VAR_1;
  for (VAR_2 = VAR_1; VAR_2 >= 32; VAR_2--) {
    if ((1ULL << VAR_2) & VAR_0) {
      VAR_0 ^= 0x1EDC6F41ULL << (VAR_2 - 32);
    }
  }
  return (unsigned) VAR_0;
}
