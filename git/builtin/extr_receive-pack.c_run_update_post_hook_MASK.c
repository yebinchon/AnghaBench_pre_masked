
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct command {char const* ref_name; scalar_t__ did_not_exist; scalar_t__ error_string; struct command* next; } ;
struct TYPE_2__ {int argc; } ;
struct child_process {int no_stdin; int stdout_to_stderr; int err; char* trace2_hook_name; TYPE_1__ args; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (int,int,int *) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (struct child_process*) ;
 int FUNC_4 (struct child_process*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_5(struct command *VAR_2)
{
 struct command *VAR_3;
 struct child_process VAR_4 = VAR_0;
 const char *VAR_5;

 VAR_5 = FUNC_2("post-update");
 if (!VAR_5)
  return;

 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->error_string || VAR_3->did_not_exist)
   continue;
  if (!VAR_4.args.argc)
   FUNC_0(&VAR_4.args, VAR_5);
  FUNC_0(&VAR_4.args, VAR_3->ref_name);
 }
 if (!VAR_4.args.argc)
  return;

 VAR_4.no_stdin = 1;
 VAR_4.stdout_to_stderr = 1;
 VAR_4.err = VAR_1 ? -1 : 0;
 VAR_4.trace2_hook_name = "post-update";

 if (!FUNC_4(&VAR_4)) {
  if (VAR_1)
   FUNC_1(VAR_4.err, -1, ((void*)0));
  FUNC_3(&VAR_4);
 }
}
