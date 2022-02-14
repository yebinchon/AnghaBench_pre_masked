
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
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
  { 0100644, "38c05a857e831a7e759d83778bfc85d003e21c45", 0, "file1.txt" },
  { 0100644, "a661b5dec1004e2c62654ded3762370c27cf266b", 0, "file2.txt" },
  { 0100644, "85a4a1d791973644f24c72f5e89420d3064cc452", 0, "file3.txt" },
  { 0100644, "9ccb9bf50c011fd58dcbaa65df917bf79539717f", 0, "orphan.txt" },
 };

 FUNC_6(&VAR_4, "d3d77487660ee3c0194ee01dc5eaf478782b1c7e");
 FUNC_1(FUNC_4(&VAR_1, VAR_0, &VAR_4));

 FUNC_6(&VAR_5, "74f06b5bfec6d33d7264f73606b57a7c0b963819");
 FUNC_1(FUNC_4(&VAR_2, VAR_0, &VAR_5));

 FUNC_1(FUNC_2(&VAR_3, VAR_0, VAR_2, VAR_1, 0, ((void*)0)));
 FUNC_0(FUNC_7(VAR_3, VAR_6, 4));

 FUNC_5(VAR_3);
 FUNC_3(VAR_1);
 FUNC_3(VAR_2);
}
