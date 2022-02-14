
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (int) ;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*,int) ;
 int* VAR_2 ;

int FUNC_3 (const char *VAR_3, int VAR_4, char *VAR_5) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_4 && VAR_3[VAR_6] && VAR_6 + 1 < VAR_1; VAR_6++) {
    VAR_2[VAR_6] = FUNC_0 (VAR_3[VAR_6]);
  }
  VAR_2[VAR_6] = -1;
  int VAR_7 = FUNC_1 (VAR_6);
  FUNC_2 (VAR_5, VAR_3, VAR_7 * sizeof (char));
  if (VAR_0 && VAR_7 > 0) {
    VAR_5[VAR_7 - 1] = VAR_0;
  }
  VAR_5[VAR_7] = 0;
  return VAR_7;
}
