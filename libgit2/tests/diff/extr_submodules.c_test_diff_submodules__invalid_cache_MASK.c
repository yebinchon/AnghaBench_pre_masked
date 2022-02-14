
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_5__ {int count; char** strings; } ;
struct TYPE_6__ {char* old_prefix; char* new_prefix; TYPE_1__ pathspec; int flags; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char const**) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int *,int,char*) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_2__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int *) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 () ;

void FUNC_19(void)
{
 git_diff_options VAR_7 = VAR_1;
 git_diff *VAR_8 = ((void*)0);
 git_submodule *VAR_9;
 char *VAR_10 = "sm_changed_head";
 git_repository *VAR_11;
 git_index *VAR_12;
 static const char *VAR_13[] = {
  "diff --git a/sm_changed_head b/sm_changed_head\nindex 4800958..3d9386c 160000\n--- a/sm_changed_head\n+++ b/sm_changed_head\n@@ -1 +1 @@\n-Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0\n+Subproject commit 3d9386c507f6b093471a3e324085657a3c2b4247\n",
  "<END>"
 };
 static const char *VAR_14[] = { "<END>" };
 static const char *VAR_15[] = {
  "diff --git a/sm_changed_head b/sm_changed_head\nindex 3d9386c..3d9386c 160000\n--- a/sm_changed_head\n+++ b/sm_changed_head\n@@ -1 +1 @@\n-Subproject commit 3d9386c507f6b093471a3e324085657a3c2b4247\n+Subproject commit 3d9386c507f6b093471a3e324085657a3c2b4247-dirty\n",
  "<END>"
 };
 static const char *VAR_16[] = {
  "diff --git a/sm_changed_head b/sm_changed_head\nindex 3d9386c..7002348 160000\n--- a/sm_changed_head\n+++ b/sm_changed_head\n@@ -1 +1 @@\n-Subproject commit 3d9386c507f6b093471a3e324085657a3c2b4247\n+Subproject commit 700234833f6ccc20d744b238612646be071acaae\n",
  "<END>"
 };
 static const char *VAR_17[] = {
  "diff --git a/sm_changed_head b/sm_changed_head\nindex 3d9386c..7002348 160000\n--- a/sm_changed_head\n+++ b/sm_changed_head\n@@ -1 +1 @@\n-Subproject commit 3d9386c507f6b093471a3e324085657a3c2b4247\n+Subproject commit 700234833f6ccc20d744b238612646be071acaae-dirty\n",
  "<END>"
 };

 VAR_6 = FUNC_18();

 VAR_7.flags = VAR_0;
 VAR_7.old_prefix = "a"; VAR_7.new_prefix = "b";
 VAR_7.pathspec.count = 1;
 VAR_7.pathspec.strings = &VAR_10;


 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_13);
 FUNC_5(VAR_8);


 FUNC_3(FUNC_13(&VAR_9, VAR_6, VAR_10));
 FUNC_3(FUNC_11(VAR_9, 1));

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_14);
 FUNC_5(VAR_8);


 FUNC_2("submod2/sm_changed_head/new_around_here", "hello");
 FUNC_16(VAR_6, FUNC_14(VAR_9), VAR_4);

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_15);
 FUNC_5(VAR_8);

 FUNC_16(VAR_6, FUNC_14(VAR_9), VAR_5);

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_14);
 FUNC_5(VAR_8);


 FUNC_1(
  "submod2/sm_changed_head/file_to_modify", "\nmore stuff\n");

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_15);
 FUNC_5(VAR_8);

 FUNC_12(VAR_9);

 FUNC_3(FUNC_13(&VAR_9, VAR_6, VAR_10));

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_15);
 FUNC_5(VAR_8);

 FUNC_16(VAR_6, FUNC_14(VAR_9), VAR_3);

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_14);
 FUNC_5(VAR_8);


 FUNC_3(FUNC_15(&VAR_11, VAR_9));
 FUNC_3(FUNC_10(&VAR_12, VAR_11));
 FUNC_3(FUNC_7(VAR_12, "file_to_modify"));

 FUNC_16(VAR_6, FUNC_14(VAR_9), VAR_5);

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_15);
 FUNC_5(VAR_8);

 FUNC_16(VAR_6, FUNC_14(VAR_9), VAR_3);

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_14);
 FUNC_5(VAR_8);


 FUNC_4(((void*)0), VAR_11, ((void*)0), 1372350000, "Move it");

 FUNC_16(VAR_6, FUNC_14(VAR_9), VAR_3);

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_16);
 FUNC_5(VAR_8);

 FUNC_16(VAR_6, FUNC_14(VAR_9), VAR_2);

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_14);
 FUNC_5(VAR_8);

 FUNC_16(VAR_6, FUNC_14(VAR_9), VAR_4);

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_17);
 FUNC_5(VAR_8);

 FUNC_17("submod2/sm_changed_head/new_around_here");

 FUNC_12(VAR_9);

 FUNC_3(FUNC_6(&VAR_8, VAR_6, ((void*)0), &VAR_7));
 FUNC_0(VAR_8, VAR_16);
 FUNC_5(VAR_8);

 FUNC_8(VAR_12);
 FUNC_9(VAR_11);
}
