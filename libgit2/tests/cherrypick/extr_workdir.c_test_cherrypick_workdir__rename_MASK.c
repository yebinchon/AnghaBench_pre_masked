
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_5__ {int rename_threshold; int flags; } ;
struct TYPE_6__ {TYPE_1__ merge_opts; } ;
typedef TYPE_2__ git_cherrypick_options ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int ,struct merge_index_entry*,int) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_8(void)
{
 git_commit *VAR_5, *VAR_6;
 git_oid VAR_7, VAR_8;
 git_cherrypick_options VAR_9 = VAR_0;

 struct merge_index_entry VAR_10[] = {
  { 0100644, "19c5c7207054604b69c84d08a7571ef9672bb5c2", 0, "file1.txt" },
  { 0100644, "a58ca3fee5eb68b11adc2703e5843f968c9dad1e", 0, "file2.txt" },
  { 0100644, "28d9eb4208074ad1cc84e71ccc908b34573f05d2", 0, "file3.txt.renamed" },
 };

 VAR_9.merge_opts.flags |= VAR_1;
 VAR_9.merge_opts.rename_threshold = 50;

 FUNC_5(&VAR_7, "cfc4f0999a8367568e049af4f72e452d40828a15");
 FUNC_1(FUNC_4(&VAR_5, VAR_3, &VAR_7));
 FUNC_1(FUNC_6(VAR_3, (git_object *)VAR_5, VAR_2, ((void*)0)));

 FUNC_5(&VAR_8, "2a26c7e88b285613b302ba76712bc998863f3cbc");
 FUNC_1(FUNC_4(&VAR_6, VAR_3, &VAR_8));
 FUNC_1(FUNC_2(VAR_3, VAR_6, &VAR_9));

 FUNC_0(FUNC_7(VAR_4, VAR_10, 3));

 FUNC_3(VAR_6);
 FUNC_3(VAR_5);
}
