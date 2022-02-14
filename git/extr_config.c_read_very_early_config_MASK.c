
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_options {int respect_includes; int ignore_repo; int ignore_worktree; int ignore_cmdline; int system_gently; int member_0; } ;
typedef int config_fn_t ;


 int FUNC_0 (int ,void*,int *,struct config_options*) ;

void FUNC_1(config_fn_t VAR_0, void *VAR_1)
{
 struct config_options VAR_2 = { 0 };

 VAR_2.respect_includes = 1;
 VAR_2.ignore_repo = 1;
 VAR_2.ignore_worktree = 1;
 VAR_2.ignore_cmdline = 1;
 VAR_2.system_gently = 1;

 FUNC_0(VAR_0, VAR_1, ((void*)0), &VAR_2);
}
