
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_4__ {int file_flags; } ;
typedef TYPE_1__ git_merge_options ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct merge_index_entry*,int) ;
 int FUNC_4 (int **,int ,int ,int ,TYPE_1__*) ;
 int VAR_4 ;

void FUNC_5(void)
{
 git_index *VAR_5;
 git_merge_options VAR_6 = VAR_3;

 struct merge_index_entry VAR_7[] = {
  { 0100644, "a827eab4fd66ab37a6ebcfaa7b7e341abfd55947", 0, "test.txt" },
 };

 VAR_6.file_flags |= VAR_2;

 FUNC_1(FUNC_4(&VAR_5, VAR_4, VAR_0, VAR_1, &VAR_6));

 FUNC_0(FUNC_3(VAR_5, VAR_7, 1));

 FUNC_2(VAR_5);
}
