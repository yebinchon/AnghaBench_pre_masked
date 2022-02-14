
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (char**,char*) ;

void
FUNC_3(char *VAR_0)
{
 char *VAR_1, *VAR_2;

 VAR_2 = VAR_0;
 VAR_1 = FUNC_2(&VAR_2, "=");

 if (VAR_2 == ((void*)0) || VAR_2[0] == '\0')
  FUNC_1(1, "missing variable value");
 if (VAR_1 == ((void*)0) || VAR_1[0] == '\0')
  FUNC_1(1, "missing variable name");

 FUNC_0(VAR_1, VAR_2);
}
