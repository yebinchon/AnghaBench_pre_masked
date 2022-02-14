
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 VAR_3 = (VAR_1 == '<') || (VAR_1 == '>');

 while (VAR_2--)
  if (*VAR_0++ != VAR_1)
   return 0;
 if (VAR_3 && *VAR_0 != ' ')
  return 0;
 return FUNC_0(*VAR_0);
}
