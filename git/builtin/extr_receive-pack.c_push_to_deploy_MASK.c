
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {char const** argv; char const* dir; int no_stdin; int stdout_to_stderr; int git_cmd; int no_stdout; int env; } ;
struct argv_array {int argv; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (struct child_process*) ;
 char* FUNC_1 () ;
 char* FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (struct child_process*) ;

__attribute__((used)) static const char *FUNC_5(unsigned char *VAR_1,
      struct argv_array *VAR_2,
      const char *VAR_3)
{
 const char *VAR_4[] = {
  "update-index", "-q", "--ignore-submodules", "--refresh", ((void*)0)
 };
 const char *VAR_5[] = {
  "diff-files", "--quiet", "--ignore-submodules", "--", ((void*)0)
 };
 const char *VAR_6[] = {
  "diff-index", "--quiet", "--cached", "--ignore-submodules",
  ((void*)0), "--", ((void*)0)
 };
 const char *VAR_7[] = {
  "read-tree", "-u", "-m", ((void*)0), ((void*)0)
 };
 struct child_process VAR_8 = VAR_0;

 VAR_8.argv = VAR_4;
 VAR_8.env = VAR_2->argv;
 VAR_8.dir = VAR_3;
 VAR_8.no_stdin = 1;
 VAR_8.stdout_to_stderr = 1;
 VAR_8.git_cmd = 1;
 if (FUNC_4(&VAR_8))
  return "Up-to-date check failed";


 FUNC_0(&VAR_8);
 VAR_8.argv = VAR_5;
 VAR_8.env = VAR_2->argv;
 VAR_8.dir = VAR_3;
 VAR_8.no_stdin = 1;
 VAR_8.stdout_to_stderr = 1;
 VAR_8.git_cmd = 1;
 if (FUNC_4(&VAR_8))
  return "Working directory has unstaged changes";


 VAR_6[4] = FUNC_3() ? "HEAD" : FUNC_1();

 FUNC_0(&VAR_8);
 VAR_8.argv = VAR_6;
 VAR_8.env = VAR_2->argv;
 VAR_8.no_stdin = 1;
 VAR_8.no_stdout = 1;
 VAR_8.stdout_to_stderr = 0;
 VAR_8.git_cmd = 1;
 if (FUNC_4(&VAR_8))
  return "Working directory has staged changes";

 VAR_7[3] = FUNC_2(VAR_1);
 FUNC_0(&VAR_8);
 VAR_8.argv = VAR_7;
 VAR_8.env = VAR_2->argv;
 VAR_8.dir = VAR_3;
 VAR_8.no_stdin = 1;
 VAR_8.no_stdout = 1;
 VAR_8.stdout_to_stderr = 0;
 VAR_8.git_cmd = 1;
 if (FUNC_4(&VAR_8))
  return "Could not update working tree to new HEAD";

 return ((void*)0);
}
