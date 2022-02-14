
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (char *VAR_0, const char *VAR_1)
{

  if (VAR_1[0] == '\0' || VAR_1[1] == '\0') {
    VAR_0[0] = '\0';
    return 0;
  }

  VAR_0[0] = *(VAR_1 + 1);

  if (VAR_1[2] == '|' && VAR_1[3] != '%' && VAR_1[3] != '\0') {
    VAR_0[1] = *(VAR_1 + 3);
    return 1;
  }
  return 0;
}
