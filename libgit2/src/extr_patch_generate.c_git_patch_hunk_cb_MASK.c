
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ line_count; int line_start; int hunk; } ;
typedef TYPE_2__ git_patch_hunk ;
struct TYPE_9__ {int lines; int header_size; int hunks; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
typedef TYPE_3__ git_patch_generated ;
struct TYPE_12__ {scalar_t__ header_len; } ;
typedef TYPE_4__ git_diff_hunk ;
typedef int git_diff_delta ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int const*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_4__ const*,int) ;

__attribute__((used)) static int FUNC_5(
 const git_diff_delta *VAR_0,
 const git_diff_hunk *VAR_1,
 void *VAR_2)
{
 git_patch_generated *VAR_3 = VAR_2;
 git_patch_hunk *VAR_4;

 FUNC_1(VAR_0);

 VAR_4 = FUNC_2(VAR_3->base.hunks);
 FUNC_0(VAR_4);

 FUNC_4(&VAR_4->hunk, VAR_1, sizeof(VAR_4->hunk));

 VAR_3->base.header_size += VAR_1->header_len;

 VAR_4->line_start = FUNC_3(VAR_3->base.lines);
 VAR_4->line_count = 0;

 return 0;
}
