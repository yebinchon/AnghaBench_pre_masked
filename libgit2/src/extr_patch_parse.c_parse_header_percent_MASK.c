
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int int64_t ;
struct TYPE_3__ {int parse_ctx; } ;
typedef TYPE_1__ git_patch_parse_ctx ;


 scalar_t__ FUNC_0 (int*,int *,int) ;
 scalar_t__ FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(uint16_t *VAR_0, git_patch_parse_ctx *VAR_1)
{
 int64_t VAR_2;

 if (FUNC_0(&VAR_2, &VAR_1->parse_ctx, 10) < 0)
  return -1;

 if (FUNC_1(&VAR_1->parse_ctx, "%") < 0)
  return -1;

 if (VAR_2 < 0 || VAR_2 > 100)
  return -1;

 *VAR_0 = (uint16_t)VAR_2;
 return 0;
}
