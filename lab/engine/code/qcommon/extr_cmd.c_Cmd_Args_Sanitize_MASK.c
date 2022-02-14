
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 int VAR_3;

 for(VAR_3 = 1; VAR_3 < VAR_1; VAR_3++)
 {
  char *VAR_4 = VAR_2[VAR_3];

  if(FUNC_0(VAR_4) > VAR_0 - 1)
   VAR_4[VAR_0 - 1] = '\0';

  while ((VAR_4 = FUNC_1(VAR_4, "\n\r;"))) {
   *VAR_4 = ' ';
   ++VAR_4;
  }
 }
}
