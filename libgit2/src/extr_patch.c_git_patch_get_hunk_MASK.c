
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t line_count; int hunk; } ;
typedef TYPE_1__ git_patch_hunk ;
struct TYPE_7__ {int hunks; } ;
typedef TYPE_2__ git_patch ;
typedef int git_diff_hunk ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (char*) ;

int FUNC_3(
 const git_diff_hunk **VAR_0,
 size_t *VAR_1,
 git_patch *VAR_2,
 size_t VAR_3)
{
 git_patch_hunk *VAR_4;
 FUNC_0(VAR_2);

 VAR_4 = FUNC_1(VAR_2->hunks, VAR_3);

 if (!VAR_4) {
  if (VAR_0) *VAR_0 = ((void*)0);
  if (VAR_1) *VAR_1 = 0;
  return FUNC_2("hunk");
 }

 if (VAR_0) *VAR_0 = &VAR_4->hunk;
 if (VAR_1) *VAR_1 = VAR_4->line_count;
 return 0;
}
