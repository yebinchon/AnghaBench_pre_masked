
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char *VAR_0, char *VAR_1)
{
 char VAR_2;

 while ((VAR_2 = *VAR_0++) == *VAR_1++)
  if (VAR_2 == '\0')
   return (1);
 return (VAR_2 == '\0');
}
