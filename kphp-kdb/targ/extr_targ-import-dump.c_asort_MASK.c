
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1 (int VAR_1, int VAR_2) {
  int VAR_3, VAR_4;
  char *VAR_5, *VAR_6;
  if (VAR_1 >= VAR_2) { return; }
  VAR_3 = VAR_1; VAR_4 = VAR_2; VAR_5 = VAR_0[(VAR_1+VAR_2)>>1];
  do {
    while (FUNC_0 (VAR_0[VAR_3], VAR_5) < 0) { VAR_3++; }
    while (FUNC_0 (VAR_0[VAR_4], VAR_5) > 0) { VAR_4--; }
    if (VAR_3 <= VAR_4) {
      VAR_6 = VAR_0[VAR_3]; VAR_0[VAR_3++] = VAR_0[VAR_4]; VAR_0[VAR_4--] = VAR_6;
    }
  } while (VAR_3 <= VAR_4);
  FUNC_1 (VAR_1, VAR_4);
  FUNC_1 (VAR_3, VAR_2);
}
