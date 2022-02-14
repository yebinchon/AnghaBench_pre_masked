
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int line_count; } ;
typedef TYPE_2__ git_patch_hunk ;
struct TYPE_12__ {int content_size; int context_size; int lines; int hunks; } ;
struct TYPE_14__ {TYPE_1__ base; } ;
typedef TYPE_3__ git_patch_generated ;
struct TYPE_15__ {scalar_t__ origin; scalar_t__ content_len; } ;
typedef TYPE_4__ git_diff_line ;
typedef int git_diff_hunk ;
typedef int git_diff_delta ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__ const*,int) ;

__attribute__((used)) static int FUNC_6(
 const git_diff_delta *VAR_4,
 const git_diff_hunk *VAR_5,
 const git_diff_line *VAR_6,
 void *VAR_7)
{
 git_patch_generated *VAR_8 = VAR_7;
 git_patch_hunk *VAR_9;
 git_diff_line *VAR_10;

 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 VAR_9 = FUNC_4(VAR_8->base.hunks);
 FUNC_2(VAR_9);

 VAR_10 = FUNC_3(VAR_8->base.lines);
 FUNC_0(VAR_10);

 FUNC_5(VAR_10, VAR_6, sizeof(*VAR_10));



 VAR_8->base.content_size += VAR_10->content_len;

 if (VAR_10->origin == VAR_0 ||
  VAR_10->origin == VAR_3)
  VAR_8->base.content_size += 1;
 else if (VAR_10->origin == VAR_1) {
  VAR_8->base.content_size += 1;
  VAR_8->base.context_size += VAR_10->content_len + 1;
 } else if (VAR_10->origin == VAR_2)
  VAR_8->base.context_size += VAR_10->content_len;

 VAR_9->line_count++;

 return 0;
}
