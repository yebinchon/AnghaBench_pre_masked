
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_stash_apply_progress_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

int FUNC_1(
 git_stash_apply_progress_t VAR_0,
 void *VAR_1)
{
 git_stash_apply_progress_t *VAR_2 = (git_stash_apply_progress_t *)VAR_1;

 FUNC_0((*VAR_2)+1, VAR_0);

 *VAR_2 = VAR_0;

 return 0;
}
