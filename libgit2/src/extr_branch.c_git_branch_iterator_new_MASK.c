
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_branch_t ;
typedef int git_branch_iterator ;
struct TYPE_5__ {int iter; int flags; } ;
typedef TYPE_1__ branch_iter ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

int FUNC_4(
 git_branch_iterator **VAR_0,
 git_repository *VAR_1,
 git_branch_t VAR_2)
{
 branch_iter *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(branch_iter));
 FUNC_0(VAR_3);

 VAR_3->flags = VAR_2;

 if (FUNC_3(&VAR_3->iter, VAR_1) < 0) {
  FUNC_2(VAR_3);
  return -1;
 }

 *VAR_0 = (git_branch_iterator *) VAR_3;

 return 0;
}
