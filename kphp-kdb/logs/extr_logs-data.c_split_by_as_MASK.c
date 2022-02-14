
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0 (char *VAR_0, char **VAR_1) {
  int VAR_2 = 0;

  *VAR_1 = ((void*)0);

  while (*VAR_0) {
    if (*VAR_0 == '(' || *VAR_0 == '[') {
      VAR_2++;
    } else if (*VAR_0 == ')' || *VAR_0 == ']') {
      VAR_2--;
    } else if (*VAR_0 == ' ' && *(VAR_0 + 1) == 'A' && *(VAR_0 + 2) == 'S' && *(VAR_0 + 3) == ' ' && VAR_2 == 0) {
      *VAR_0 = 0;
      *VAR_1 = VAR_0 + 4;
      break;
    }
    VAR_0++;
  }
}
