
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_merge_options ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct merge_index_entry*,int) ;
 int FUNC_4 (int **,int ,int ,int ,int *) ;
 int VAR_3 ;

void FUNC_5(void)
{
 git_index *VAR_4;
 git_merge_options VAR_5 = VAR_2;

 struct merge_index_entry VAR_6[] = {
  { 0100644, "4026a6c83f39c56881c9ac62e7582db9e3d33a4f", 1, "test.txt" },
  { 0100644, "c3b1fb31424c98072542cc8e42b48c92e52f494a", 2, "test.txt" },
  { 0100644, "262f67de0de2e535a59ae1bc3c739601e98c354d", 3, "test.txt" },
 };

 FUNC_1(FUNC_4(&VAR_4, VAR_3, VAR_0, VAR_1, &VAR_5));

 FUNC_0(FUNC_3(VAR_4, VAR_6, 3));

 FUNC_2(VAR_4);
}
