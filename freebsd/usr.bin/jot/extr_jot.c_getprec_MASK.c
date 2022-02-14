
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 const char *VAR_1;
 const char *VAR_2;

 for (VAR_1 = VAR_0; *VAR_1; VAR_1++)
  if (*VAR_1 == '.')
   break;
 if (!*VAR_1)
  return (0);
 for (VAR_2 = ++VAR_1; *VAR_1; VAR_1++)
  if (!FUNC_0((unsigned char)*VAR_1))
   break;
 return (VAR_1 - VAR_2);
}
