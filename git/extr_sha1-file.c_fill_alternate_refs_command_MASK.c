
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int use_shell; int git_cmd; int out; int env; int args; } ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*,char const**) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct child_process *VAR_1,
     const char *VAR_2)
{
 const char *VAR_3;

 if (!FUNC_3("core.alternateRefsCommand", &VAR_3)) {
  VAR_1->use_shell = 1;

  FUNC_0(&VAR_1->args, VAR_3);
  FUNC_0(&VAR_1->args, VAR_2);
 } else {
  VAR_1->git_cmd = 1;

  FUNC_1(&VAR_1->args, "--git-dir=%s", VAR_2);
  FUNC_0(&VAR_1->args, "for-each-ref");
  FUNC_0(&VAR_1->args, "--format=%(objectname)");

  if (!FUNC_3("core.alternateRefsPrefixes", &VAR_3)) {
   FUNC_0(&VAR_1->args, "--");
   FUNC_2(&VAR_1->args, VAR_3);
  }
 }

 VAR_1->env = VAR_0;
 VAR_1->out = -1;
}
