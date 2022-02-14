
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_rebase_operation ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ inmemory; } ;
typedef TYPE_1__ git_rebase ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int **,TYPE_1__*) ;
 int FUNC_4 (int **,TYPE_1__*) ;

int FUNC_5(
 git_rebase_operation **VAR_1,
 git_rebase *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1 && VAR_2);

 if ((VAR_3 = FUNC_2(VAR_2)) < 0)
  return VAR_3;

 if (VAR_2->inmemory)
  VAR_3 = FUNC_3(VAR_1, VAR_2);
 else if (VAR_2->type == VAR_0)
  VAR_3 = FUNC_4(VAR_1, VAR_2);
 else
  FUNC_0();

 return VAR_3;
}
