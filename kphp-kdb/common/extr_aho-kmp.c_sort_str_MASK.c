
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1 (int VAR_2, int VAR_3) {
  if (VAR_2 >= VAR_3) {
    return;
  }
  int VAR_4 = VAR_2, VAR_5 = VAR_3, VAR_6;
  char *VAR_7 = VAR_1[(VAR_2 + VAR_3) >> 1], *VAR_8;

  do {
    while (FUNC_0 (VAR_1[VAR_4], VAR_7) < 0) { ++VAR_4; }
    while (FUNC_0 (VAR_7, VAR_1[VAR_5]) < 0) { --VAR_5; }
    if (VAR_4 <= VAR_5) {
      VAR_8 = VAR_1[VAR_4]; VAR_1[VAR_4] = VAR_1[VAR_5]; VAR_1[VAR_5] = VAR_8;
      VAR_6 = VAR_0[VAR_4]; VAR_0[VAR_4++] = VAR_0[VAR_5]; VAR_0[VAR_5--] = VAR_6;
    }
  } while (VAR_4 <= VAR_5);
  FUNC_1 (VAR_2, VAR_5);
  FUNC_1 (VAR_4, VAR_3);
}
