
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (int ) ;

int FUNC_7(int VAR_1, const char **VAR_2)
{
 if (VAR_1 == 2) {
  if (FUNC_3(VAR_2[1]))
   return 1;
  FUNC_4(((void*)0), "refs/heads/master", "refs/notes/svn/revs");
  FUNC_2();
  FUNC_5();
  return 0;
 }

 if (VAR_1 >= 2 && !FUNC_1(VAR_2[1], "-d"))
  return FUNC_0(VAR_1, VAR_2);
 FUNC_6(VAR_0);
}
