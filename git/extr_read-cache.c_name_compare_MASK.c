
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,size_t) ;

int FUNC_1(const char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = (VAR_1 < VAR_3) ? VAR_1 : VAR_3;
 int VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;
 if (VAR_1 < VAR_3)
  return -1;
 if (VAR_1 > VAR_3)
  return 1;
 return 0;
}
