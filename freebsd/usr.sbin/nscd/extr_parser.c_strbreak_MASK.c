
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int (*) (char*,char**,int)) ;
 int FUNC_1 (int (*) (char*,char**,int)) ;
 char* FUNC_2 (char**,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0, char **VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_0;
 int VAR_4, VAR_5;

 FUNC_0(FUNC_3);
 VAR_5 = 0;
 for (VAR_4 = 0;
      ((*VAR_1 =
       FUNC_2(VAR_4 < VAR_2 ? &VAR_3 : ((void*)0), "\n\t ")) != ((void*)0));
      ++VAR_4)
  if ((*(*VAR_1)) != '\0') {
   ++VAR_1;
   ++VAR_5;
  }

 FUNC_1(FUNC_3);
 return (VAR_5);
}
