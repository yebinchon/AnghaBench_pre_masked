
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {scalar_t__ out; scalar_t__ err; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct child_process*) ;
 int FUNC_2 (struct child_process*) ;

int FUNC_3(struct child_process *VAR_0)
{
 int VAR_1;

 if (VAR_0->out < 0 || VAR_0->err < 0)
  FUNC_0("run_command with a pipe can cause deadlock");

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;
 return FUNC_1(VAR_0);
}
