
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_6__ {int count; char** strings; } ;
struct TYPE_7__ {int flags; char* old_prefix; char* new_prefix; TYPE_1__ pathspec; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char const**) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,TYPE_2__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ,int *,int *,TYPE_2__*) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;

void FUNC_11(void)
{
 git_diff_options VAR_6 = VAR_2;
 git_diff *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 char *VAR_9 = "testrepo";
 static const char *VAR_10[] = {
  "<END>"
 };
 static const char *VAR_11[] = {
  "diff --git a/testrepo b/testrepo\nindex a65fedf..a65fedf 160000\n--- a/testrepo\n+++ b/testrepo\n@@ -1 +1 @@\n-Subproject commit a65fedf39aefe402d3bb6e24df4d4f5fe4547750\n+Subproject commit a65fedf39aefe402d3bb6e24df4d4f5fe4547750-dirty\n",
  "<END>"
 };

 VAR_5 = FUNC_10();

 VAR_6.flags = VAR_1 |
  VAR_4 |
  VAR_3 |
  VAR_0;
 VAR_6.old_prefix = "a"; VAR_6.new_prefix = "b";
 VAR_6.pathspec.count = 1;
 VAR_6.pathspec.strings = &VAR_9;

 FUNC_2(FUNC_5(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_10);
 FUNC_4(VAR_7);

 FUNC_3("submodules/testrepo/README", "heyheyhey");
 FUNC_1("submodules/testrepo/all_new.txt", "never seen before");

 FUNC_2(FUNC_5(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_11);

 {
  git_tree *VAR_12;

  FUNC_2(FUNC_8(&VAR_12, VAR_5));
  FUNC_2(FUNC_7(&VAR_8, VAR_5, VAR_12, ((void*)0), &VAR_6));
  FUNC_2(FUNC_6(VAR_7, VAR_8));
  FUNC_4(VAR_8);
  FUNC_9(VAR_12);

  FUNC_0(VAR_7, VAR_11);
 }

 FUNC_4(VAR_7);

 FUNC_2(FUNC_5(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_0(VAR_7, VAR_11);
 FUNC_4(VAR_7);
}
