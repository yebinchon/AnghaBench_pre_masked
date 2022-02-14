
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

int FUNC_3(char *VAR_0, char *VAR_1[], int VAR_2) {
 int VAR_3, VAR_4 = FUNC_1(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  char *VAR_5 = VAR_1[VAR_3], *VAR_6;
  for ( ; (VAR_6 = FUNC_0(VAR_5, ';')); VAR_5 = VAR_6 + 1) {
   int VAR_7 = VAR_6 - VAR_5;
   if (VAR_4 > VAR_7 && FUNC_2(&VAR_0[VAR_4-VAR_7], VAR_5, VAR_7) == 0)
    return VAR_3;
  }
  if (*VAR_5) {
   int VAR_8 = FUNC_1(VAR_5);
   if (VAR_4 > VAR_8 && FUNC_2(&VAR_0[VAR_4-VAR_8], VAR_5, VAR_8) == 0)
    return VAR_3;
  }
 }
 return -1;
}
