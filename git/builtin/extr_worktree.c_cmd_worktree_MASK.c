
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 struct option FUNC_0 () ;
 int FUNC_1 (int,char const**,char const*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int,char const**,char const*) ;
 int FUNC_4 (int,char const**,char const*) ;
 int FUNC_5 (int,char const**,char const*) ;
 int FUNC_6 (int,char const**,char const*) ;
 int FUNC_7 (int,char const**,char const*) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (int,char const**,char const*) ;
 int FUNC_10 (int ,struct option*) ;
 int VAR_1 ;

int FUNC_11(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 struct option VAR_5[] = {
  FUNC_0()
 };

 FUNC_2(VAR_0, ((void*)0));

 if (VAR_2 < 2)
  FUNC_10(VAR_1, VAR_5);
 if (!VAR_4)
  VAR_4 = "";
 if (!FUNC_8(VAR_3[1], "add"))
  return FUNC_1(VAR_2 - 1, VAR_3 + 1, VAR_4);
 if (!FUNC_8(VAR_3[1], "prune"))
  return FUNC_6(VAR_2 - 1, VAR_3 + 1, VAR_4);
 if (!FUNC_8(VAR_3[1], "list"))
  return FUNC_3(VAR_2 - 1, VAR_3 + 1, VAR_4);
 if (!FUNC_8(VAR_3[1], "lock"))
  return FUNC_4(VAR_2 - 1, VAR_3 + 1, VAR_4);
 if (!FUNC_8(VAR_3[1], "unlock"))
  return FUNC_9(VAR_2 - 1, VAR_3 + 1, VAR_4);
 if (!FUNC_8(VAR_3[1], "move"))
  return FUNC_5(VAR_2 - 1, VAR_3 + 1, VAR_4);
 if (!FUNC_8(VAR_3[1], "remove"))
  return FUNC_7(VAR_2 - 1, VAR_3 + 1, VAR_4);
 FUNC_10(VAR_1, VAR_5);
}
