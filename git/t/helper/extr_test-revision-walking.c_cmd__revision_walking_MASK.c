
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (char const*,char*) ;

int FUNC_5(int VAR_1, const char **VAR_2)
{
 if (VAR_1 < 2)
  return 1;

 FUNC_3();

 if (!FUNC_4(VAR_2[1], "run-twice")) {
  FUNC_1("1st\n");
  if (!FUNC_2())
   return 1;
  FUNC_1("2nd\n");
  if (!FUNC_2())
   return 1;

  return 0;
 }

 FUNC_0(VAR_0, "check usage\n");
 return 1;
}
