
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rename_expected {int member_0; unsigned int* member_1; char const** member_2; char const** member_3; scalar_t__ idx; } ;
typedef int git_tree ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_index ;
typedef int git_diff_options ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_diff_find_options ;
typedef int git_diff ;
struct TYPE_8__ {int checkout_strategy; } ;
typedef TYPE_2__ git_checkout_options ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ,int *,int *,int *,struct rename_expected*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,char*) ;
 int FUNC_13 (int **,int *,char*,int *) ;
 int FUNC_14 (int **,int ) ;
 int FUNC_15 (int **,int ,char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 int VAR_7 ;
 int FUNC_18 (char*,int) ;

void FUNC_19(void)
{
 git_reference *VAR_8, *VAR_9;
 git_index *VAR_10;
 git_tree *VAR_11;
 git_checkout_options VAR_12 = VAR_1;
 git_diff *VAR_13;
 git_diff_options VAR_14 = VAR_5;
 git_diff_find_options VAR_15 = VAR_3;
 unsigned int VAR_16[] = { VAR_2, VAR_2 };
 const char *VAR_17[] = { "a.txt", "b.txt" };
 const char *VAR_18[] = { "c.txt", "d.txt" };
 struct rename_expected VAR_19 = { 2, VAR_16, VAR_17, VAR_18 };

 VAR_12.checkout_strategy = VAR_0;
 VAR_15.flags = VAR_4;

 FUNC_1(FUNC_12(&VAR_8, VAR_6, "HEAD"));
 FUNC_1(FUNC_13(
  &VAR_9, VAR_8, "refs/heads/renames_similar_two", ((void*)0)));
 FUNC_1(FUNC_2(VAR_6, &VAR_12));
 FUNC_1(FUNC_14(&VAR_10, VAR_6));

 FUNC_1(FUNC_17("renames/a.txt"));
 FUNC_1(FUNC_17("renames/b.txt"));

 FUNC_1(FUNC_9(VAR_10, "a.txt"));
 FUNC_1(FUNC_9(VAR_10, "b.txt"));

 FUNC_18("renames/c.txt", 7);
 FUNC_18("renames/d.txt", 8);

 FUNC_1(FUNC_7(VAR_10, "c.txt"));
 FUNC_1(FUNC_7(VAR_10, "d.txt"));

 FUNC_1(FUNC_10(VAR_10));

 FUNC_1(
  FUNC_15((git_object **)&VAR_11, VAR_6, "HEAD^{tree}"));

 FUNC_1(
  FUNC_6(&VAR_13, VAR_6, VAR_11, VAR_10, &VAR_14));

 FUNC_1(FUNC_3(VAR_13, &VAR_15));

 FUNC_1(FUNC_4(
  VAR_13, VAR_7, ((void*)0), ((void*)0), ((void*)0), &VAR_19));
 FUNC_0(VAR_19.idx > 0);

 FUNC_5(VAR_13);
 FUNC_16(VAR_11);
 FUNC_8(VAR_10);
 FUNC_11(VAR_8);
 FUNC_11(VAR_9);
}
