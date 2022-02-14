
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int,char**) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 () ;

int
FUNC_6(int VAR_0, char *VAR_1[])
{

 if (VAR_0 < 2)
  FUNC_5();

 if (FUNC_4("add", VAR_1[1]) == 0) {
  FUNC_0(VAR_0-2, VAR_1+2);
 } else if (FUNC_4("list", VAR_1[1]) == 0) {
  if (VAR_0 != 2)
   FUNC_5();
  FUNC_1();
 } else if (FUNC_4("set", VAR_1[1]) == 0) {
  FUNC_3(VAR_0-2, VAR_1+2);
 } else if (FUNC_4("remove", VAR_1[1]) == 0) {
  FUNC_2(VAR_0-2, VAR_1+2);
 } else
  FUNC_5();

 return (0);
}
