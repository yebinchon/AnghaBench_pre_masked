
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int env_array; int args; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct child_process*,int ,int) ;

void FUNC_2(struct child_process *VAR_0)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->args);
 FUNC_0(&VAR_0->env_array);
}
