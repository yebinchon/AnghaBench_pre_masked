
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parse_ctx; } ;
typedef TYPE_1__ git_patch_parse_ctx ;
typedef scalar_t__ git_off_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,int *,int) ;

__attribute__((used)) static int FUNC_2(int *VAR_0, git_patch_parse_ctx *VAR_1)
{
 git_off_t VAR_2;

 if (FUNC_1(&VAR_2, &VAR_1->parse_ctx, 10) < 0 || !FUNC_0(VAR_2))
  return -1;

 *VAR_0 = (int)VAR_2;
 return 0;
}
