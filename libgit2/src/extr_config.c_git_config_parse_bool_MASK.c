
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,char const*) ;
 scalar_t__ FUNC_1 (int*,char const*) ;
 int FUNC_2 (int ,char*,char const*) ;

int FUNC_3(int *VAR_1, const char *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2) == 0)
  return 0;

 if (FUNC_1(VAR_1, VAR_2) == 0) {
  *VAR_1 = !!(*VAR_1);
  return 0;
 }

 FUNC_2(VAR_0, "failed to parse '%s' as a boolean value", VAR_2);
 return -1;
}
