
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_patch ;
struct TYPE_11__ {int count; char** strings; } ;
struct TYPE_12__ {TYPE_1__ pathspec; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;
typedef int git_config ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *,int *,TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int *,int ) ;
 int FUNC_15 (TYPE_3__*,int *) ;
 int FUNC_16 (int **,int ) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int ,char const*) ;

void FUNC_19(void)
{
 const char *VAR_3 = "26a125e";
 git_tree *VAR_4;
 git_config *VAR_5;
 git_diff *VAR_6;
 git_patch *VAR_7;
 git_buf VAR_8 = VAR_0;
 git_diff_options VAR_9 = VAR_1;
 char *VAR_10 = "staged_changes_modified_file";
 const char *VAR_11 = "diff --git c/staged_changes_modified_file i/staged_changes_modified_file\nindex 70bd944..906ee77 100644\n--- c/staged_changes_modified_file\n+++ i/staged_changes_modified_file\n@@ -1 +1,2 @@\n staged_changes_modified_file\n+staged_changes_modified_file\n";
 const char *VAR_12 = "diff --git i/staged_changes_modified_file w/staged_changes_modified_file\nindex 906ee77..011c344 100644\n--- i/staged_changes_modified_file\n+++ w/staged_changes_modified_file\n@@ -1,2 +1,3 @@\n staged_changes_modified_file\n staged_changes_modified_file\n+staged_changes_modified_file\n";
 const char *VAR_13 = "diff --git staged_changes_modified_file staged_changes_modified_file\nindex 906ee77..011c344 100644\n--- staged_changes_modified_file\n+++ staged_changes_modified_file\n@@ -1,2 +1,3 @@\n staged_changes_modified_file\n staged_changes_modified_file\n+staged_changes_modified_file\n";
 const char *VAR_14 = "diff --git staged_changes_modified_file staged_changes_modified_file\nindex 70bd9443ada0..906ee7711f4f 100644\n--- staged_changes_modified_file\n+++ staged_changes_modified_file\n@@ -1 +1,2 @@\n staged_changes_modified_file\n+staged_changes_modified_file\n";

 VAR_2 = FUNC_3("status");
 FUNC_2(FUNC_16(&VAR_5, VAR_2));
 VAR_4 = FUNC_18(VAR_2, VAR_3);
 VAR_9.pathspec.count = 1;
 VAR_9.pathspec.strings = &VAR_10;


 FUNC_2(FUNC_8(VAR_5, "diff.mnemonicprefix", "true"));

 FUNC_2(FUNC_12(&VAR_6, VAR_2, VAR_4, ((void*)0), &VAR_9));

 FUNC_0(1, (int)FUNC_11(VAR_6));
 FUNC_2(FUNC_14(&VAR_7, VAR_6, 0));
 FUNC_2(FUNC_15(&VAR_8, VAR_7));
 FUNC_1(VAR_11, VAR_8.ptr);

 FUNC_4(&VAR_8);
 FUNC_13(VAR_7);
 FUNC_9(VAR_6);

 FUNC_2(FUNC_10(&VAR_6, VAR_2, ((void*)0), &VAR_9));

 FUNC_0(1, (int)FUNC_11(VAR_6));
 FUNC_2(FUNC_14(&VAR_7, VAR_6, 0));
 FUNC_2(FUNC_15(&VAR_8, VAR_7));
 FUNC_1(VAR_12, VAR_8.ptr);

 FUNC_4(&VAR_8);
 FUNC_13(VAR_7);
 FUNC_9(VAR_6);


 FUNC_2(FUNC_8(VAR_5, "diff.noprefix", "true"));

 FUNC_2(FUNC_10(&VAR_6, VAR_2, ((void*)0), &VAR_9));

 FUNC_0(1, (int)FUNC_11(VAR_6));
 FUNC_2(FUNC_14(&VAR_7, VAR_6, 0));
 FUNC_2(FUNC_15(&VAR_8, VAR_7));
 FUNC_1(VAR_13, VAR_8.ptr);

 FUNC_4(&VAR_8);
 FUNC_13(VAR_7);
 FUNC_9(VAR_6);


 FUNC_2(FUNC_7(VAR_5, "core.abbrev", 12));

 FUNC_2(FUNC_12(&VAR_6, VAR_2, VAR_4, ((void*)0), &VAR_9));

 FUNC_0(1, (int)FUNC_11(VAR_6));
 FUNC_2(FUNC_14(&VAR_7, VAR_6, 0));
 FUNC_2(FUNC_15(&VAR_8, VAR_7));
 FUNC_1(VAR_14, VAR_8.ptr);

 FUNC_4(&VAR_8);
 FUNC_13(VAR_7);
 FUNC_9(VAR_6);

 FUNC_5(&VAR_8);
 FUNC_17(VAR_4);
 FUNC_6(VAR_5);
}
