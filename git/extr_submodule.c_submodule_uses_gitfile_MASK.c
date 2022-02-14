
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct child_process {char const** argv; int git_cmd; int no_stdin; int no_stderr; int no_stdout; char const* dir; int env_array; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct child_process*) ;
 int FUNC_3 (struct strbuf*,char*,char const*) ;
 int FUNC_4 (struct strbuf*) ;

int FUNC_5(const char *VAR_2)
{
 struct child_process VAR_3 = VAR_0;
 const char *VAR_4[] = {
  "submodule",
  "foreach",
  "--quiet",
  "--recursive",
  "test -f .git",
  ((void*)0),
 };
 struct strbuf VAR_5 = VAR_1;
 const char *VAR_6;

 FUNC_3(&VAR_5, "%s/.git", VAR_2);
 VAR_6 = FUNC_1(VAR_5.buf);
 if (!VAR_6) {
  FUNC_4(&VAR_5);
  return 0;
 }
 FUNC_4(&VAR_5);


 VAR_3.argv = VAR_4;
 FUNC_0(&VAR_3.env_array);
 VAR_3.git_cmd = 1;
 VAR_3.no_stdin = 1;
 VAR_3.no_stderr = 1;
 VAR_3.no_stdout = 1;
 VAR_3.dir = VAR_2;
 if (FUNC_2(&VAR_3))
  return 0;

 return 1;
}
