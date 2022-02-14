
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int git_cmd; int args; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct child_process*) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct child_process VAR_1 = VAR_0;





 VAR_1.git_cmd = 1;
 FUNC_0(&VAR_1.args, "reset");

 return FUNC_1(&VAR_1);
}
