
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int opts; int parse_ctx; } ;
typedef TYPE_1__ git_patch_parse_ctx ;
typedef int const git_patch_options ;


 int const VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (int *,int const*,int) ;

git_patch_parse_ctx *FUNC_5(
 const char *VAR_1,
 size_t VAR_2,
 const git_patch_options *VAR_3)
{
 git_patch_parse_ctx *VAR_4;
 git_patch_options VAR_5 = VAR_0;

 if ((VAR_4 = FUNC_1(1, sizeof(git_patch_parse_ctx))) == ((void*)0))
  return ((void*)0);

 if ((FUNC_3(&VAR_4->parse_ctx, VAR_1, VAR_2)) < 0) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 if (VAR_3)
  FUNC_4(&VAR_4->opts, VAR_3, sizeof(git_patch_options));
 else
  FUNC_4(&VAR_4->opts, &VAR_5, sizeof(git_patch_options));

 FUNC_0(VAR_4);
 return VAR_4;
}
