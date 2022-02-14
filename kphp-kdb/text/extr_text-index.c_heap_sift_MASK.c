
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0 (long long *VAR_0, long VAR_1, long long VAR_2) {
  int VAR_3 = 1, VAR_4;
  long long VAR_5 = VAR_0[VAR_2], VAR_6;
  while (1) {
    VAR_4 = (VAR_3 << 1);
    if (VAR_4 > VAR_1) {
      break;
    }
    VAR_6 = VAR_0[(long) VAR_0[VAR_4]];
    if (VAR_4 < VAR_1 && VAR_0[(long) VAR_0[VAR_4+1]] < VAR_6) {
      VAR_6 = VAR_0[(long) VAR_0[++VAR_4]];
    }
    if (VAR_6 >= VAR_5) {
      break;
    }
    VAR_0[VAR_3] = VAR_0[VAR_4];
    VAR_3 = VAR_4;
  }
  VAR_0[VAR_3] = VAR_2;
}
