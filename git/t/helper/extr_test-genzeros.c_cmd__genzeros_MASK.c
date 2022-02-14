
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 long FUNC_2 (char const*,int *,int ) ;

int FUNC_3(int VAR_2, const char **VAR_3)
{
 long VAR_4;

 if (VAR_2 > 2) {
  FUNC_0(VAR_1, "usage: %s [<count>]\n", VAR_3[0]);
  return 1;
 }

 VAR_4 = VAR_2 > 1 ? FUNC_2(VAR_3[1], ((void*)0), 0) : -1L;

 while (VAR_4 < 0 || VAR_4--) {
  if (FUNC_1(0) == VAR_0)
   return -1;
 }

 return 0;
}
