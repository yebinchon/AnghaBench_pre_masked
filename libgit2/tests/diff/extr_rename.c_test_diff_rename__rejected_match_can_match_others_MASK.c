
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct rename_expected {int member_0; unsigned int* member_1; char const** member_2; char const** member_3; } ;
typedef int git_tree ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_index ;
typedef int git_diff_options ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_1__ git_diff_find_options ;
typedef int git_diff ;
struct TYPE_13__ {int checkout_strategy; } ;
typedef TYPE_2__ git_checkout_options ;
struct TYPE_14__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int ,int *,int *,int *,struct rename_expected*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int *,int *) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*,char*,int,int) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,char*) ;
 int FUNC_16 (int **,int *,char*,int *) ;
 int FUNC_17 (int **,int ) ;
 int FUNC_18 (int **,int ,char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char*) ;
 char* FUNC_21 (int ,char*) ;
 int VAR_10 ;

void FUNC_22(void)
{
 git_reference *VAR_11, *VAR_12;
 git_index *VAR_13;
 git_tree *VAR_14;
 git_checkout_options VAR_15 = VAR_2;
 git_diff *VAR_16;
 git_diff_options VAR_17 = VAR_6;
 git_diff_find_options VAR_18 = VAR_4;
 git_buf VAR_19 = VAR_0, VAR_20 = VAR_0;
 unsigned int VAR_21[] = { VAR_3, VAR_3 };
 const char *VAR_22[] = { "Class1.cs", "Class2.cs" };
 const char *VAR_23[] = { "ClassA.cs", "ClassB.cs" };
 struct rename_expected VAR_24 = { 2, VAR_21, VAR_22, VAR_23 };
 char *VAR_25;

 VAR_15.checkout_strategy = VAR_1;
 VAR_18.flags = VAR_5;

 FUNC_1(FUNC_15(&VAR_11, VAR_9, "HEAD"));
 FUNC_1(FUNC_16(
  &VAR_12, VAR_11, "refs/heads/renames_similar", ((void*)0)));
 FUNC_1(FUNC_3(VAR_9, &VAR_15));
 FUNC_1(FUNC_17(&VAR_13, VAR_9));

 FUNC_1(FUNC_8(&VAR_19, "renames/Class1.cs"));
 FUNC_1(FUNC_8(&VAR_20, "renames/Class2.cs"));

 FUNC_1(FUNC_20("renames/Class1.cs"));
 FUNC_1(FUNC_20("renames/Class2.cs"));

 FUNC_1(FUNC_12(VAR_13, "Class1.cs"));
 FUNC_1(FUNC_12(VAR_13, "Class2.cs"));

 FUNC_0(VAR_25 = FUNC_21(VAR_19.ptr, "Class1"));
 VAR_25[5] = 'A';

 FUNC_0(VAR_25 = FUNC_21(VAR_20.ptr, "Class2"));
 VAR_25[5] = 'B';

 FUNC_1(
  FUNC_9(&VAR_19, "renames/ClassA.cs", VAR_8|VAR_7, 0777));
 FUNC_1(
  FUNC_9(&VAR_20, "renames/ClassB.cs", VAR_8|VAR_7, 0777));

 FUNC_1(FUNC_10(VAR_13, "ClassA.cs"));
 FUNC_1(FUNC_10(VAR_13, "ClassB.cs"));

 FUNC_1(FUNC_13(VAR_13));

 FUNC_1(
  FUNC_18((git_object **)&VAR_14, VAR_9, "HEAD^{tree}"));

 FUNC_1(
  FUNC_7(&VAR_16, VAR_9, VAR_14, VAR_13, &VAR_17));

 FUNC_1(FUNC_4(VAR_16, &VAR_18));

 FUNC_1(FUNC_5(
  VAR_16, VAR_10, ((void*)0), ((void*)0), ((void*)0), &VAR_24));

 FUNC_6(VAR_16);
 FUNC_19(VAR_14);
 FUNC_11(VAR_13);
 FUNC_14(VAR_11);
 FUNC_14(VAR_12);
 FUNC_2(&VAR_19);
 FUNC_2(&VAR_20);
}
