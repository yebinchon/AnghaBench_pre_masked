
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(int VAR_0, char **VAR_1)
{

 if (VAR_0 != 2)
  FUNC_2();
 if (FUNC_0(VAR_1[1]) < 0)
  FUNC_1(1, "Failed to rescan %s", VAR_1[1]);
 return (0);
}
