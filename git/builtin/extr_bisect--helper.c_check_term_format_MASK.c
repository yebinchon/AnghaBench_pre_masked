
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char*,char*,char*,...) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char*,char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;
 char *VAR_3 = FUNC_6("refs/bisect/%s", VAR_0);

 VAR_2 = FUNC_1(VAR_3, 0);
 FUNC_3(VAR_3);

 if (VAR_2)
  return FUNC_2(FUNC_0("'%s' is not a valid term"), VAR_0);

 if (FUNC_4(VAR_0, "help", "start", "skip", "next", "reset",
   "visualize", "view", "replay", "log", "run", "terms", ((void*)0)))
  return FUNC_2(FUNC_0("can't use the builtin command '%s' as a term"), VAR_0);







 if ((FUNC_5(VAR_1, "bad") && FUNC_4(VAR_0, "bad", "new", ((void*)0))) ||
   (FUNC_5(VAR_1, "good") && FUNC_4(VAR_0, "good", "old", ((void*)0))))
  return FUNC_2(FUNC_0("can't change the meaning of the term '%s'"), VAR_0);

 return 0;
}
