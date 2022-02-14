
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_index_reuc_entry ;
struct TYPE_5__ {int reuc; } ;
typedef TYPE_1__ git_index ;


 int FUNC_0 (TYPE_1__*) ;
 int const* FUNC_1 (int *,size_t) ;
 TYPE_1__* FUNC_2 (int *) ;

const git_index_reuc_entry *FUNC_3(
 git_index *VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_0(FUNC_2(&VAR_0->reuc));

 return FUNC_1(&VAR_0->reuc, VAR_1);
}
