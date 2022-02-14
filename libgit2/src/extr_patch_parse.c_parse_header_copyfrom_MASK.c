
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* delta; } ;
struct TYPE_7__ {int rename_old_path; TYPE_2__ base; } ;
typedef TYPE_3__ git_patch_parsed ;
typedef int git_patch_parse_ctx ;
struct TYPE_5__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(
 git_patch_parsed *VAR_1, git_patch_parse_ctx *VAR_2)
{
 VAR_1->base.delta->status = VAR_0;
 return FUNC_0(&VAR_1->rename_old_path, VAR_2);
}
