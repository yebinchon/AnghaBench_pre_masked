
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct rebase_options {int dummy; } ;
struct child_process {int git_cmd; int no_stderr; int no_stdout; int no_stdin; int args; } ;
struct argv_array {int argv; } ;


 struct argv_array VAR_0 ;
 struct child_process VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char*,char*,char const*,char*,...) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,struct strbuf*) ;
 int FUNC_8 (struct child_process*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 char* FUNC_10 (char*,struct rebase_options*) ;
 int VAR_4 ;
 int FUNC_11 (struct strbuf*,char*) ;
 int FUNC_12 (struct strbuf*) ;

__attribute__((used)) static int FUNC_13(struct rebase_options *VAR_5)
{
 const char *VAR_6 = FUNC_10("autostash", VAR_5);
 struct strbuf VAR_7 = VAR_3;
 struct child_process VAR_8 = VAR_1;

 if (!FUNC_4(VAR_6))
  return 0;

 if (FUNC_7(VAR_6, &VAR_7))
  return FUNC_3(FUNC_0("Could not read '%s'"), VAR_6);

 FUNC_11(&VAR_7, "^0");
 FUNC_2(&VAR_8.args,
    "stash", "apply", VAR_7.buf, ((void*)0));
 VAR_8.git_cmd = 1;
 VAR_8.no_stderr = VAR_8.no_stdout =
  VAR_8.no_stdin = 1;
 if (!FUNC_8(&VAR_8))
  FUNC_6(FUNC_0("Applied autostash.\n"));
 else {
  struct argv_array VAR_9 = VAR_0;
  int VAR_10 = 0;

  FUNC_2(&VAR_9,
     "stash", "store", "-m", "autostash", "-q",
     VAR_7.buf, ((void*)0));
  if (FUNC_9(VAR_9.argv, VAR_2))
   VAR_10 = FUNC_3(FUNC_0("Cannot store %s"), VAR_7.buf);
  FUNC_1(&VAR_9);
  FUNC_12(&VAR_7);
  if (VAR_10)
   return VAR_10;

  FUNC_5(VAR_4,
   "%s", FUNC_0("Applying autostash resulted in conflicts.\n"
     "Your changes are safe in the stash.\n"
     "You can run \"git stash pop\" or \"git stash drop\" "
     "at any time.\n"));
 }

 FUNC_12(&VAR_7);
 return 0;
}
