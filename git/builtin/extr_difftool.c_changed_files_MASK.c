
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct path_entry {int entry; } ;
struct hashmap {int dummy; } ;
struct child_process {int no_stdin; int no_stdout; int no_stderr; int git_cmd; int clean_on_exit; char const* dir; char const** env; int out; scalar_t__ use_shell; int args; } ;
typedef int FILE ;


 struct child_process VAR_0 ;
 int FUNC_0 (struct path_entry*,int ,char*) ;
 struct strbuf VAR_1 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char const*,char*,char const*,char*,char*,char*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct child_process*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct hashmap*,int *) ;
 int FUNC_8 (int *,int ) ;
 int VAR_2 ;
 int FUNC_9 (struct child_process*) ;
 scalar_t__ FUNC_10 (struct child_process*) ;
 int FUNC_11 (struct strbuf*,char*,char const*) ;
 int FUNC_12 (struct strbuf*,int *) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (char*) ;
 int * FUNC_15 (int,char*) ;

__attribute__((used)) static void FUNC_16(struct hashmap *VAR_3, const char *VAR_4,
     const char *VAR_5)
{
 struct child_process VAR_6 = VAR_0;
 struct child_process VAR_7 = VAR_0;
 struct strbuf VAR_8 = VAR_1, VAR_9 = VAR_1;
 const char *VAR_10 = FUNC_1(FUNC_6()), *VAR_11[] = {
  ((void*)0), ((void*)0)
 };
 FILE *VAR_12;

 FUNC_11(&VAR_8, "GIT_INDEX_FILE=%s", VAR_4);
 VAR_11[0] = VAR_8.buf;

 FUNC_2(&VAR_6.args,
    "--git-dir", VAR_10, "--work-tree", VAR_5,
    "update-index", "--really-refresh", "-q",
    "--unmerged", ((void*)0));
 VAR_6.no_stdin = 1;
 VAR_6.no_stdout = 1;
 VAR_6.no_stderr = 1;
 VAR_6.git_cmd = 1;
 VAR_6.use_shell = 0;
 VAR_6.clean_on_exit = 1;
 VAR_6.dir = VAR_5;
 VAR_6.env = VAR_11;

 FUNC_9(&VAR_6);

 FUNC_2(&VAR_7.args,
    "--git-dir", VAR_10, "--work-tree", VAR_5,
    "diff-files", "--name-only", "-z", ((void*)0));
 VAR_7.no_stdin = 1;
 VAR_7.git_cmd = 1;
 VAR_7.use_shell = 0;
 VAR_7.clean_on_exit = 1;
 VAR_7.out = -1;
 VAR_7.dir = VAR_5;
 VAR_7.env = VAR_11;
 if (FUNC_10(&VAR_7))
  FUNC_3("could not obtain raw diff");
 VAR_12 = FUNC_15(VAR_7.out, "r");
 while (!FUNC_12(&VAR_9, VAR_12)) {
  struct path_entry *VAR_13;
  FUNC_0(VAR_13, VAR_2, VAR_9.buf);
  FUNC_8(&VAR_13->entry, FUNC_14(VAR_9.buf));
  FUNC_7(VAR_3, &VAR_13->entry);
 }
 FUNC_4(VAR_12);
 if (FUNC_5(&VAR_7))
  FUNC_3("diff-files did not exit properly");
 FUNC_13(&VAR_8);
 FUNC_13(&VAR_9);
}
