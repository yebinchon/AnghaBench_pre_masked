
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;

 while (*VAR_0 == *VAR_1++)
  if (*VAR_0++ == '\0')
   return (0);
 VAR_2 = (unsigned char)*VAR_0;
 VAR_3 = (unsigned char)*(VAR_1 - 1);

 if (VAR_2 == '\n')
  VAR_2 = '\0';
 if (VAR_3 == '\n')
  VAR_3 = '\0';
 return (VAR_2 - VAR_3);
}
