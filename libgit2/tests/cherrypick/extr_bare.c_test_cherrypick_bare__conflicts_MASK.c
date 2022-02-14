
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_commit ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ,int *,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,struct merge_index_entry*,int) ;
 int VAR_0 ;

void FUNC_8(void)
{
 git_commit *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
 git_index *VAR_3 = ((void*)0);
 git_oid VAR_4, VAR_5;

 struct merge_index_entry VAR_6[] = {
  { 0100644, "242e7977ba73637822ffb265b46004b9b0e5153b", 0, "file1.txt" },
  { 0100644, "a58ca3fee5eb68b11adc2703e5843f968c9dad1e", 1, "file2.txt" },
  { 0100644, "bd6ffc8c6c41f0f85ff9e3d61c9479516bac0024", 2, "file2.txt" },
  { 0100644, "563f6473a3858f99b80e5f93c660512ed38e1e6f", 3, "file2.txt" },
  { 0100644, "28d9eb4208074ad1cc84e71ccc908b34573f05d2", 1, "file3.txt" },
  { 0100644, "1124c2c1ae07b26fded662d6c3f3631d9dc16f88", 2, "file3.txt" },
  { 0100644, "e233b9ed408a95e9d4b65fec7fc34943a556deb2", 3, "file3.txt" },
 };

 FUNC_6(&VAR_4, "bafbf6912c09505ac60575cd43d3f2aba3bd84d8");
 FUNC_1(FUNC_4(&VAR_1, VAR_0, &VAR_4));

 FUNC_6(&VAR_5, "e9b63f3655b2ad80c0ff587389b5a9589a3a7110");
 FUNC_1(FUNC_4(&VAR_2, VAR_0, &VAR_5));

 FUNC_1(FUNC_2(&VAR_3, VAR_0, VAR_2, VAR_1, 0, ((void*)0)));
 FUNC_0(FUNC_7(VAR_3, VAR_6, 7));

 FUNC_5(VAR_3);
 FUNC_3(VAR_1);
 FUNC_3(VAR_2);
}
