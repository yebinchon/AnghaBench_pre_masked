
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_0, char *VAR_1[])
{

 if (VAR_0 < 2)
  FUNC_4();

 if (FUNC_1(VAR_1[1], "server") == 0)
  FUNC_3(VAR_0 - 2, VAR_1 + 2);
 else if (FUNC_1(VAR_1[1], "client") == 0)
  FUNC_2(VAR_0 - 2, VAR_1 + 2);
 else
  FUNC_4();

 FUNC_0(0);
}
