
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* old_prefix; char* new_prefix; scalar_t__ ignore_submodules; int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char const**) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 () ;

void FUNC_9(void)
{
 git_diff_options VAR_6 = VAR_2;
 git_diff *VAR_7 = ((void*)0);
 git_config *VAR_8;
 static const char *VAR_9[] = {
  "<SKIP>",
  "<UNTRACKED>",
  "<UNTRACKED>",
  "diff --git a/sm_changed_file b/sm_changed_file\nindex 4800958..4800958 160000\n--- a/sm_changed_file\n+++ b/sm_changed_file\n@@ -1 +1 @@\n-Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0\n+Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0-dirty\n",
  "diff --git a/sm_changed_head b/sm_changed_head\nindex 4800958..3d9386c 160000\n--- a/sm_changed_head\n+++ b/sm_changed_head\n@@ -1 +1 @@\n-Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0\n+Subproject commit 3d9386c507f6b093471a3e324085657a3c2b4247\n",
  "diff --git a/sm_changed_index b/sm_changed_index\nindex 4800958..4800958 160000\n--- a/sm_changed_index\n+++ b/sm_changed_index\n@@ -1 +1 @@\n-Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0\n+Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0-dirty\n",
  "diff --git a/sm_changed_untracked_file b/sm_changed_untracked_file\nindex 4800958..4800958 160000\n--- a/sm_changed_untracked_file\n+++ b/sm_changed_untracked_file\n@@ -1 +1 @@\n-Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0\n+Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0-dirty\n",
  "diff --git a/sm_missing_commits b/sm_missing_commits\nindex 4800958..5e49635 160000\n--- a/sm_missing_commits\n+++ b/sm_missing_commits\n@@ -1 +1 @@\n-Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0\n+Subproject commit 5e4963595a9774b90524d35a807169049de8ccad\n",
  "<END>"
 };
 static const char *VAR_10[] = {
  "<SKIP>",
  "<UNTRACKED>",
  "<UNTRACKED>",
  "<END>"
 };
 static const char *VAR_11[] = {
  "<SKIP>",
  "<UNTRACKED>",
  "<UNTRACKED>",
  "diff --git a/sm_changed_head b/sm_changed_head\nindex 4800958..3d9386c 160000\n--- a/sm_changed_head\n+++ b/sm_changed_head\n@@ -1 +1 @@\n-Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0\n+Subproject commit 3d9386c507f6b093471a3e324085657a3c2b4247\n",
  "diff --git a/sm_missing_commits b/sm_missing_commits\nindex 4800958..5e49635 160000\n--- a/sm_missing_commits\n+++ b/sm_missing_commits\n@@ -1 +1 @@\n-Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0\n+Subproject commit 5e4963595a9774b90524d35a807169049de8ccad\n",
  "<END>"
 };

 VAR_5 = FUNC_8();

 VAR_6.flags = VAR_1;
 VAR_6.old_prefix = "a"; VAR_6.new_prefix = "b";

 FUNC_1(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_9);
 FUNC_5(VAR_7);

 VAR_6.flags |= VAR_0;

 FUNC_1(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_10);
 FUNC_5(VAR_7);

 VAR_6.flags &= ~VAR_0;
 VAR_6.ignore_submodules = VAR_3;

 FUNC_1(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_10);
 FUNC_5(VAR_7);

 VAR_6.ignore_submodules = VAR_4;

 FUNC_1(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_11);
 FUNC_5(VAR_7);

 VAR_6.ignore_submodules = 0;
 FUNC_1(FUNC_7(&VAR_8, VAR_5));
 FUNC_1(FUNC_3(VAR_8, "diff.ignoreSubmodules", 0));

 FUNC_1(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_9);
 FUNC_5(VAR_7);

 FUNC_1(FUNC_3(VAR_8, "diff.ignoreSubmodules", 1));

 FUNC_1(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_10);
 FUNC_5(VAR_7);

 FUNC_1(FUNC_4(VAR_8, "diff.ignoreSubmodules", "none"));

 FUNC_1(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_9);
 FUNC_5(VAR_7);

 FUNC_1(FUNC_4(VAR_8, "diff.ignoreSubmodules", "dirty"));

 FUNC_1(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_11);
 FUNC_5(VAR_7);

 FUNC_2(VAR_8);
}
