
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char*,double,char*,int) ;

__attribute__((used)) static __inline const char *
FUNC_1(char *VAR_0, double VAR_1, int VAR_2)
{
 if (VAR_2)
  return FUNC_0(VAR_0, VAR_1, "%.3f %s", VAR_2);
 else
  return FUNC_0(VAR_0, VAR_1, "%.0f %s", VAR_2);
}
