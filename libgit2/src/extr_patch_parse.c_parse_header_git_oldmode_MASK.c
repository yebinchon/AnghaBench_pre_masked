
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* delta; } ;
struct TYPE_9__ {TYPE_3__ base; } ;
typedef TYPE_4__ git_patch_parsed ;
typedef int git_patch_parse_ctx ;
struct TYPE_6__ {int mode; } ;
struct TYPE_7__ {TYPE_1__ old_file; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(
 git_patch_parsed *VAR_0, git_patch_parse_ctx *VAR_1)
{
 return FUNC_0(&VAR_0->base.delta->old_file.mode, VAR_1);
}
