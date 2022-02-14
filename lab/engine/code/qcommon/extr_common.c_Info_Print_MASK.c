
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2( const char *VAR_2 ) {
 char VAR_3[VAR_0];
 char VAR_4[VAR_1];
 char *VAR_5;
 int VAR_6;

 if (*VAR_2 == '\\')
  VAR_2++;
 while (*VAR_2)
 {
  VAR_5 = VAR_3;
  while (*VAR_2 && *VAR_2 != '\\')
   *VAR_5++ = *VAR_2++;

  VAR_6 = VAR_5 - VAR_3;
  if (VAR_6 < 20)
  {
   FUNC_0 (VAR_5, ' ', 20-VAR_6);
   VAR_3[20] = 0;
  }
  else
   *VAR_5 = 0;
  FUNC_1 ("%s ", VAR_3);

  if (!*VAR_2)
  {
   FUNC_1 ("MISSING VALUE\n");
   return;
  }

  VAR_5 = VAR_4;
  VAR_2++;
  while (*VAR_2 && *VAR_2 != '\\')
   *VAR_5++ = *VAR_2++;
  *VAR_5 = 0;

  if (*VAR_2)
   VAR_2++;
  FUNC_1 ("%s\n", VAR_4);
 }
}
