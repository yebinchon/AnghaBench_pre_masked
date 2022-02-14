
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct replay_opts {int dummy; } ;
struct child_process {int git_cmd; int no_stdout; int no_stderr; int args; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct strbuf*,int ,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 int VAR_2 ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;

__attribute__((used)) static int FUNC_9(struct replay_opts *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 struct child_process VAR_5 = VAR_0;
 int VAR_6 = 0;

 if (!FUNC_4(&VAR_4, FUNC_5(), 1)) {
  FUNC_7(&VAR_4);
  return 0;
 }
 FUNC_8(&VAR_4);

 VAR_5.git_cmd = 1;
 VAR_5.no_stdout = 1;
 VAR_5.no_stderr = 1;
 FUNC_1(&VAR_5.args, "stash");
 FUNC_1(&VAR_5.args, "apply");
 FUNC_1(&VAR_5.args, VAR_4);
 if (!FUNC_6(&VAR_5))
  FUNC_3(VAR_2, "%s", FUNC_0("Applied autostash.\n"));
 else {
  struct child_process VAR_7 = VAR_0;

  VAR_7.git_cmd = 1;
  FUNC_1(&VAR_7.args, "stash");
  FUNC_1(&VAR_7.args, "store");
  FUNC_1(&VAR_7.args, "-m");
  FUNC_1(&VAR_7.args, "autostash");
  FUNC_1(&VAR_7.args, "-q");
  FUNC_1(&VAR_7.args, VAR_4);
  if (FUNC_6(&VAR_7))
   VAR_6 = FUNC_2(FUNC_0("cannot store %s"), VAR_4);
  else
   FUNC_3(VAR_2,
    "%s", FUNC_0("Applying autostash resulted in conflicts.\n"
      "Your changes are safe in the stash.\n"
      "You can run \"git stash pop\" or"
      " \"git stash drop\" at any time.\n"));
 }

 FUNC_7(&VAR_4);
 return VAR_6;
}
