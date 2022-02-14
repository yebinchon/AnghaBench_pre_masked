
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch_parse_ctx ;
typedef int git_patch_options ;
typedef int git_patch ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,size_t,int const*) ;

int FUNC_4(
 git_patch **VAR_0,
 const char *VAR_1,
 size_t VAR_2,
 const git_patch_options *VAR_3)
{
 git_patch_parse_ctx *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4);

 VAR_5 = FUNC_1(VAR_0, VAR_4);

 FUNC_2(VAR_4);
 return VAR_5;
}
