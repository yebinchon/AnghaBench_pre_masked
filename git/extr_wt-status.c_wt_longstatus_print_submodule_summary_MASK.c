
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int fp; scalar_t__ display_comment_prefix; scalar_t__ amend; int submodule_summary; int index_file; } ;
struct strbuf {int buf; scalar_t__ len; } ;
struct child_process {int git_cmd; int no_stdin; int args; int env_array; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct child_process*,struct strbuf*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct strbuf*,char*,size_t) ;
 int FUNC_7 (struct strbuf*,struct strbuf*) ;
 int FUNC_8 (struct strbuf*,char*) ;
 char* FUNC_9 (struct strbuf*,size_t*) ;
 int FUNC_10 (struct strbuf*) ;

__attribute__((used)) static void FUNC_11(struct wt_status *VAR_2, int VAR_3)
{
 struct child_process VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_1;
 struct strbuf VAR_6 = VAR_1;
 char *VAR_7;

 FUNC_2(&VAR_4.env_array, "GIT_INDEX_FILE=%s",
    VAR_2->index_file);

 FUNC_1(&VAR_4.args, "submodule");
 FUNC_1(&VAR_4.args, "summary");
 FUNC_1(&VAR_4.args, VAR_3 ? "--files" : "--cached");
 FUNC_1(&VAR_4.args, "--for-status");
 FUNC_1(&VAR_4.args, "--summary-limit");
 FUNC_2(&VAR_4.args, "%d", VAR_2->submodule_summary);
 if (!VAR_3)
  FUNC_1(&VAR_4.args, VAR_2->amend ? "HEAD^" : "HEAD");

 VAR_4.git_cmd = 1;
 VAR_4.no_stdin = 1;

 FUNC_3(&VAR_4, &VAR_5, 1024);


 if (VAR_5.len) {
  if (VAR_3)
   FUNC_8(&VAR_6, FUNC_0("Submodules changed but not updated:"));
  else
   FUNC_8(&VAR_6, FUNC_0("Submodule changes to be committed:"));
  FUNC_8(&VAR_6, "\n\n");
 }
 FUNC_7(&VAR_6, &VAR_5);
 FUNC_10(&VAR_5);

 if (VAR_2->display_comment_prefix) {
  size_t VAR_8;
  VAR_7 = FUNC_9(&VAR_6, &VAR_8);
  FUNC_6(&VAR_6, VAR_7, VAR_8);
  FUNC_5(VAR_7);
 }

 FUNC_4(VAR_6.buf, VAR_2->fp);
 FUNC_10(&VAR_6);
}
