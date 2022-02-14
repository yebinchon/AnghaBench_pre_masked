
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,int*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, int *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_1(VAR_0, ':');
 if (!VAR_2)
  return ((void*)0);

 *VAR_2 = '\0';
 if (FUNC_0(VAR_0, 10, VAR_1))
  return ((void*)0);

 return VAR_2 + 1;
}
