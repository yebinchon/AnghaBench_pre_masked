
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int git_cmd; int err; int args; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct child_process*) ;
 scalar_t__ FUNC_4 (struct child_process*) ;

__attribute__((used)) static int FUNC_5(struct child_process *VAR_0)
{
 FUNC_0(&VAR_0->args, ".");
 VAR_0->git_cmd = 1;
 VAR_0->err = -1;
 if (FUNC_4(VAR_0))
  return -1;

 FUNC_1(0);
 FUNC_1(1);

 FUNC_2(VAR_0->err);

 return FUNC_3(VAR_0);
}
