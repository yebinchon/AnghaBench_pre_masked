
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int dummy; } ;
struct strbuf {int dummy; } ;
struct repository {int gitdir; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char const*) ;
 int VAR_1 ;
 char* FUNC_6 (char*,int ,struct strbuf*) ;
 int FUNC_7 (struct repository*,char*,char**) ;
 char* FUNC_8 (struct repository*,char*) ;
 scalar_t__ FUNC_9 (struct repository*,int ,struct submodule const*) ;
 int FUNC_10 (struct strbuf*) ;
 struct submodule* FUNC_11 (int ,int *,char const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_12(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 const struct submodule *VAR_6;
 const char *VAR_7;
 char *VAR_8;
 struct repository VAR_9;

 if (VAR_3 != 2)
  FUNC_0("submodule--helper ensure-core-worktree <path>");

 VAR_7 = VAR_4[1];

 VAR_6 = FUNC_11(VAR_2, &VAR_1, VAR_7);
 if (!VAR_6)
  FUNC_0("We could get the submodule handle before?");

 if (FUNC_9(&VAR_9, VAR_2, VAR_6))
  FUNC_3(FUNC_1("could not get a repository handle for submodule '%s'"), VAR_7);

 if (!FUNC_7(&VAR_9, "core.worktree", &VAR_8)) {
  char *VAR_10, *VAR_11;
  const char *VAR_12;
  struct strbuf VAR_13 = VAR_0;

  VAR_10 = FUNC_8(&VAR_9, "config");

  VAR_11 = FUNC_2(VAR_7);
  VAR_12 = FUNC_6(VAR_11, VAR_9.gitdir, &VAR_13);

  FUNC_5(VAR_10, "core.worktree", VAR_12);

  FUNC_4(VAR_10);
  FUNC_4(VAR_11);
  FUNC_10(&VAR_13);
 }

 return 0;
}
