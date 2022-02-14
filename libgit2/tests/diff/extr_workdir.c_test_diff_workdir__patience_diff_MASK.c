
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_index ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int *,int,char*) ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int *,int ) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 int FUNC_18 (int **,int ) ;

void FUNC_19(void)
{
 git_index *VAR_4;
 git_diff_options VAR_5 = VAR_1;
 git_diff *VAR_6 = ((void*)0);
 git_patch *VAR_7 = ((void*)0);
 git_buf VAR_8 = VAR_0;
 const char *VAR_9 = "diff --git a/test.txt b/test.txt\nindex 34a5acc..d52725f 100644\n--- a/test.txt\n+++ b/test.txt\n@@ -1,10 +1,7 @@\n When I wrote this\n I did not know\n-how to create\n-a patience diff\n I did not know\n how to create\n+a patience diff\n another problem\n-I did not know\n-how to create\n a minimal diff\n";
 const char *VAR_10 = "diff --git a/test.txt b/test.txt\nindex 34a5acc..d52725f 100644\n--- a/test.txt\n+++ b/test.txt\n@@ -1,10 +1,7 @@\n When I wrote this\n I did not know\n+I did not know\n how to create\n a patience diff\n-I did not know\n-how to create\n another problem\n-I did not know\n-how to create\n a minimal diff\n";

 VAR_3 = FUNC_5("empty_standard_repo");
 FUNC_7(VAR_3, "core.autocrlf", 1);
 FUNC_3(FUNC_18(&VAR_4, VAR_3));

 FUNC_2(
  "empty_standard_repo/test.txt",
  "When I wrote this\nI did not know\nhow to create\na patience diff\nI did not know\nhow to create\nanother problem\nI did not know\nhow to create\na minimal diff\n");
 FUNC_3(FUNC_13(VAR_4, "test.txt"));
 FUNC_6(((void*)0), VAR_3, ((void*)0), 1372350000, "Base");
 FUNC_14(VAR_4);

 FUNC_4(
  "empty_standard_repo/test.txt",
  "When I wrote this\nI did not know\nI did not know\nhow to create\na patience diff\nanother problem\na minimal diff\n");

 FUNC_3(FUNC_11(&VAR_6, VAR_3, ((void*)0), &VAR_5));
 FUNC_0(1, FUNC_12(VAR_6));
 FUNC_3(FUNC_16(&VAR_7, VAR_6, 0));
 FUNC_3(FUNC_17(&VAR_8, VAR_7));

 FUNC_1(VAR_9, VAR_8.ptr);
 FUNC_8(&VAR_8);
 FUNC_15(VAR_7);
 FUNC_10(VAR_6);

 VAR_5.flags |= VAR_2;

 FUNC_3(FUNC_11(&VAR_6, VAR_3, ((void*)0), &VAR_5));
 FUNC_0(1, FUNC_12(VAR_6));
 FUNC_3(FUNC_16(&VAR_7, VAR_6, 0));
 FUNC_3(FUNC_17(&VAR_8, VAR_7));

 FUNC_1(VAR_10, VAR_8.ptr);
 FUNC_8(&VAR_8);

 FUNC_9(&VAR_8);
 FUNC_15(VAR_7);
 FUNC_10(VAR_6);
}
