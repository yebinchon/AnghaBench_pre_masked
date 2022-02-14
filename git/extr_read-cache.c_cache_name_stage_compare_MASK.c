
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int,char const*,int) ;

int FUNC_1(const char *VAR_0, int VAR_1, int VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_2 < VAR_5)
  return -1;
 if (VAR_2 > VAR_5)
  return 1;
 return 0;
}
