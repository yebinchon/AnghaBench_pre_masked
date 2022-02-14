
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char**,char*,int,char*,char*) ;

char *
FUNC_3(char *VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 while (VAR_4 != 0 && VAR_0[VAR_4 - 1] == '/')
     VAR_4--;
 if ((VAR_2 = FUNC_1(VAR_1, '/')) == ((void*)0))
  VAR_2 = VAR_1;
 else
  VAR_2++;
 FUNC_2(&VAR_3, "%.*s/%s", (int)VAR_4, VAR_0, VAR_2);
 return (VAR_3);
}
