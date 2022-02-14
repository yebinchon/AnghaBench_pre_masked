
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_patch ;
struct TYPE_14__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_2__ git_diff_find_options ;
struct TYPE_16__ {scalar_t__ status; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_diff ;
struct TYPE_17__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 char* VAR_0 ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 char* VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int ) ;
 TYPE_3__* FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*,int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,char const*) ;

void FUNC_16(void)
{
 const char *VAR_12 = VAR_0;
 const char *VAR_13 = VAR_10;
 git_tree *VAR_14, *VAR_15;
 git_diff *VAR_16;
 git_diff_options VAR_17 = VAR_9;
 git_diff_find_options VAR_18 = VAR_6;
 git_patch *VAR_19;
 const git_diff_delta *VAR_20;
 git_buf VAR_21 = VAR_1;
 const char *VAR_22 = "diff --git a/sixserving.txt b/ikeepsix.txt\nindex ad0a8e5..36020db 100644\n--- a/sixserving.txt\n+++ b/ikeepsix.txt\n@@ -1,3 +1,6 @@\n+I Keep Six Honest Serving-Men\n+=============================\n+\n I KEEP six honest serving-men\n  (They taught me all I knew);\n Their names are What and Why and When\n@@ -21,4 +24,4 @@ She sends'em abroad on her own affairs,\n One million Hows, two million Wheres,\n And seven million Whys!\n \n-                -- Rudyard Kipling\n+  -- Rudyard Kipling\n";

 VAR_14 = FUNC_15(VAR_11, VAR_12);
 VAR_15 = FUNC_15(VAR_11, VAR_13);

 VAR_17.flags |= VAR_8;
 FUNC_3(FUNC_9(
  &VAR_16, VAR_11, VAR_14, VAR_15, &VAR_17));

 VAR_18.flags = VAR_7 | VAR_5;
 FUNC_3(FUNC_5(VAR_16, &VAR_18));
 FUNC_1(4, (int)FUNC_8(VAR_16));

 FUNC_3(FUNC_11(&VAR_19, VAR_16, 0));
 FUNC_0((VAR_20 = FUNC_12(VAR_19)) != ((void*)0));
 FUNC_1(VAR_2, (int)VAR_20->status);

 FUNC_3(FUNC_13(&VAR_21, VAR_19));
 FUNC_2(VAR_22, VAR_21.ptr);
 FUNC_4(&VAR_21);

 FUNC_10(VAR_19);

 FUNC_0((VAR_20 = FUNC_7(VAR_16, 1)) != ((void*)0));
 FUNC_1(VAR_4, (int)VAR_20->status);

 FUNC_0((VAR_20 = FUNC_7(VAR_16, 2)) != ((void*)0));
 FUNC_1(VAR_3, (int)VAR_20->status);

 FUNC_0((VAR_20 = FUNC_7(VAR_16, 3)) != ((void*)0));
 FUNC_1(VAR_3, (int)VAR_20->status);

 FUNC_6(VAR_16);
 FUNC_14(VAR_14);
 FUNC_14(VAR_15);
}
