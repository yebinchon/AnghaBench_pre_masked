
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0 (const unsigned char *VAR_0, const unsigned char *VAR_1, int VAR_2) {
  int VAR_3, VAR_4 = 3;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (VAR_0[VAR_3] != VAR_1[VAR_3]) {
      if (VAR_0[VAR_3] && !VAR_1[VAR_3]) {
        VAR_4 &= ~2;
      } else if (VAR_1[VAR_3] && !VAR_0[VAR_3]) {
        VAR_4 &= ~1;
      } else if (VAR_0[VAR_3] && VAR_1[VAR_3]) {
        return 0;
      }
      if (!VAR_4) {
        return 0;
      }
    }
  }
  return VAR_4;
}
