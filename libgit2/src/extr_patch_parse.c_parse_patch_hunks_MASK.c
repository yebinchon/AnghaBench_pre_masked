
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* delta; int lines; int hunks; } ;
struct TYPE_18__ {TYPE_2__ base; } ;
typedef TYPE_3__ git_patch_parsed ;
struct TYPE_19__ {int parse_ctx; } ;
typedef TYPE_4__ git_patch_parse_ctx ;
struct TYPE_20__ {scalar_t__ line_count; int line_start; } ;
typedef TYPE_5__ git_patch_hunk ;
struct TYPE_16__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(
 git_patch_parsed *VAR_1,
 git_patch_parse_ctx *VAR_2)
{
 git_patch_hunk *VAR_3;
 int VAR_4 = 0;

 while (FUNC_3(&VAR_2->parse_ctx, "@@ -")) {
  VAR_3 = FUNC_1(VAR_1->base.hunks);
  FUNC_0(VAR_3);

  FUNC_4(VAR_3, 0, sizeof(git_patch_hunk));

  VAR_3->line_start = FUNC_2(VAR_1->base.lines);
  VAR_3->line_count = 0;

  if ((VAR_4 = FUNC_6(VAR_3, VAR_2)) < 0 ||
   (VAR_4 = FUNC_5(VAR_1, VAR_3, VAR_2)) < 0)
   goto done;
 }

 VAR_1->base.delta->flags |= VAR_0;

done:
 return VAR_4;
}
