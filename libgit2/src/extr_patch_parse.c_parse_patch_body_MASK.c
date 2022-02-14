
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_patch_parsed ;
struct TYPE_6__ {int parse_ctx; } ;
typedef TYPE_1__ git_patch_parse_ctx ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(
 git_patch_parsed *VAR_0, git_patch_parse_ctx *VAR_1)
{
 if (FUNC_0(&VAR_1->parse_ctx, "GIT binary patch"))
  return FUNC_1(VAR_0, VAR_1);
 else if (FUNC_0(&VAR_1->parse_ctx, "Binary files "))
  return FUNC_2(VAR_0, VAR_1);
 else
  return FUNC_3(VAR_0, VAR_1);
}
