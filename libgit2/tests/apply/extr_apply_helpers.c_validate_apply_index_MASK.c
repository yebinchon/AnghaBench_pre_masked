
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int dummy; } ;
struct iterator_compare_data {size_t member_1; int cnt; int idx; struct merge_index_entry* member_0; } ;
typedef int git_repository ;
typedef int git_iterator ;
typedef int git_index ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int *) ;
 int FUNC_4 (int *,int ,struct iterator_compare_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 int VAR_0 ;

void FUNC_7(
 git_repository *VAR_1,
 struct merge_index_entry *VAR_2,
 size_t VAR_3)
{
 git_index *VAR_4;
 git_iterator *VAR_5;
 struct iterator_compare_data VAR_6 = { VAR_2, VAR_3 };

 FUNC_1(FUNC_6(&VAR_4, VAR_1));
 FUNC_1(FUNC_3(&VAR_5, VAR_1, VAR_4, ((void*)0)));

 FUNC_1(FUNC_4(VAR_5, VAR_0, &VAR_6));
 FUNC_0(VAR_6.idx, VAR_6.cnt);

 FUNC_5(VAR_5);
 FUNC_2(VAR_4);
}
