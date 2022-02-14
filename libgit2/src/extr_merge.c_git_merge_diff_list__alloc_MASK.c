
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_5__ {int resolved; int conflicts; int staged; int pool; int * repo; } ;
typedef TYPE_1__ git_merge_diff_list ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;

git_merge_diff_list *FUNC_4(git_repository *VAR_0)
{
 git_merge_diff_list *VAR_1 = FUNC_0(1, sizeof(git_merge_diff_list));

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_1->repo = VAR_0;

 FUNC_2(&VAR_1->pool, 1);

 if (FUNC_3(&VAR_1->staged, 0, ((void*)0)) < 0 ||
  FUNC_3(&VAR_1->conflicts, 0, ((void*)0)) < 0 ||
  FUNC_3(&VAR_1->resolved, 0, ((void*)0)) < 0) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
