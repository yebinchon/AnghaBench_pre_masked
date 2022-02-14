
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int should_write; } ;
typedef TYPE_1__ git_indexwriter ;
typedef int git_index ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int **,int *) ;

int FUNC_2(
 git_indexwriter *VAR_1,
 git_repository *VAR_2,
 unsigned int *VAR_3)
{
 git_index *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(&VAR_4, VAR_2)) < 0 ||
  (VAR_5 = FUNC_0(VAR_1, VAR_4)) < 0)
  return VAR_5;

 VAR_1->should_write = (*VAR_3 & VAR_0) == 0;
 *VAR_3 |= VAR_0;

 return 0;
}
