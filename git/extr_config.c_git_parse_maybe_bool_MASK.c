
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,int*) ;
 int FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);
 if (0 <= VAR_1)
  return VAR_1;
 if (FUNC_0(VAR_0, &VAR_1))
  return !!VAR_1;
 return -1;
}
