
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* subprocess_start_fn ) (struct subprocess_entry*) ;
struct child_process {int use_shell; int in; int out; int clean_on_exit; char* trace2_child_class; int clean_on_exit_handler; int args; } ;
struct subprocess_entry {char const* cmd; int ent; struct child_process process; } ;
struct hashmap {int dummy; } ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (struct child_process*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (struct hashmap*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct child_process*) ;
 int FUNC_6 (char const*) ;
 int VAR_0 ;
 int FUNC_7 (struct hashmap*,struct subprocess_entry*) ;

int FUNC_8(struct hashmap *VAR_1, struct subprocess_entry *VAR_2, const char *VAR_3,
 subprocess_start_fn VAR_4)
{
 int VAR_5;
 struct child_process *VAR_6;

 VAR_2->cmd = VAR_3;
 VAR_6 = &VAR_2->process;

 FUNC_1(VAR_6);
 FUNC_0(&VAR_6->args, VAR_3);
 VAR_6->use_shell = 1;
 VAR_6->in = -1;
 VAR_6->out = -1;
 VAR_6->clean_on_exit = 1;
 VAR_6->clean_on_exit_handler = VAR_0;
 VAR_6->trace2_child_class = "subprocess";

 VAR_5 = FUNC_5(VAR_6);
 if (VAR_5) {
  FUNC_2("cannot fork to run subprocess '%s'", VAR_3);
  return VAR_5;
 }

 FUNC_4(&VAR_2->ent, FUNC_6(VAR_3));

 VAR_5 = VAR_4(VAR_2);
 if (VAR_5) {
  FUNC_2("initialization for subprocess '%s' failed", VAR_3);
  FUNC_7(VAR_1, VAR_2);
  return VAR_5;
 }

 FUNC_3(VAR_1, &VAR_2->ent);
 return 0;
}
