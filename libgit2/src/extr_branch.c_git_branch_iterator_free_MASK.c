
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_branch_iterator ;
struct TYPE_3__ {int iter; } ;
typedef TYPE_1__ branch_iter ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(git_branch_iterator *VAR_0)
{
 branch_iter *VAR_1 = (branch_iter *) VAR_0;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_1->iter);
 FUNC_0(VAR_1);
}
