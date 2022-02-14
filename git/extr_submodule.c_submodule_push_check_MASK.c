
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {char const* name; } ;
struct refspec {int raw_nr; char const** raw; } ;
struct child_process {int git_cmd; int no_stdin; int no_stdout; char const* dir; int env_array; int args; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct child_process*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, const char *VAR_2,
     const struct remote *VAR_3,
     const struct refspec *VAR_4)
{
 struct child_process VAR_5 = VAR_0;
 int VAR_6;

 FUNC_0(&VAR_5.args, "submodule--helper");
 FUNC_0(&VAR_5.args, "push-check");
 FUNC_0(&VAR_5.args, VAR_2);
 FUNC_0(&VAR_5.args, VAR_3->name);

 for (VAR_6 = 0; VAR_6 < VAR_4->raw_nr; VAR_6++)
  FUNC_0(&VAR_5.args, VAR_4->raw[VAR_6]);

 FUNC_2(&VAR_5.env_array);
 VAR_5.git_cmd = 1;
 VAR_5.no_stdin = 1;
 VAR_5.no_stdout = 1;
 VAR_5.dir = VAR_1;






 if (FUNC_3(&VAR_5))
  FUNC_1("process for submodule '%s' failed", VAR_1);
}
