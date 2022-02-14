
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 size_t FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_1(VAR_0);
 size_t VAR_3 = FUNC_1(VAR_1);
 if (VAR_2 < VAR_3)
  return -1;
 return FUNC_0(VAR_0 + (VAR_2 - VAR_3), VAR_1);
}
