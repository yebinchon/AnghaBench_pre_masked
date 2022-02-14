
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slirp_pre_exec_data {int stdin_fd; int stdout_fd; } ;


 int FUNC_0 (int ,struct slirp_pre_exec_data*,char**) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(char **VAR_1, int VAR_2)
{
 struct slirp_pre_exec_data VAR_3;
 int VAR_4;

 VAR_3.stdin_fd = VAR_2;
 VAR_3.stdout_fd = VAR_2;
 VAR_4 = FUNC_0(VAR_0, &VAR_3, VAR_1);

 return VAR_4;
}
