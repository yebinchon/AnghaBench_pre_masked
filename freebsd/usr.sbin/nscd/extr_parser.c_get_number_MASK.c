
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int VAR_1, int VAR_2)
{

 char *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 if (VAR_0[0] == '\0')
  return (-1);

 VAR_4 = FUNC_0(VAR_0, &VAR_3, 10);
 if (*VAR_3 != '\0')
  return (-1);
 else
  if (((VAR_4 >= VAR_1) || (VAR_1 == -1)) &&
   ((VAR_4 <= VAR_2) || (VAR_2 == -1)))
   return (VAR_4);
  else
   return (-2);
}
