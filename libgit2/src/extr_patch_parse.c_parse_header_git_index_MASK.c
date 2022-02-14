
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_14__ {TYPE_3__* delta; } ;
struct TYPE_15__ {TYPE_4__ base; } ;
typedef TYPE_5__ git_patch_parsed ;
struct TYPE_16__ {int parse_ctx; } ;
typedef TYPE_6__ git_patch_parse_ctx ;
struct TYPE_12__ {void* mode; int id_abbrev; int id; } ;
struct TYPE_11__ {void* mode; int id_abbrev; int id; } ;
struct TYPE_13__ {TYPE_2__ old_file; TYPE_1__ new_file; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (char*,int *,int ) ;
 scalar_t__ FUNC_3 (void**,TYPE_6__*) ;
 scalar_t__ FUNC_4 (int *,int *,TYPE_6__*) ;

__attribute__((used)) static int FUNC_5(
 git_patch_parsed *VAR_0, git_patch_parse_ctx *VAR_1)
{
 char VAR_2;

 if (FUNC_4(&VAR_0->base.delta->old_file.id,
   &VAR_0->base.delta->old_file.id_abbrev, VAR_1) < 0 ||
  FUNC_1(&VAR_1->parse_ctx, "..") < 0 ||
  FUNC_4(&VAR_0->base.delta->new_file.id,
   &VAR_0->base.delta->new_file.id_abbrev, VAR_1) < 0)
  return -1;

 if (FUNC_2(&VAR_2, &VAR_1->parse_ctx, 0) == 0 && VAR_2 == ' ') {
  uint16_t VAR_3;

  FUNC_0(&VAR_1->parse_ctx, 1);

  if (FUNC_3(&VAR_3, VAR_1) < 0)
   return -1;

  if (!VAR_0->base.delta->new_file.mode)
   VAR_0->base.delta->new_file.mode = VAR_3;

  if (!VAR_0->base.delta->old_file.mode)
   VAR_0->base.delta->old_file.mode = VAR_3;
 }

 return 0;
}
