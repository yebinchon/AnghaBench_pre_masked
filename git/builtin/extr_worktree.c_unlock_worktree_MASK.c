
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int id; } ;
struct option {int dummy; } ;


 struct option FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,...) ;
 struct worktree* FUNC_3 (struct worktree**,char const*,char const*) ;
 int FUNC_4 (struct worktree**) ;
 struct worktree** FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (struct worktree*) ;
 int FUNC_8 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct option*) ;
 int FUNC_11 (struct worktree*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_12(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 struct option VAR_4[] = {
  FUNC_0()
 };
 struct worktree **VAR_5, *VAR_6;
 int VAR_7;

 VAR_1 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0, 0);
 if (VAR_1 != 1)
  FUNC_10(VAR_0, VAR_4);

 VAR_5 = FUNC_5(0);
 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_2[0]);
 if (!VAR_6)
  FUNC_2(FUNC_1("'%s' is not a working tree"), VAR_2[0]);
 if (FUNC_7(VAR_6))
  FUNC_2(FUNC_1("The main working tree cannot be locked or unlocked"));
 if (!FUNC_11(VAR_6))
  FUNC_2(FUNC_1("'%s' is not locked"), VAR_2[0]);
 VAR_7 = FUNC_9(FUNC_6("worktrees/%s/locked", VAR_6->id));
 FUNC_4(VAR_5);
 return VAR_7;
}
