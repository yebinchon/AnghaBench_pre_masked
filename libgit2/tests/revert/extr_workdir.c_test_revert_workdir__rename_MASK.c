
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct merge_name_entry {char* member_0; char* member_1; char* member_2; } ;
struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
struct TYPE_5__ {int rename_threshold; int flags; } ;
struct TYPE_6__ {TYPE_1__ merge_opts; } ;
typedef TYPE_2__ git_revert_options ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ,int *,TYPE_2__*) ;
 int FUNC_7 (int ,struct merge_index_entry*,int) ;
 int FUNC_8 (int ,struct merge_name_entry*,int) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_9(void)
{
 git_commit *VAR_5, *VAR_6;
 git_oid VAR_7, VAR_8;
 git_revert_options VAR_9 = VAR_2;

 struct merge_index_entry VAR_10[] = {
  { 0100644, "55acf326a69f0aab7a974ec53ffa55a50bcac14e", 1, "file4.txt" },
  { 0100644, "55acf326a69f0aab7a974ec53ffa55a50bcac14e", 2, "file5.txt" },
 };

 struct merge_name_entry VAR_11[] = {
  { "file4.txt", "file5.txt", "" },
 };

 VAR_9.merge_opts.flags |= VAR_0;
 VAR_9.merge_opts.rename_threshold = 50;

 FUNC_4(&VAR_7, "55568c8de5322ff9a95d72747a239cdb64a19965");
 FUNC_1(FUNC_3(&VAR_5, VAR_3, &VAR_7));
 FUNC_1(FUNC_5(VAR_3, (git_object *)VAR_5, VAR_1, ((void*)0)));

 FUNC_4(&VAR_8, "0aa8c7e40d342fff78d60b29a4ba8e993ed79c51");
 FUNC_1(FUNC_3(&VAR_6, VAR_3, &VAR_8));
 FUNC_1(FUNC_6(VAR_3, VAR_6, &VAR_9));

 FUNC_0(FUNC_7(VAR_4, VAR_10, 2));
 FUNC_0(FUNC_8(VAR_4, VAR_11, 1));

 FUNC_2(VAR_6);
 FUNC_2(VAR_5);
}
