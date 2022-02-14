
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int * argv; int pid; } ;


 int FUNC_0 (struct child_process*,int) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct child_process *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->pid, VAR_0->argv[0], 1);
 FUNC_0(VAR_0, VAR_1);
 return VAR_1;
}
