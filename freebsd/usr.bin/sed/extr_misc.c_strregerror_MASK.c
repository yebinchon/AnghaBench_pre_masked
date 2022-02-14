
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 size_t FUNC_3 (int,int *,char*,size_t) ;

char *
FUNC_4(int VAR_0, regex_t *VAR_1)
{
 static char *VAR_2;
 size_t VAR_3;

 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);
 VAR_3 = FUNC_3(VAR_0, VAR_1, ((void*)0), 0);
 if ((VAR_2 = FUNC_2(VAR_3)) == ((void*)0))
  FUNC_0(1, "malloc");
 (void)FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 return (VAR_2);
}
