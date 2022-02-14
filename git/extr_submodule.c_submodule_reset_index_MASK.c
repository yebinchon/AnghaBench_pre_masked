
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int git_cmd; int no_stdin; char const* dir; int args; int env_array; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int ,char const*) ;
 int FUNC_2 (int *,char*,char*,char*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct child_process*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_1)
{
 struct child_process VAR_2 = VAR_0;
 FUNC_6(&VAR_2.env_array);

 VAR_2.git_cmd = 1;
 VAR_2.no_stdin = 1;
 VAR_2.dir = VAR_1;

 FUNC_1(&VAR_2.args, "--super-prefix=%s%s/",
       FUNC_5(), VAR_1);
 FUNC_2(&VAR_2.args, "read-tree", "-u", "--reset", ((void*)0));

 FUNC_0(&VAR_2.args, FUNC_4());

 if (FUNC_7(&VAR_2))
  FUNC_3("could not reset submodule index");
}
