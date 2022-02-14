
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_index_entry {int dummy; } ;
struct iterator_compare_data {size_t member_1; int cnt; int idx; struct merge_index_entry* member_0; } ;
typedef int git_repository ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ,struct iterator_compare_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 int VAR_2 ;

void FUNC_7(
 git_repository *VAR_3,
 struct merge_index_entry *VAR_4,
 size_t VAR_5)
{
 git_index *VAR_6;
 git_iterator *VAR_7;
 git_iterator_options VAR_8 = VAR_1;
 struct iterator_compare_data VAR_9 = { VAR_4, VAR_5 };

 VAR_8.flags |= VAR_0;

 FUNC_1(FUNC_6(&VAR_6, VAR_3));
 FUNC_1(FUNC_3(&VAR_7, VAR_3, VAR_6, ((void*)0), &VAR_8));

 FUNC_1(FUNC_4(VAR_7, VAR_2, &VAR_9));
 FUNC_0(VAR_9.idx, VAR_9.cnt);

 FUNC_5(VAR_7);
 FUNC_2(VAR_6);
}
