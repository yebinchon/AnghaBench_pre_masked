
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {int dummy; } ;


 int FUNC_0 (int,char*,char*,...) ;
 struct netconfig* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ,struct netconfig*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(char *VAR_0, int VAR_1, char **VAR_2)
{
 struct netconfig *VAR_3 = ((void*)0);

 if (VAR_1 != 2)
  FUNC_5();
 if (VAR_0) {
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3 == ((void*)0))
   FUNC_0(1, "netid %s not supported", VAR_0);
 }
 if ((FUNC_4(FUNC_2(VAR_2[0]), FUNC_3(VAR_2[1]), VAR_3)) == 0)
  FUNC_0(1,
 "could not delete registration for prog %s version %s",
   VAR_2[0], VAR_2[1]);
}
