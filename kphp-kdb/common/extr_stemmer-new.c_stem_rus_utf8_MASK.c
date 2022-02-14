
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*,char*) ;
 int FUNC_2 (int,int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_3 (unsigned char*,int*) ;

int FUNC_4 (const char *VAR_3, char *VAR_4, int VAR_5) {
  int VAR_6;
  FUNC_3 ((unsigned char *)VAR_3, VAR_2);
  for (VAR_6 = 0; VAR_1[VAR_6] && VAR_6 + 100 < VAR_0; VAR_6++) {
    VAR_1[VAR_6] = FUNC_0 (VAR_2[VAR_6]);
  }
  int VAR_7 = FUNC_2 (VAR_6, VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    if (VAR_1[VAR_6] != 32) {
      VAR_2[VAR_6] = VAR_1[VAR_6] + 1072;
    }
  }
  VAR_2[VAR_7] = 0;
  FUNC_1 (VAR_2, VAR_4);
  return VAR_7;
}
