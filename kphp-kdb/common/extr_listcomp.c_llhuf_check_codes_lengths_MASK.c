
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0 (int *VAR_0, int VAR_1) {
  int VAR_2, VAR_3 = 0;
  unsigned long long VAR_4 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    if (VAR_0[VAR_2]) {
      if (VAR_0[VAR_2] < 0 || VAR_0[VAR_2] >= 32) {
        return -1;
      }
      VAR_4 += 1U << (32 - VAR_0[VAR_2]);
    } else {
      VAR_3++;
    }
  }

  if (VAR_3 == VAR_1 - 1) {
    return 0;
  }

  if (VAR_4 > 0x100000000ULL) {
    return -2;
  }
  return 0;
}
