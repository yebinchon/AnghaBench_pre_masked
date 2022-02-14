
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int) ;

void
FUNC_2(int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, char **VAR_5, int VAR_6, int VAR_7,
    int VAR_8, char *VAR_9)
{
 static int VAR_10 = 0;

 if (*VAR_1 >= VAR_0 - 1) {
  if (VAR_10 == 0)
   FUNC_1("Index > %d, ignored", VAR_0);
  VAR_10++;
  return;
 }
 VAR_2[*VAR_1] = VAR_6;
 VAR_3[*VAR_1] = VAR_7;
 VAR_4[*VAR_1] = VAR_8;
 if (VAR_9 != ((void*)0))
  FUNC_0(VAR_5[*VAR_1], VAR_9);
 else
  VAR_5[*VAR_1][0] = '\0';
 *VAR_1 += 1;
}
