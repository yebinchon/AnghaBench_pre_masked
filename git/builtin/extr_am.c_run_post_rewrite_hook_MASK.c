
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int stdout_to_stderr; char* trace2_hook_name; int in; int args; } ;
struct am_state {int dummy; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct am_state const*,char*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct child_process*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(const struct am_state *VAR_2)
{
 struct child_process VAR_3 = VAR_0;
 const char *VAR_4 = FUNC_3("post-rewrite");
 int VAR_5;

 if (!VAR_4)
  return 0;

 FUNC_1(&VAR_3.args, VAR_4);
 FUNC_1(&VAR_3.args, "rebase");

 VAR_3.in = FUNC_5(FUNC_0(VAR_2, "rewritten"), VAR_1);
 VAR_3.stdout_to_stderr = 1;
 VAR_3.trace2_hook_name = "post-rewrite";

 VAR_5 = FUNC_4(&VAR_3);

 FUNC_2(VAR_3.in);
 return VAR_5;
}
