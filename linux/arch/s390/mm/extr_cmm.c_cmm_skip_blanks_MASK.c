
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char *VAR_0, char **VAR_1)
{
 char *VAR_2;

 for (VAR_2 = VAR_0; *VAR_2 == ' ' || *VAR_2 == '\t'; VAR_2++)
  ;
 *VAR_1 = VAR_2;
 return VAR_2 != VAR_0;
}
