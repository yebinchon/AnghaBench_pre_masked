
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct stash_info {int w_commit; int w_tree; int i_commit; int u_commit; int i_tree; int b_commit; } ;
struct pathspec {int dummy; } ;
struct commit_list {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pathspec const*,int,struct strbuf*) ;
 int FUNC_2 (struct commit*,struct commit_list**) ;
 scalar_t__ FUNC_3 (int ,int ,int *,struct commit_list*,int *,int *,int *) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 struct commit* FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,struct commit*,struct strbuf*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;
 char* FUNC_12 (char*,int ,int *,int*) ;
 scalar_t__ FUNC_13 (struct stash_info*,struct strbuf*,struct strbuf) ;
 int FUNC_14 (struct stash_info*,struct pathspec const*,struct strbuf*,int) ;
 scalar_t__ FUNC_15 (struct stash_info*,struct pathspec const*) ;
 int VAR_5 ;
 int FUNC_16 (struct strbuf*,char*,char const*,...) ;
 int FUNC_17 (struct strbuf*,int ,char*,char const*) ;
 int FUNC_18 (struct strbuf*) ;
 char* FUNC_19 (char const*,char) ;
 int VAR_6 ;
 scalar_t__ FUNC_20 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_21(const struct pathspec *VAR_7, struct strbuf *VAR_8,
      int VAR_9, int VAR_10,
      struct stash_info *VAR_11, struct strbuf *VAR_12,
      int VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 const char *VAR_17 = ((void*)0);
 const char *VAR_18 = ((void*)0);
 const char *VAR_19 = "(no branch)";
 struct commit *VAR_20 = ((void*)0);
 struct commit_list *VAR_21 = ((void*)0);
 struct strbuf VAR_22 = VAR_4;
 struct strbuf VAR_23 = VAR_4;
 struct strbuf VAR_24 = VAR_4;

 FUNC_9("git stash", "git@stash");

 FUNC_10(((void*)0));
 if (FUNC_11(VAR_2, 0, 0) < 0) {
  VAR_14 = -1;
  goto done;
 }

 if (FUNC_6("HEAD", &VAR_11->b_commit)) {
  if (!VAR_13)
   FUNC_5(VAR_5, FUNC_0("You do not have "
          "the initial commit yet"));
  VAR_14 = -1;
  goto done;
 } else {
  VAR_20 = FUNC_7(VAR_6, &VAR_11->b_commit);
 }

 if (!FUNC_1(VAR_7, VAR_9, &VAR_24)) {
  VAR_14 = 1;
  goto done;
 }

 VAR_18 = FUNC_12("HEAD", 0, ((void*)0), &VAR_15);
 if (VAR_15 & VAR_3)
  VAR_19 = FUNC_19(VAR_18, '/') + 1;
 VAR_17 = FUNC_4(&VAR_20->object.oid,
          VAR_1);
 FUNC_16(&VAR_22, "%s: %s ", VAR_19, VAR_17);
 FUNC_8(VAR_0, VAR_20, &VAR_22);

 FUNC_16(&VAR_23, "index on %s\n", VAR_22.buf);
 FUNC_2(VAR_20, &VAR_21);
 if (FUNC_20(&VAR_11->i_tree, 0, ((void*)0)) ||
     FUNC_3(VAR_23.buf, VAR_23.len,
   &VAR_11->i_tree, VAR_21, &VAR_11->i_commit, ((void*)0), ((void*)0))) {
  if (!VAR_13)
   FUNC_5(VAR_5, FUNC_0("Cannot save the current "
          "index state"));
  VAR_14 = -1;
  goto done;
 }

 if (VAR_9) {
  if (FUNC_13(VAR_11, &VAR_22, VAR_24)) {
   if (!VAR_13)
    FUNC_5(VAR_5, FUNC_0("Cannot save "
           "the untracked files"));
   VAR_14 = -1;
   goto done;
  }
  VAR_16 = 1;
 }
 if (VAR_10) {
  VAR_14 = FUNC_14(VAR_11, VAR_7, VAR_12, VAR_13);
  if (VAR_14 < 0) {
   if (!VAR_13)
    FUNC_5(VAR_5, FUNC_0("Cannot save the current "
           "worktree state"));
   goto done;
  } else if (VAR_14 > 0) {
   goto done;
  }
 } else {
  if (FUNC_15(VAR_11, VAR_7)) {
   if (!VAR_13)
    FUNC_5(VAR_5, FUNC_0("Cannot save the current "
           "worktree state"));
   VAR_14 = -1;
   goto done;
  }
 }

 if (!VAR_8->len)
  FUNC_16(VAR_8, "WIP on %s", VAR_22.buf);
 else
  FUNC_17(VAR_8, 0, "On %s: ", VAR_19);





 VAR_21 = ((void*)0);
 if (VAR_16)
  FUNC_2(FUNC_7(VAR_6,
       &VAR_11->u_commit),
       &VAR_21);
 FUNC_2(FUNC_7(VAR_6, &VAR_11->i_commit),
      &VAR_21);
 FUNC_2(VAR_20, &VAR_21);

 if (FUNC_3(VAR_8->buf, VAR_8->len, &VAR_11->w_tree,
   VAR_21, &VAR_11->w_commit, ((void*)0), ((void*)0))) {
  if (!VAR_13)
   FUNC_5(VAR_5, FUNC_0("Cannot record "
          "working tree state"));
  VAR_14 = -1;
  goto done;
 }

done:
 FUNC_18(&VAR_23);
 FUNC_18(&VAR_22);
 FUNC_18(&VAR_24);
 return VAR_14;
}
