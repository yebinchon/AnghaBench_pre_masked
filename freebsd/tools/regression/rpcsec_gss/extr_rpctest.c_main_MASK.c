
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 (int,char const**) ;
 int FUNC_3 (int,char const**) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_0, const char **VAR_1)
{

 if (VAR_0 < 2)
  FUNC_4();
 if (!FUNC_0(VAR_1[1], "client"))
  FUNC_1(VAR_0 - 1, VAR_1 + 1);
 else if (!FUNC_0(VAR_1[1], "server"))
  FUNC_3(VAR_0 - 1, VAR_1 + 1);
 else if (!FUNC_0(VAR_1[1], "principal"))
  FUNC_2(VAR_0 - 1, VAR_1 + 1);
 else
  FUNC_4();

 return (0);
}
