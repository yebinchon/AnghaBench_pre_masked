
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,char*) ;

int FUNC_6(int VAR_0, const char **VAR_1)
{
 const char *VAR_2 =
  "usage: git credential-osxkeychain <get|store|erase>";

 if (!VAR_1[1])
  FUNC_2(VAR_2);

 FUNC_4();

 if (!FUNC_5(VAR_1[1], "get"))
  FUNC_3();
 else if (!FUNC_5(VAR_1[1], "store"))
  FUNC_0();
 else if (!FUNC_5(VAR_1[1], "erase"))
  FUNC_1();


 return 0;
}
