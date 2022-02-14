
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int path; } ;
struct child_process {int git_cmd; int no_stdin; int no_stdout; int dir; int args; int env_array; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,char*,char*,char*,char*,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct child_process*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct child_process*) ;

__attribute__((used)) static int FUNC_5(const struct submodule *VAR_1)
{
 struct child_process VAR_2 = VAR_0;

 FUNC_3(&VAR_2.env_array);

 VAR_2.git_cmd = 1;
 FUNC_0(&VAR_2.args, "diff-index", "--quiet",
       "--cached", "HEAD", ((void*)0));
 VAR_2.no_stdin = 1;
 VAR_2.no_stdout = 1;
 VAR_2.dir = VAR_1->path;
 if (FUNC_4(&VAR_2))
  FUNC_1("could not recurse into submodule '%s'", VAR_1->path);

 return FUNC_2(&VAR_2);
}
