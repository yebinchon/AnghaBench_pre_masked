
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


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
 int VAR_3 ;
 int VAR_4 ;

void FUNC_8(void)
{
 git_commit *VAR_5, *VAR_6;
 git_oid VAR_7, VAR_8;
 git_revert_options VAR_9 = VAR_2;

 struct merge_index_entry VAR_10[] = {
  { 0100644, "747726e021bc5f44b86de60e3032fd6f9f1b8383", 0, "file1.txt" },
  { 0100644, "0ab09ea6d4c3634bdf6c221626d8b6f7dd890767", 0, "file2.txt" },
  { 0100644, "f4e107c230d08a60fb419d19869f1f282b272d9c", 0, "file3.txt" },
  { 0100644, "55acf326a69f0aab7a974ec53ffa55a50bcac14e", 3, "file4.txt" },
  { 0100644, "55acf326a69f0aab7a974ec53ffa55a50bcac14e", 1, "file5.txt" },
  { 0100644, "0f5bfcf58c558d865da6be0281d7795993646cee", 2, "file6.txt" },
 };

 VAR_9.merge_opts.flags |= VAR_0;
 VAR_9.merge_opts.rename_threshold = 50;

 FUNC_4(&VAR_7, "cef56612d71a6af8d8015691e4865f7fece905b5");
 FUNC_1(FUNC_3(&VAR_5, VAR_3, &VAR_7));
 FUNC_1(FUNC_5(VAR_3, (git_object *)VAR_5, VAR_1, ((void*)0)));

 FUNC_4(&VAR_8, "55568c8de5322ff9a95d72747a239cdb64a19965");
 FUNC_1(FUNC_3(&VAR_6, VAR_3, &VAR_8));
 FUNC_1(FUNC_6(VAR_3, VAR_6, &VAR_9));

 FUNC_0(FUNC_7(VAR_4, VAR_10, 6));

 FUNC_2(VAR_6);
 FUNC_2(VAR_5);
}
