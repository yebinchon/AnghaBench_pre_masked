
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * path; } ;
typedef TYPE_1__ git_index_reuc_entry ;
struct TYPE_7__ {int dirty; int reuc; } ;
typedef TYPE_2__ git_index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(
 git_index *VAR_2,
 git_index_reuc_entry *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2 && VAR_3 && VAR_3->path != ((void*)0));
 FUNC_0(FUNC_2(&VAR_2->reuc));

 VAR_4 = FUNC_1(&VAR_2->reuc, VAR_3, &VAR_1);
 VAR_2->dirty = 1;

 return VAR_4 == VAR_0 ? 0 : VAR_4;
}
