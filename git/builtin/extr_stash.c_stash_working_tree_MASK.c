
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct stash_info {int w_tree; int b_commit; int i_tree; } ;
struct TYPE_3__ {int pathspec; struct strbuf* format_callback_data; int format_callback; int output_format; } ;
struct rev_info {int prune_data; int pending; TYPE_1__ diffopt; } ;
struct pathspec {int dummy; } ;
struct index_state {int * member_0; } ;
struct child_process {int git_cmd; int env_array; int args; } ;
struct TYPE_4__ {int * buf; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct rev_info) ;
 int VAR_3 ;
 int FUNC_1 (struct rev_info*,int ,char*) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct pathspec const*) ;
 int FUNC_6 (struct index_state*) ;
 int FUNC_7 (struct rev_info*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (struct child_process*,int ,int ,int *,int ,int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int ,int ) ;
 scalar_t__ FUNC_14 (struct rev_info*,int ) ;
 int FUNC_15 (int *) ;
 TYPE_2__ VAR_4 ;
 int FUNC_16 (struct strbuf*) ;
 int VAR_5 ;
 scalar_t__ FUNC_17 (int *,struct index_state*,int *,int ,int *) ;

__attribute__((used)) static int FUNC_18(struct stash_info *VAR_6, const struct pathspec *VAR_7)
{
 int VAR_8 = 0;
 struct rev_info VAR_9;
 struct child_process VAR_10 = VAR_0;
 struct strbuf VAR_11 = VAR_2;
 struct index_state VAR_12 = { ((void*)0) };

 FUNC_7(&VAR_9, ((void*)0));
 FUNC_5(&VAR_9.prune_data, VAR_7);

 FUNC_15(VAR_4.buf);
 if (FUNC_13(&VAR_6->i_tree, 0, 0)) {
  VAR_8 = -1;
  goto done;
 }
 FUNC_15(((void*)0));

 VAR_9.diffopt.output_format = VAR_1;
 VAR_9.diffopt.format_callback = VAR_3;
 VAR_9.diffopt.format_callback_data = &VAR_11;

 if (FUNC_11(&VAR_9.diffopt.pathspec) < 0) {
  VAR_8 = -1;
  goto done;
 }

 FUNC_1(&VAR_9, FUNC_9(VAR_5, &VAR_6->b_commit),
      "");
 if (FUNC_14(&VAR_9, 0)) {
  VAR_8 = -1;
  goto done;
 }

 VAR_10.git_cmd = 1;
 FUNC_3(&VAR_10.args, "update-index",
    "--ignore-skip-worktree-entries",
    "-z", "--add", "--remove", "--stdin", ((void*)0));
 FUNC_2(&VAR_10.env_array, "GIT_INDEX_FILE=%s",
    VAR_4.buf);

 if (FUNC_10(&VAR_10, VAR_11.buf, VAR_11.len,
    ((void*)0), 0, ((void*)0), 0)) {
  VAR_8 = -1;
  goto done;
 }

 if (FUNC_17(&VAR_6->w_tree, &VAR_12, VAR_4.buf, 0,
    ((void*)0))) {
  VAR_8 = -1;
  goto done;
 }

done:
 FUNC_6(&VAR_12);
 FUNC_0(VAR_9);
 FUNC_8(&VAR_9.pending);
 FUNC_4(&VAR_9.prune_data);
 FUNC_16(&VAR_11);
 FUNC_12(VAR_4.buf);
 return VAR_8;
}
