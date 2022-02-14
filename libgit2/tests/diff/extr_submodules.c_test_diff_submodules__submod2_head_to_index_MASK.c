
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_4__ {char* old_prefix; char* new_prefix; int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,char const**) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 git_diff_options VAR_3 = VAR_1;
 git_tree *VAR_4;
 git_diff *VAR_5 = ((void*)0);
 static const char *VAR_6[] = {
  "<SKIP>",
  "diff --git a/sm_added_and_uncommited b/sm_added_and_uncommited\nnew file mode 160000\nindex 0000000..4800958\n--- /dev/null\n+++ b/sm_added_and_uncommited\n@@ -0,0 +1 @@\n+Subproject commit 480095882d281ed676fe5b863569520e54a7d5c0\n",
  "<END>"
 };

 VAR_2 = FUNC_6();

 FUNC_1(FUNC_4(&VAR_4, VAR_2));

 VAR_3.flags = VAR_0;
 VAR_3.old_prefix = "a"; VAR_3.new_prefix = "b";

 FUNC_1(FUNC_3(&VAR_5, VAR_2, VAR_4, ((void*)0), &VAR_3));
 FUNC_0(VAR_5, VAR_6);
 FUNC_2(VAR_5);

 FUNC_5(VAR_4);
}
