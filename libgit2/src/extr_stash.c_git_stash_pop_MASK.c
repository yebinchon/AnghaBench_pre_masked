
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_stash_apply_options ;
typedef int git_repository ;


 int FUNC_0 (int *,size_t,int const*) ;
 int FUNC_1 (int *,size_t) ;

int FUNC_2(
 git_repository *VAR_0,
 size_t VAR_1,
 const git_stash_apply_options *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2)) < 0)
  return VAR_3;

 return FUNC_1(VAR_0, VAR_1);
}
