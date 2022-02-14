
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int repo; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4(git_submodule *VAR_1)
{
 int VAR_2;
 git_index *VAR_3;

 FUNC_0(VAR_1);

 if ((VAR_2 = FUNC_2(&VAR_3, VAR_1->repo)) < 0 ||
  (VAR_2 = FUNC_1(VAR_3, VAR_0)) < 0)
  return VAR_2;

 return FUNC_3(VAR_1, 1);
}
