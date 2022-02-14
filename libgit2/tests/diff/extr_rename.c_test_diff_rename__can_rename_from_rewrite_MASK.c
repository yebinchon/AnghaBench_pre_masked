
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rename_expected {int member_0; unsigned int* member_1; char const** member_2; char const** member_3; scalar_t__ idx; scalar_t__ len; } ;
typedef int git_tree ;
typedef int git_object ;
typedef int git_index ;
typedef int git_diff_options ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_diff_find_options ;
typedef int git_diff ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int *,int *,int *,struct rename_expected*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int **,int ,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,char*) ;
 int VAR_7 ;

void FUNC_14(void)
{
 git_index *VAR_8;
 git_tree *VAR_9;
 git_diff *VAR_10;
 git_diff_options VAR_11 = VAR_5;
 git_diff_find_options VAR_12 = VAR_2;

 unsigned int VAR_13[] = { VAR_0, VAR_0 };
 const char *VAR_14[] = { "ikeepsix.txt", "songof7cities.txt" };
 const char *VAR_15[] = { "songof7cities.txt", "this-is-a-rename.txt" };
 struct rename_expected VAR_16 = { 2, VAR_13, VAR_14, VAR_15 };

 FUNC_1(FUNC_10(&VAR_8, VAR_6));

 FUNC_1(FUNC_13("renames/songof7cities.txt", "renames/this-is-a-rename.txt"));
 FUNC_1(FUNC_13("renames/ikeepsix.txt", "renames/songof7cities.txt"));

 FUNC_1(FUNC_8(VAR_8, "ikeepsix.txt"));

 FUNC_1(FUNC_6(VAR_8, "songof7cities.txt"));
 FUNC_1(FUNC_6(VAR_8, "this-is-a-rename.txt"));

 FUNC_1(FUNC_9(VAR_8));

 FUNC_1(
  FUNC_11((git_object **)&VAR_9, VAR_6, "HEAD^{tree}"));

 FUNC_1(
  FUNC_5(&VAR_10, VAR_6, VAR_9, VAR_8, &VAR_11));

 VAR_12.flags |= VAR_1 |
  VAR_4 |
  VAR_3;

 FUNC_1(FUNC_2(VAR_10, &VAR_12));

 FUNC_1(FUNC_3(
  VAR_10, VAR_7, ((void*)0), ((void*)0), ((void*)0), &VAR_16));

 FUNC_0(VAR_16.idx == VAR_16.len);

 FUNC_4(VAR_10);
 FUNC_12(VAR_9);
 FUNC_7(VAR_8);
}
