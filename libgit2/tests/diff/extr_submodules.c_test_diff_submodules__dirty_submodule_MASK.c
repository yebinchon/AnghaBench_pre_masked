
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; char* old_prefix; char* new_prefix; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,char const**) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 git_diff_options VAR_5 = VAR_3;
 git_diff *VAR_6 = ((void*)0);
 static const char *VAR_7[] = {
  "<SKIP>",
  ((void*)0),
  ((void*)0),
  "diff --git a/modified b/modified\nindex 092bfb9..452216e 100644\n--- a/modified\n+++ b/modified\n@@ -1 +1,2 @@\n-yo\n+changed\n+\n",
  "diff --git a/testrepo b/testrepo\nindex a65fedf..a65fedf 160000\n--- a/testrepo\n+++ b/testrepo\n@@ -1 +1 @@\n-Subproject commit a65fedf39aefe402d3bb6e24df4d4f5fe4547750\n+Subproject commit a65fedf39aefe402d3bb6e24df4d4f5fe4547750-dirty\n",
  ((void*)0),
  ((void*)0),
  "<END>"
 };

 VAR_4 = FUNC_6();

 FUNC_3("submodules/testrepo/README", "heyheyhey");
 FUNC_1("submodules/testrepo/all_new.txt", "never seen before");

 VAR_5.flags = VAR_0 |
  VAR_2 |
  VAR_1;
 VAR_5.old_prefix = "a"; VAR_5.new_prefix = "b";

 FUNC_2(FUNC_5(&VAR_6, VAR_4, ((void*)0), &VAR_5));
 FUNC_0(VAR_6, VAR_7);
 FUNC_4(VAR_6);
}
