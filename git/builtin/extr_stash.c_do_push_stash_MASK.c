
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int * buf; } ;
struct stash_info {int i_tree; int w_commit; } ;
struct pathspec {scalar_t__ nr; } ;
struct child_process {int git_cmd; int args; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (char*) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,struct pathspec const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,char*,char*,...) ;
 int FUNC_4 (int *,int ,struct pathspec const*,char*) ;
 int FUNC_5 (struct pathspec const*,int,struct strbuf*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (struct pathspec const*,struct strbuf*,int,int,struct stash_info*,struct strbuf*,int) ;
 scalar_t__ FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct child_process*,int *,int ,struct strbuf*,int ,int *,int ) ;
 int FUNC_15 (int ,...) ;
 int FUNC_16 (int *) ;
 int VAR_6 ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,int ,int ) ;
 scalar_t__ FUNC_19 (char*,struct pathspec const*) ;
 scalar_t__ FUNC_20 (struct child_process*) ;
 int VAR_7 ;
 int FUNC_21 (struct strbuf*,char const*) ;
 int FUNC_22 (struct strbuf*) ;
 int VAR_8 ;
 char* FUNC_23 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_24(const struct pathspec *VAR_9, const char *VAR_10, int VAR_11,
    int VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15 = 0;
 struct stash_info VAR_16;
 struct strbuf VAR_17 = VAR_3;
 struct strbuf VAR_18 = VAR_3;
 struct strbuf VAR_19 = VAR_3;

 if (VAR_13 && VAR_12 == -1)
  VAR_12 = 1;

 if (VAR_13 && VAR_14) {
  FUNC_10(VAR_7, FUNC_0("Can't use --patch and --include-untracked"
         " or --all at the same time"));
  VAR_15 = -1;
  goto done;
 }

 FUNC_16(((void*)0));
 if (!VAR_14 && VAR_9->nr) {
  int VAR_20;
  char *VAR_21 = FUNC_23(VAR_9->nr, 1);

  for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++)
   FUNC_4(&VAR_8, VAR_4[VAR_20], VAR_9,
          VAR_21);

  if (FUNC_19(VAR_21, VAR_9)) {
   FUNC_10(VAR_7, FUNC_0("Did you forget to 'git add'?"));
   VAR_15 = -1;
   FUNC_11(VAR_21);
   goto done;
  }
  FUNC_11(VAR_21);
 }

 if (FUNC_18(VAR_2, 0, 0)) {
  VAR_15 = -1;
  goto done;
 }

 if (!FUNC_5(VAR_9, VAR_14, &VAR_19)) {
  if (!VAR_11)
   FUNC_15(FUNC_0("No local changes to save"));
  goto done;
 }

 if (!FUNC_17(VAR_6) && FUNC_7()) {
  VAR_15 = -1;
  if (!VAR_11)
   FUNC_10(VAR_7, FUNC_0("Cannot initialize stash"));
  goto done;
 }

 if (VAR_10)
  FUNC_21(&VAR_18, VAR_10);
 if (FUNC_8(VAR_9, &VAR_18, VAR_14, VAR_13,
       &VAR_16, &VAR_17, VAR_11)) {
  VAR_15 = -1;
  goto done;
 }

 if (FUNC_9(&VAR_16.w_commit, VAR_18.buf, 1)) {
  VAR_15 = -1;
  if (!VAR_11)
   FUNC_10(VAR_7, FUNC_0("Cannot save the current status"));
  goto done;
 }

 if (!VAR_11)
  FUNC_15(FUNC_0("Saved working directory and index state %s"),
     VAR_18.buf);

 if (!VAR_13) {
  if (VAR_14 && !VAR_9->nr) {
   struct child_process VAR_22 = VAR_0;

   VAR_22.git_cmd = 1;
   FUNC_3(&VAR_22.args, "clean", "--force",
      "--quiet", "-d", ((void*)0));
   if (VAR_14 == VAR_1)
    FUNC_2(&VAR_22.args, "-x");
   if (FUNC_20(&VAR_22)) {
    VAR_15 = -1;
    goto done;
   }
  }
  FUNC_6();
  if (VAR_9->nr) {
   struct child_process VAR_23 = VAR_0;
   struct child_process VAR_24 = VAR_0;
   struct child_process VAR_25 = VAR_0;
   struct strbuf VAR_26 = VAR_3;

   VAR_23.git_cmd = 1;
   FUNC_2(&VAR_23.args, "add");
   if (!VAR_14)
    FUNC_2(&VAR_23.args, "-u");
   if (VAR_14 == VAR_1)
    FUNC_2(&VAR_23.args, "--force");
   FUNC_2(&VAR_23.args, "--");
   FUNC_1(&VAR_23.args, VAR_9);
   if (FUNC_20(&VAR_23)) {
    VAR_15 = -1;
    goto done;
   }

   VAR_24.git_cmd = 1;
   FUNC_3(&VAR_24.args, "diff-index", "-p",
      "--cached", "--binary", "HEAD", "--",
      ((void*)0));
   FUNC_1(&VAR_24.args, VAR_9);
   if (FUNC_14(&VAR_24, ((void*)0), 0, &VAR_26, 0, ((void*)0), 0)) {
    VAR_15 = -1;
    goto done;
   }

   VAR_25.git_cmd = 1;
   FUNC_3(&VAR_25.args, "apply", "--index",
      "-R", ((void*)0));
   if (FUNC_14(&VAR_25, VAR_26.buf, VAR_26.len, ((void*)0), 0,
      ((void*)0), 0)) {
    VAR_15 = -1;
    goto done;
   }
  } else {
   struct child_process VAR_27 = VAR_0;
   VAR_27.git_cmd = 1;
   FUNC_3(&VAR_27.args, "reset", "--hard", "-q",
      "--no-recurse-submodules", ((void*)0));
   if (FUNC_20(&VAR_27)) {
    VAR_15 = -1;
    goto done;
   }
  }

  if (VAR_12 == 1 && !FUNC_12(&VAR_16.i_tree)) {
   struct child_process VAR_28 = VAR_0;

   VAR_28.git_cmd = 1;
   FUNC_3(&VAR_28.args, "checkout", "--no-overlay",
      FUNC_13(&VAR_16.i_tree), "--", ((void*)0));
   if (!VAR_9->nr)
    FUNC_2(&VAR_28.args, ":/");
   else
    FUNC_1(&VAR_28.args, VAR_9);
   if (FUNC_20(&VAR_28)) {
    VAR_15 = -1;
    goto done;
   }
  }
  goto done;
 } else {
  struct child_process VAR_29 = VAR_0;

  VAR_29.git_cmd = 1;
  FUNC_3(&VAR_29.args, "apply", "-R", ((void*)0));

  if (FUNC_14(&VAR_29, VAR_17.buf, VAR_17.len, ((void*)0), 0, ((void*)0), 0)) {
   if (!VAR_11)
    FUNC_10(VAR_7, FUNC_0("Cannot remove "
           "worktree changes"));
   VAR_15 = -1;
   goto done;
  }

  if (VAR_12 < 1) {
   struct child_process VAR_30 = VAR_0;

   VAR_30.git_cmd = 1;
   FUNC_3(&VAR_30.args, "reset", "-q", "--", ((void*)0));
   FUNC_1(&VAR_30.args, VAR_9);
   if (FUNC_20(&VAR_30)) {
    VAR_15 = -1;
    goto done;
   }
  }
  goto done;
 }

done:
 FUNC_22(&VAR_18);
 return VAR_15;
}
