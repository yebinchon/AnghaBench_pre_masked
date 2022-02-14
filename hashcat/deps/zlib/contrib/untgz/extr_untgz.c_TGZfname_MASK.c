
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const** VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;

char *FUNC_3 (const char *VAR_2)
{
  static char VAR_3[1024];
  int VAR_4,VAR_5;

  FUNC_1(VAR_3,VAR_2);
  VAR_4 = FUNC_2(VAR_3);

  for (VAR_5=0; VAR_1[VAR_5]; VAR_5++)
    {
       FUNC_1(VAR_3+VAR_4,VAR_1[VAR_5]);
       if (FUNC_0(VAR_3,VAR_0) == 0)
         return VAR_3;
    }
  return ((void*)0);
}
