
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0 (char *VAR_0, const char *VAR_1, int VAR_2) {
  char *VAR_3 = VAR_0, *VAR_4 = VAR_0 + VAR_2;
  while (VAR_3 < VAR_4) {
    if ((unsigned char) *VAR_1 < ' ' && *VAR_1 != 9) {
      *VAR_3++ = ' ';
      VAR_1++;
    } else {
      *VAR_3++ = *VAR_1++;
    }
  }
  *VAR_3 = 0;
  return VAR_0;
}
