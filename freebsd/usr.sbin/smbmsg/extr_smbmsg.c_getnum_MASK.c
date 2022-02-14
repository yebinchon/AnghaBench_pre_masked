
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 char *VAR_1;
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1, 0);
 if (*VAR_0 != '\0' && *VAR_1 == '\0')
  return (int)VAR_2;
 return (-1);
}
