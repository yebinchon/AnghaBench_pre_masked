
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ line_count; } ;
typedef TYPE_1__ git_patch_hunk ;
struct TYPE_7__ {int hunks; } ;
typedef TYPE_2__ git_patch ;


 int FUNC_0 (TYPE_2__ const*) ;
 TYPE_1__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (char*) ;

int FUNC_3(const git_patch *VAR_0, size_t VAR_1)
{
 git_patch_hunk *VAR_2;
 FUNC_0(VAR_0);

 if (!(VAR_2 = FUNC_1(VAR_0->hunks, VAR_1)))
  return FUNC_2("hunk");
 return (int)VAR_2->line_count;
}
