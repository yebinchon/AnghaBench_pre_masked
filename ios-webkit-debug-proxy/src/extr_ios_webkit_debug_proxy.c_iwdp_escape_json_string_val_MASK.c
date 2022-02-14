
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char const) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0) {
  int VAR_1 = FUNC_2(VAR_0);
  char* VAR_2 = (char*)FUNC_0(VAR_1 * 6 + 1);

  int VAR_3, VAR_4;
  for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_1; VAR_3++, VAR_4++) {
    if (VAR_0[VAR_3] >= 0 && VAR_0[VAR_3] < 32) {
      FUNC_1(VAR_2 + VAR_4, "\\u%04d", VAR_0[VAR_3]);
      VAR_4 += 5;
    } else {
      if (VAR_0[VAR_3] == '"' || VAR_0[VAR_3] == '\\') {
        VAR_2[VAR_4++] = '\\';
      }
      VAR_2[VAR_4] = VAR_0[VAR_3];
    }
  }
  VAR_2[VAR_4] = '\0';

  return VAR_2;
}
