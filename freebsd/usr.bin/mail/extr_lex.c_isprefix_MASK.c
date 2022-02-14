
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 while (*VAR_2++ == *VAR_3)
  if (*VAR_3++ == '\0')
   return (1);
 return (*--VAR_2 == '\0');
}
