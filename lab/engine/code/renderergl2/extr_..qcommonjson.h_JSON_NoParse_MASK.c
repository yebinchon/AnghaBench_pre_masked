
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(const char *VAR_0, const char *VAR_1)
{
 if (!VAR_0 || VAR_0 >= VAR_1 || *VAR_0 == 'f' || *VAR_0 == 'n')
  return 1;

 if (*VAR_0 == 't')
  return 2;

 return 0;
}
