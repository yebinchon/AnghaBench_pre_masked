
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 char* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_1 () {
  const char *VAR_3 = VAR_1;
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < 128; VAR_4++) {
    VAR_2[VAR_4] = -1;
  }





  VAR_4 = 0;
  while (*VAR_3) {
    FUNC_0 ('a' <= *VAR_3 && *VAR_3 <= 'z');
    VAR_2[(int) *VAR_3] = VAR_4;
    VAR_2[(int) (*VAR_3 - 32)] = VAR_4 | VAR_0;
    VAR_4++;
    VAR_3++;
  }
}
