
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char const**) ;
 int VAR_1 ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int,char const**) ;
 int FUNC_7 (int,char const**) ;
 int FUNC_8 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_9 (int,char const**) ;
 int FUNC_10 (int,char const**) ;
 int FUNC_11 (int,char const**) ;
 int FUNC_12 (int,char const**) ;
 int FUNC_13 (int,char const**) ;
 int FUNC_14 (int,char const**) ;
 int FUNC_15 () ;
 int FUNC_16 (char const*,char*) ;
 int FUNC_17 (int,char const**) ;
 int FUNC_18 (int ,struct option*) ;
 int VAR_2 ;

int FUNC_19(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 struct option VAR_6[] = {
  FUNC_2(&VAR_2, FUNC_0("be verbose; must be placed before a subcommand")),
  FUNC_1()
 };
 int VAR_7;

 VAR_3 = FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6, VAR_1,
  VAR_0);

 if (VAR_3 < 1)
  VAR_7 = FUNC_15();
 else if (!FUNC_16(VAR_4[0], "add"))
  VAR_7 = FUNC_4(VAR_3, VAR_4);
 else if (!FUNC_16(VAR_4[0], "rename"))
  VAR_7 = FUNC_7(VAR_3, VAR_4);
 else if (!FUNC_16(VAR_4[0], "rm") || !FUNC_16(VAR_4[0], "remove"))
  VAR_7 = FUNC_10(VAR_3, VAR_4);
 else if (!FUNC_16(VAR_4[0], "set-head"))
  VAR_7 = FUNC_12(VAR_3, VAR_4);
 else if (!FUNC_16(VAR_4[0], "set-branches"))
  VAR_7 = FUNC_11(VAR_3, VAR_4);
 else if (!FUNC_16(VAR_4[0], "get-url"))
  VAR_7 = FUNC_6(VAR_3, VAR_4);
 else if (!FUNC_16(VAR_4[0], "set-url"))
  VAR_7 = FUNC_13(VAR_3, VAR_4);
 else if (!FUNC_16(VAR_4[0], "show"))
  VAR_7 = FUNC_14(VAR_3, VAR_4);
 else if (!FUNC_16(VAR_4[0], "prune"))
  VAR_7 = FUNC_9(VAR_3, VAR_4);
 else if (!FUNC_16(VAR_4[0], "update"))
  VAR_7 = FUNC_17(VAR_3, VAR_4);
 else {
  FUNC_5(FUNC_3("Unknown subcommand: %s"), VAR_4[0]);
  FUNC_18(VAR_1, VAR_6);
 }

 return VAR_7 ? 1 : 0;
}
