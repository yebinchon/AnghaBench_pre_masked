
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_7__ {int file_favor; } ;
struct TYPE_6__ {int checkout_strategy; } ;
struct TYPE_8__ {TYPE_2__ merge_opts; TYPE_1__ checkout_opts; } ;
typedef TYPE_3__ git_cherrypick_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int ,struct merge_index_entry*,int) ;
 int FUNC_8 (int ,struct merge_index_entry*,int) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_9(void)
{
 git_commit *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 git_oid VAR_9, VAR_10;
 git_cherrypick_options VAR_11 = VAR_2;

 struct merge_index_entry VAR_12[] = {
  { 0100644, "242e7977ba73637822ffb265b46004b9b0e5153b", 0, "file1.txt" },
  { 0100644, "a58ca3fee5eb68b11adc2703e5843f968c9dad1e", 1, "file2.txt" },
  { 0100644, "bd6ffc8c6c41f0f85ff9e3d61c9479516bac0024", 2, "file2.txt" },
  { 0100644, "563f6473a3858f99b80e5f93c660512ed38e1e6f", 3, "file2.txt" },
  { 0100644, "28d9eb4208074ad1cc84e71ccc908b34573f05d2", 1, "file3.txt" },
  { 0100644, "1124c2c1ae07b26fded662d6c3f3631d9dc16f88", 2, "file3.txt" },
  { 0100644, "e233b9ed408a95e9d4b65fec7fc34943a556deb2", 3, "file3.txt" },
 };

 struct merge_index_entry VAR_13[] = {
  { 0100644, "242e7977ba73637822ffb265b46004b9b0e5153b", 0, "file1.txt" },
  { 0100644, "bd6ffc8c6c41f0f85ff9e3d61c9479516bac0024", 0, "file2.txt" },
  { 0100644, "1124c2c1ae07b26fded662d6c3f3631d9dc16f88", 0, "file3.txt" },
 };


 VAR_11.checkout_opts.checkout_strategy = VAR_0 | VAR_1;

 FUNC_5(&VAR_9, "bafbf6912c09505ac60575cd43d3f2aba3bd84d8");

 FUNC_1(FUNC_4(&VAR_7, VAR_5, &VAR_9));
 FUNC_1(FUNC_6(VAR_5, (git_object *)VAR_7, VAR_4, ((void*)0)));

 FUNC_5(&VAR_10, "e9b63f3655b2ad80c0ff587389b5a9589a3a7110");
 FUNC_1(FUNC_4(&VAR_8, VAR_5, &VAR_10));
 FUNC_1(FUNC_2(VAR_5, VAR_8, &VAR_11));

 FUNC_0(FUNC_7(VAR_6, VAR_12, 7));
 FUNC_0(FUNC_8(VAR_5, VAR_13, 3));


 VAR_11.merge_opts.file_favor = VAR_3;

 FUNC_1(FUNC_6(VAR_5, (git_object *)VAR_7, VAR_4, ((void*)0)));
 FUNC_1(FUNC_2(VAR_5, VAR_8, &VAR_11));

 FUNC_0(FUNC_7(VAR_6, VAR_13, 3));
 FUNC_0(FUNC_8(VAR_5, VAR_13, 3));

 FUNC_3(VAR_8);
 FUNC_3(VAR_7);
}
