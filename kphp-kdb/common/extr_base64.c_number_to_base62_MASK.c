
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

int FUNC_1 (long long VAR_0, char *VAR_1, int VAR_2) {
  int VAR_3 = 0;
  static const char* const VAR_4 = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  FUNC_0 (VAR_0 >= 0);
  if (!VAR_0) {
    if (VAR_3 >= VAR_2) return -1;
    VAR_1[VAR_3++] = '0';
  }
  while (VAR_0) {
    if (VAR_3 >= VAR_2) return -1;
    VAR_1[VAR_3++] = VAR_4[(int) (VAR_0 % 62)];
    VAR_0 /= 62;
  }
  if (VAR_3 >= VAR_2) {
    return -1;
  }
  VAR_1[VAR_3] = 0;

  int VAR_5 = 0, VAR_6 = VAR_3 - 1;
  while (VAR_5 < VAR_6) {
    char VAR_7 = VAR_1[VAR_5]; VAR_1[VAR_5] = VAR_1[VAR_6]; VAR_1[VAR_6] = VAR_7;
    VAR_5++;
    VAR_6--;
  }

  return 0;
}
