
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int id; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int ,char*,char const**,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,...) ;
 struct worktree* FUNC_5 (struct worktree**,char const*,char const*) ;
 int FUNC_6 (struct worktree**) ;
 struct worktree** FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (struct worktree*) ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_11 (int ,struct option*) ;
 char* FUNC_12 (struct worktree*) ;
 int VAR_0 ;
 int FUNC_13 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_14(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 const char *VAR_4 = "", *VAR_5;
 struct option VAR_6[] = {
  FUNC_2(0, "reason", &VAR_4, FUNC_0("string"),
      FUNC_0("reason for locking")),
  FUNC_1()
 };
 struct worktree **VAR_7, *VAR_8;

 VAR_1 = FUNC_10(VAR_1, VAR_2, VAR_3, VAR_6, VAR_0, 0);
 if (VAR_1 != 1)
  FUNC_11(VAR_0, VAR_6);

 VAR_7 = FUNC_7(0);
 VAR_8 = FUNC_5(VAR_7, VAR_3, VAR_2[0]);
 if (!VAR_8)
  FUNC_4(FUNC_3("'%s' is not a working tree"), VAR_2[0]);
 if (FUNC_9(VAR_8))
  FUNC_4(FUNC_3("The main working tree cannot be locked or unlocked"));

 VAR_5 = FUNC_12(VAR_8);
 if (VAR_5) {
  if (*VAR_5)
   FUNC_4(FUNC_3("'%s' is already locked, reason: %s"),
       VAR_2[0], VAR_5);
  FUNC_4(FUNC_3("'%s' is already locked"), VAR_2[0]);
 }

 FUNC_13(FUNC_8("worktrees/%s/locked", VAR_8->id),
     "%s", VAR_4);
 FUNC_6(VAR_7);
 return 0;
}
