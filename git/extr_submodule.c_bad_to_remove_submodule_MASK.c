
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct child_process {int git_cmd; int no_stdin; int out; char const* dir; int env_array; int args; } ;
typedef int ssize_t ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*,char*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct child_process*) ;
 int FUNC_10 (struct strbuf*,int,int) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (char const*) ;

int FUNC_13(const char *VAR_5, unsigned VAR_6)
{
 ssize_t VAR_7;
 struct child_process VAR_8 = VAR_0;
 struct strbuf VAR_9 = VAR_1;
 int VAR_10 = 0;

 if (!FUNC_5(VAR_5) || FUNC_7(VAR_5))
  return 0;

 if (!FUNC_12(VAR_5))
  return 1;

 FUNC_2(&VAR_8.args, "status", "--porcelain",
       "--ignore-submodules=none", ((void*)0));

 if (VAR_6 & VAR_4)
  FUNC_1(&VAR_8.args, "-uno");
 else
  FUNC_1(&VAR_8.args, "-uall");

 if (!(VAR_6 & VAR_3))
  FUNC_1(&VAR_8.args, "--ignored");

 FUNC_8(&VAR_8.env_array);
 VAR_8.git_cmd = 1;
 VAR_8.no_stdin = 1;
 VAR_8.out = -1;
 VAR_8.dir = VAR_5;
 if (FUNC_9(&VAR_8)) {
  if (VAR_6 & VAR_2)
   FUNC_4(FUNC_0("could not start 'git status' in submodule '%s'"),
    VAR_5);
  VAR_10 = -1;
  goto out;
 }

 VAR_7 = FUNC_10(&VAR_9, VAR_8.out, 1024);
 if (VAR_7 > 2)
  VAR_10 = 1;
 FUNC_3(VAR_8.out);

 if (FUNC_6(&VAR_8)) {
  if (VAR_6 & VAR_2)
   FUNC_4(FUNC_0("could not run 'git status' in submodule '%s'"),
    VAR_5);
  VAR_10 = -1;
 }
out:
 FUNC_11(&VAR_9);
 return VAR_10;
}
