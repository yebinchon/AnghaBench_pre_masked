
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

int FUNC_2 (const char *VAR_0, int VAR_1) {
  if (VAR_1 < 5 || FUNC_1 (VAR_0, "stats", 5)) { return 0; }
  if (VAR_1 == 5) {
    return 1;
  }
  if (VAR_1 >= 10 && VAR_0[5] == '#' && VAR_0[VAR_1 - 1] == '$' && VAR_0[VAR_1 - 2] == '#' && VAR_0[VAR_1 - 3] == '@') {
    int VAR_2 = 6, VAR_3;
    if (VAR_0[VAR_2] == '-') {
      VAR_2++;
    }
    for (VAR_3 = VAR_2; FUNC_0 (VAR_0[VAR_3]); VAR_3++) {}
    if (VAR_2 < VAR_3 && VAR_3 == VAR_1 - 3) { return 1; }
  }
  return 0;
}
