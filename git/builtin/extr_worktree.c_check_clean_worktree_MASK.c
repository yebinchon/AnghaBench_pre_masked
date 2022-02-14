
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; } ;
struct child_process {int git_cmd; int out; int dir; int env; int args; } ;
struct argv_array {int argv; } ;
typedef int cp ;
typedef int buf ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*,char*,int ,int ) ;
 int FUNC_2 (int *,char*,char*,char*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char const*,...) ;
 int FUNC_6 (struct child_process*) ;
 int FUNC_7 (struct child_process*,int ,int) ;
 int FUNC_8 (struct child_process*) ;
 int FUNC_9 (struct worktree*) ;
 int FUNC_10 (int,char*,int) ;

__attribute__((used)) static void FUNC_11(struct worktree *VAR_3,
     const char *VAR_4)
{
 struct argv_array VAR_5 = VAR_0;
 struct child_process VAR_6;
 char VAR_7[1];
 int VAR_8;





 FUNC_9(VAR_3);

 FUNC_1(&VAR_5, "%s=%s/.git",
    VAR_1, VAR_3->path);
 FUNC_1(&VAR_5, "%s=%s",
    VAR_2, VAR_3->path);
 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 FUNC_2(&VAR_6.args, "status",
    "--porcelain", "--ignore-submodules=none",
    ((void*)0));
 VAR_6.env = VAR_5.argv;
 VAR_6.git_cmd = 1;
 VAR_6.dir = VAR_3->path;
 VAR_6.out = -1;
 VAR_8 = FUNC_8(&VAR_6);
 if (VAR_8)
  FUNC_5(FUNC_0("failed to run 'git status' on '%s'"),
     VAR_4);
 VAR_8 = FUNC_10(VAR_6.out, VAR_7, sizeof(VAR_7));
 if (VAR_8)
  FUNC_4(FUNC_0("'%s' contains modified or untracked files, use --force to delete it"),
      VAR_4);
 FUNC_3(VAR_6.out);
 VAR_8 = FUNC_6(&VAR_6);
 if (VAR_8)
  FUNC_5(FUNC_0("failed to run 'git status' on '%s', code %d"),
     VAR_4, VAR_8);
}
