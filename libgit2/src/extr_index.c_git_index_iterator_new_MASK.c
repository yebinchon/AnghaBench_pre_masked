
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * index; int snap; } ;
typedef TYPE_1__ git_index_iterator ;
typedef int git_index ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(
 git_index_iterator **VAR_0,
 git_index *VAR_1)
{
 git_index_iterator *VAR_2;
 int VAR_3;

 FUNC_1(VAR_0 && VAR_1);

 VAR_2 = FUNC_2(1, sizeof(git_index_iterator));
 FUNC_0(VAR_2);

 if ((VAR_3 = FUNC_4(&VAR_2->snap, VAR_1)) < 0) {
  FUNC_3(VAR_2);
  return VAR_3;
 }

 VAR_2->index = VAR_1;

 *VAR_0 = VAR_2;
 return 0;
}
