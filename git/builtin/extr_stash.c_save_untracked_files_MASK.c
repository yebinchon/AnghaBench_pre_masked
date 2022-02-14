
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct stash_info {int u_commit; int u_tree; } ;
struct index_state {int * member_0; } ;
struct child_process {int git_cmd; int env_array; int args; } ;
struct TYPE_2__ {int buf; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,char*,char*,char*,char*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_3 (struct index_state*) ;
 scalar_t__ FUNC_4 (struct child_process*,int ,int ,int *,int ,int *,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (struct strbuf*,char*,int ) ;
 int FUNC_7 (struct strbuf*) ;
 scalar_t__ FUNC_8 (int *,struct index_state*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct stash_info *VAR_3, struct strbuf *VAR_4,
    struct strbuf VAR_5)
{
 int VAR_6 = 0;
 struct strbuf VAR_7 = VAR_1;
 struct child_process VAR_8 = VAR_0;
 struct index_state VAR_9 = { ((void*)0) };

 VAR_8.git_cmd = 1;
 FUNC_1(&VAR_8.args, "update-index", "-z", "--add",
    "--remove", "--stdin", ((void*)0));
 FUNC_0(&VAR_8.env_array, "GIT_INDEX_FILE=%s",
    VAR_2.buf);

 FUNC_6(&VAR_7, "untracked files on %s\n", VAR_4->buf);
 if (FUNC_4(&VAR_8, VAR_5.buf, VAR_5.len, ((void*)0), 0,
    ((void*)0), 0)) {
  VAR_6 = -1;
  goto done;
 }

 if (FUNC_8(&VAR_3->u_tree, &VAR_9, VAR_2.buf, 0,
    ((void*)0))) {
  VAR_6 = -1;
  goto done;
 }

 if (FUNC_2(VAR_7.buf, VAR_7.len,
   &VAR_3->u_tree, ((void*)0), &VAR_3->u_commit, ((void*)0), ((void*)0))) {
  VAR_6 = -1;
  goto done;
 }

done:
 FUNC_3(&VAR_9);
 FUNC_7(&VAR_7);
 FUNC_5(VAR_2.buf);
 return VAR_6;
}
