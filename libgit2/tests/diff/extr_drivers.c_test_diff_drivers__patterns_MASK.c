
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_patch ;
typedef int git_diff ;
typedef int git_config ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_11__ {int * diff_drivers; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 TYPE_2__* FUNC_5 (char*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int **,TYPE_2__*,int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int *,int ) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (int **,TYPE_2__*) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (TYPE_2__*,char const*) ;

void FUNC_20(void)
{
 git_config *VAR_2;
 const char *VAR_3 = "19dd32dfb1520a64e5bbaae8dce6ef423dfa2f13";
 git_tree *VAR_4;
 git_diff *VAR_5;
 git_patch *VAR_6;
 git_buf VAR_7 = VAR_0;
 const char *VAR_8 = "diff --git a/untimely.txt b/untimely.txt\nindex 9a69d96..57fd0cf 100644\n--- a/untimely.txt\n+++ b/untimely.txt\n@@ -22,3 +22,5 @@ Comes through the blood of the vanguards who\n   dreamed--too soon--it had sounded.\r\n \r\n                 -- Rudyard Kipling\r\n+\r\n+Some new stuff\r\n";
 const char *VAR_9 = "diff --git a/untimely.txt b/untimely.txt\nindex 9a69d96..57fd0cf 100644\nBinary files a/untimely.txt and b/untimely.txt differ\n";
 const char *VAR_10 = "diff --git a/untimely.txt b/untimely.txt\nindex 9a69d96..57fd0cf 100644\n--- a/untimely.txt\n+++ b/untimely.txt\n@@ -22,3 +22,5 @@ Heaven delivers on earth the Hour that cannot be\n   dreamed--too soon--it had sounded.\r\n \r\n                 -- Rudyard Kipling\r\n+\r\n+Some new stuff\r\n";

 VAR_1 = FUNC_5("renames");

 VAR_4 = FUNC_19(VAR_1, VAR_3);



 FUNC_3(FUNC_13(&VAR_5, VAR_1, VAR_4, ((void*)0)));
 FUNC_0(0, (int)FUNC_12(VAR_5));
 FUNC_11(VAR_5);



 FUNC_2("renames/untimely.txt", "\r\nSome new stuff\r\n");

 FUNC_3(FUNC_13(&VAR_5, VAR_1, VAR_4, ((void*)0)));
 FUNC_0(1, (int)FUNC_12(VAR_5));

 FUNC_3(FUNC_15(&VAR_6, VAR_5, 0));
 FUNC_3(FUNC_16(&VAR_7, VAR_6));
 FUNC_1(VAR_8, VAR_7.ptr);

 FUNC_6(&VAR_7);
 FUNC_14(VAR_6);
 FUNC_11(VAR_5);



 FUNC_4("renames/.gitattributes", "untimely.txt -diff\n");

 FUNC_3(FUNC_13(&VAR_5, VAR_1, VAR_4, ((void*)0)));
 FUNC_0(1, (int)FUNC_12(VAR_5));

 FUNC_3(FUNC_15(&VAR_6, VAR_5, 0));
 FUNC_3(FUNC_16(&VAR_7, VAR_6));
 FUNC_1(VAR_9, VAR_7.ptr);

 FUNC_6(&VAR_7);
 FUNC_14(VAR_6);
 FUNC_11(VAR_5);



 FUNC_4("renames/.gitattributes", "untimely.txt diff=kipling0\n");

 FUNC_3(FUNC_13(&VAR_5, VAR_1, VAR_4, ((void*)0)));
 FUNC_0(1, (int)FUNC_12(VAR_5));

 FUNC_3(FUNC_15(&VAR_6, VAR_5, 0));
 FUNC_3(FUNC_16(&VAR_7, VAR_6));
 FUNC_1(VAR_8, VAR_7.ptr);

 FUNC_6(&VAR_7);
 FUNC_14(VAR_6);
 FUNC_11(VAR_5);



 FUNC_3(FUNC_17(&VAR_2, VAR_1));
 FUNC_3(FUNC_8(VAR_2, "diff.kipling0.binary", 1));
 FUNC_7(VAR_2);

 FUNC_3(FUNC_13(&VAR_5, VAR_1, VAR_4, ((void*)0)));
 FUNC_0(1, (int)FUNC_12(VAR_5));

 FUNC_3(FUNC_15(&VAR_6, VAR_5, 0));
 FUNC_3(FUNC_16(&VAR_7, VAR_6));
 FUNC_1(VAR_9, VAR_7.ptr);

 FUNC_6(&VAR_7);
 FUNC_14(VAR_6);
 FUNC_11(VAR_5);



 FUNC_10(VAR_1->diff_drivers);
 VAR_1->diff_drivers = ((void*)0);

 FUNC_3(FUNC_17(&VAR_2, VAR_1));
 FUNC_3(FUNC_8(VAR_2, "diff.kipling0.binary", 0));
 FUNC_3(FUNC_9(VAR_2, "diff.kipling0.xfuncname", "^H.*$"));
 FUNC_7(VAR_2);

 FUNC_3(FUNC_13(&VAR_5, VAR_1, VAR_4, ((void*)0)));
 FUNC_0(1, (int)FUNC_12(VAR_5));

 FUNC_3(FUNC_15(&VAR_6, VAR_5, 0));
 FUNC_3(FUNC_16(&VAR_7, VAR_6));
 FUNC_1(VAR_10, VAR_7.ptr);

 FUNC_6(&VAR_7);
 FUNC_14(VAR_6);
 FUNC_11(VAR_5);

 FUNC_18(VAR_4);
}
