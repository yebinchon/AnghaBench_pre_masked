
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t line_count; size_t line_start; } ;
typedef TYPE_1__ git_patch_hunk ;
struct TYPE_6__ {int lines; int hunks; } ;
typedef TYPE_2__ git_patch ;
typedef int git_diff_line ;


 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int ,size_t) ;
 int FUNC_2 (char*) ;

int FUNC_3(
 const git_diff_line **VAR_0,
 git_patch *VAR_1,
 size_t VAR_2,
 size_t VAR_3)
{
 git_patch_hunk *VAR_4;
 git_diff_line *VAR_5;

 FUNC_0(VAR_1);

 if (!(VAR_4 = FUNC_1(VAR_1->hunks, VAR_2))) {
  if (VAR_0) *VAR_0 = ((void*)0);
  return FUNC_2("hunk");
 }

 if (VAR_3 >= VAR_4->line_count ||
  !(VAR_5 = FUNC_1(
   VAR_1->lines, VAR_4->line_start + VAR_3))) {
  if (VAR_0) *VAR_0 = ((void*)0);
  return FUNC_2("line");
 }

 if (VAR_0) *VAR_0 = VAR_5;
 return 0;
}
