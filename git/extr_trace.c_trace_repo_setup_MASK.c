
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char const* FUNC_1 () ;
 char const* FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 char* FUNC_7 () ;

void FUNC_8(const char *VAR_1)
{
 const char *VAR_2;
 char *VAR_3;

 if (!FUNC_6(&VAR_0))
  return;

 VAR_3 = FUNC_7();

 if (!(VAR_2 = FUNC_3()))
  VAR_2 = "(null)";

 if (!VAR_1)
  VAR_1 = "(null)";

 FUNC_5(&VAR_0, "setup: git_dir: %s\n", FUNC_4(FUNC_2()));
 FUNC_5(&VAR_0, "setup: git_common_dir: %s\n", FUNC_4(FUNC_1()));
 FUNC_5(&VAR_0, "setup: worktree: %s\n", FUNC_4(VAR_2));
 FUNC_5(&VAR_0, "setup: cwd: %s\n", FUNC_4(VAR_3));
 FUNC_5(&VAR_0, "setup: prefix: %s\n", FUNC_4(VAR_1));

 FUNC_0(VAR_3);
}
