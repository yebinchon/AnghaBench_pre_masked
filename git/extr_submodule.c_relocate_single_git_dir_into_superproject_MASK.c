
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int name; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,char*,char*,char const*,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 () ;
 char* FUNC_5 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (char const*,int) ;
 int FUNC_8 (char const*,char*,char*) ;
 scalar_t__ FUNC_9 (char const*) ;
 int VAR_1 ;
 struct submodule* FUNC_10 (int ,int *,char const*) ;
 scalar_t__ FUNC_11 (char const*) ;
 int VAR_2 ;
 char* FUNC_12 (char*,char const*) ;

__attribute__((used)) static void FUNC_13(const char *VAR_3)
{
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 const char *VAR_7;
 const struct submodule *VAR_8;

 if (FUNC_11(VAR_3))
  FUNC_1(FUNC_0("relocate_gitdir for submodule '%s' with "
        "more than one worktree not supported"), VAR_3);

 VAR_4 = FUNC_12("%s/.git", VAR_3);
 if (FUNC_6(VAR_4))

  return;

 VAR_5 = FUNC_7(VAR_4, 1);

 VAR_8 = FUNC_10(VAR_2, &VAR_0, VAR_3);
 if (!VAR_8)
  FUNC_1(FUNC_0("could not lookup name for submodule '%s'"), VAR_3);

 VAR_7 = FUNC_5("modules/%s", VAR_8->name);
 if (FUNC_9(VAR_7) < 0)
  FUNC_1(FUNC_0("could not create directory '%s'"), VAR_7);
 VAR_6 = FUNC_7(VAR_7, 1);

 FUNC_2(VAR_1, FUNC_0("Migrating git directory of '%s%s' from\n'%s' to\n'%s'\n"),
  FUNC_4(), VAR_3,
  VAR_5, VAR_6);

 FUNC_8(VAR_3, VAR_5, VAR_6);

 FUNC_3(VAR_4);
 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
}
