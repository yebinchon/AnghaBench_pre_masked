
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slirp_pre_exec_data {int stdin_fd; int stdout_fd; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct slirp_pre_exec_data *VAR_1 = VAR_0;

 if (VAR_1->stdin_fd != -1)
  FUNC_0(VAR_1->stdin_fd, 0);
 if (VAR_1->stdout_fd != -1)
  FUNC_0(VAR_1->stdout_fd, 1);
}
