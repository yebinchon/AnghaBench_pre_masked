
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_patch ;
typedef int git_diff ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int ) ;
 int FUNC_11 (int *,int,int,int) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ,char const*) ;
 int FUNC_15 (char const*) ;

void FUNC_16(void)
{
 const char *VAR_2 = "26a125e";
 const char *VAR_3 = "735b6a2";
 git_tree *VAR_4, *VAR_5;
 git_diff *VAR_6;
 git_patch *VAR_7;
 git_buf VAR_8 = VAR_0;
 const char *VAR_9 = "diff --git a/subdir.txt b/subdir.txt\ndeleted file mode 100644\nindex e8ee89e..0000000\n--- a/subdir.txt\n+++ /dev/null\n@@ -1,2 +0,0 @@\n-Is it a bird?\n-Is it a plane?\n";

 VAR_1 = FUNC_4("status");

 VAR_4 = FUNC_14(VAR_1, VAR_2);
 VAR_5 = FUNC_14(VAR_1, VAR_3);

 FUNC_3(FUNC_8(&VAR_6, VAR_1, VAR_4, VAR_5, ((void*)0)));

 FUNC_0(1, (int)FUNC_7(VAR_6));

 FUNC_3(FUNC_10(&VAR_7, VAR_6, 0));

 FUNC_3(FUNC_12(&VAR_8, VAR_7));

 FUNC_1(VAR_9, VAR_8.ptr);

 FUNC_2(31, FUNC_11(VAR_7, 0, 0, 0));
 FUNC_2(31, FUNC_11(VAR_7, 1, 0, 0));
 FUNC_2(31 + 16, FUNC_11(VAR_7, 1, 1, 0));
 FUNC_2(FUNC_15(VAR_9), FUNC_11(VAR_7, 1, 1, 1));

 FUNC_5(&VAR_8);
 FUNC_9(VAR_7);
 FUNC_6(VAR_6);
 FUNC_13(VAR_5);
 FUNC_13(VAR_4);
}
