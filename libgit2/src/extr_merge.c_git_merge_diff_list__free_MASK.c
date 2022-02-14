
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; int resolved; int conflicts; int staged; } ;
typedef TYPE_1__ git_merge_diff_list ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(git_merge_diff_list *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(&VAR_0->staged);
 FUNC_2(&VAR_0->conflicts);
 FUNC_2(&VAR_0->resolved);
 FUNC_1(&VAR_0->pool);
 FUNC_0(VAR_0);
}
