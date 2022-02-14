
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {char* ref_name; int new_oid; int old_oid; } ;
struct child_process {int no_stdin; int stdout_to_stderr; int err; char const** argv; char* trace2_hook_name; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int,int,int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct child_process*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (struct child_process*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct command *VAR_2)
{
 const char *VAR_3[5];
 struct child_process VAR_4 = VAR_0;
 int VAR_5;

 VAR_3[0] = FUNC_1("update");
 if (!VAR_3[0])
  return 0;

 VAR_3[1] = VAR_2->ref_name;
 VAR_3[2] = FUNC_3(&VAR_2->old_oid);
 VAR_3[3] = FUNC_3(&VAR_2->new_oid);
 VAR_3[4] = ((void*)0);

 VAR_4.no_stdin = 1;
 VAR_4.stdout_to_stderr = 1;
 VAR_4.err = VAR_1 ? -1 : 0;
 VAR_4.argv = VAR_3;
 VAR_4.trace2_hook_name = "update";

 VAR_5 = FUNC_4(&VAR_4);
 if (VAR_5)
  return VAR_5;
 if (VAR_1)
  FUNC_0(VAR_4.err, -1, ((void*)0));
 return FUNC_2(&VAR_4);
}
