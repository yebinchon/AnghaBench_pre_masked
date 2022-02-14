
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_index_reuc_entry ;
struct TYPE_3__ {int dirty; int reuc; } ;
typedef TYPE_1__ git_index ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *) ;

int FUNC_5(git_index *VAR_0, size_t VAR_1)
{
 int VAR_2;
 git_index_reuc_entry *VAR_3;

 FUNC_0(FUNC_2(&VAR_0->reuc));

 VAR_3 = FUNC_1(&VAR_0->reuc, VAR_1);
 VAR_2 = FUNC_3(&VAR_0->reuc, VAR_1);

 if (!VAR_2)
  FUNC_4(VAR_3);

 VAR_0->dirty = 1;
 return VAR_2;
}
