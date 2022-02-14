
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* VAR_2 ;
 scalar_t__ FUNC_1 (char*,char) ;
 int* VAR_3 ;

void FUNC_2 () {
  const char *VAR_4 = VAR_2;
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < 128; VAR_5++) {
    VAR_3[VAR_5] = -1;
  }

  FUNC_0 (FUNC_1(VAR_2, 'i') == 0);
  VAR_3['i'] = VAR_1;
  VAR_3['I'] = VAR_1 | VAR_0;
  VAR_5 = 0;
  while (*VAR_4) {
    FUNC_0 ('a' <= *VAR_4 && *VAR_4 <= 'z');
    VAR_3[(int) *VAR_4] = VAR_5;
    VAR_3[(int) (*VAR_4 - 32)] = VAR_5 | VAR_0;
    VAR_5++;
    VAR_4++;
  }
}
