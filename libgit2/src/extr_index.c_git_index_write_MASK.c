
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_indexwriter ;
struct TYPE_5__ {scalar_t__ dirty; } ;
typedef TYPE_1__ git_index ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(git_index *VAR_1)
{
 git_indexwriter VAR_2 = VAR_0;
 int VAR_3;

 FUNC_3(VAR_1);

 if ((VAR_3 = FUNC_2(&VAR_2, VAR_1)) == 0 &&
  (VAR_3 = FUNC_1(&VAR_2)) == 0)
  VAR_1->dirty = 0;

 FUNC_0(&VAR_2);

 return VAR_3;
}
