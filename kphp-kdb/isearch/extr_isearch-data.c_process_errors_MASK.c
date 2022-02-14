
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 double** VAR_1 ;

void FUNC_0 (char *VAR_2[VAR_0], double VAR_3) {
  int VAR_4, VAR_5;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    int VAR_6 = (unsigned char)VAR_2[VAR_4][0] % 224;
    for (VAR_5 = 1; VAR_2[VAR_4][VAR_5]; VAR_5++)
      VAR_1[VAR_6][(unsigned char)VAR_2[VAR_4][VAR_5] % 224] = VAR_3;
  }
}
