
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_6__ {int member_1; char** strings; int * member_0; } ;
typedef TYPE_2__ git_strarray ;
typedef int git_pathspec_match_list ;
typedef int git_pathspec ;
typedef int git_diff_options ;
typedef int git_diff ;
struct TYPE_5__ {int * path; } ;
struct TYPE_7__ {scalar_t__ status; TYPE_1__ new_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *,int *) ;
 int FUNC_6 (int **,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int ,int *) ;
 TYPE_4__* FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *,int ,int *) ;
 int FUNC_14 (int **,TYPE_2__*) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int ,char const*) ;

void FUNC_17(void)
{
 const char *VAR_6 = "26a125ee";
 const char *VAR_7 = "0017bd4a";
 git_tree *VAR_8 = FUNC_16(VAR_5, VAR_6);
 git_tree *VAR_9 = FUNC_16(VAR_5, VAR_7);
 git_diff_options VAR_10 = VAR_3;
 git_diff *VAR_11 = ((void*)0);
 git_strarray VAR_12 = { ((void*)0), 1 };
 char *VAR_13;
 git_pathspec *VAR_14;
 git_pathspec_match_list *VAR_15;

 FUNC_0(VAR_8);
 FUNC_0(VAR_9);

 VAR_13 = "*_file";
 VAR_12.strings = &VAR_13;
 FUNC_3(FUNC_14(&VAR_14, &VAR_12));

 FUNC_3(FUNC_13(&VAR_15, VAR_8, VAR_4, VAR_14));
 FUNC_1(7, (int)FUNC_11(VAR_15));
 FUNC_2("current_file", FUNC_10(VAR_15,0));
 FUNC_0(FUNC_9(VAR_15,0) == ((void*)0));
 FUNC_12(VAR_15);

 FUNC_3(FUNC_5(&VAR_11, VAR_5, ((void*)0), VAR_8, &VAR_10));

 FUNC_3(FUNC_8(
  &VAR_15, VAR_11, VAR_4, VAR_14));
 FUNC_1(7, (int)FUNC_11(VAR_15));
 FUNC_0(FUNC_9(VAR_15, 0) != ((void*)0));
 FUNC_0(FUNC_10(VAR_15, 0) == ((void*)0));
 FUNC_2("current_file",
  FUNC_9(VAR_15,0)->new_file.path);
 FUNC_1(VAR_0,
  (int)FUNC_9(VAR_15,0)->status);
 FUNC_12(VAR_15);

 FUNC_4(VAR_11);
 VAR_11 = ((void*)0);

 FUNC_3(FUNC_5(&VAR_11, VAR_5, VAR_8, VAR_9, &VAR_10));

 FUNC_3(FUNC_8(
  &VAR_15, VAR_11, VAR_4, VAR_14));
 FUNC_1(3, (int)FUNC_11(VAR_15));
 FUNC_0(FUNC_9(VAR_15, 0) != ((void*)0));
 FUNC_0(FUNC_10(VAR_15, 0) == ((void*)0));
 FUNC_2("subdir/current_file",
  FUNC_9(VAR_15,0)->new_file.path);
 FUNC_1(VAR_1,
  (int)FUNC_9(VAR_15,0)->status);
 FUNC_12(VAR_15);

 FUNC_4(VAR_11);
 VAR_11 = ((void*)0);

 FUNC_3(FUNC_6(&VAR_11, VAR_5, VAR_8, &VAR_10));

 FUNC_3(FUNC_8(
  &VAR_15, VAR_11, VAR_4, VAR_14));
 FUNC_1(4, (int)FUNC_11(VAR_15));
 FUNC_0(FUNC_9(VAR_15, 0) != ((void*)0));
 FUNC_0(FUNC_10(VAR_15, 0) == ((void*)0));
 FUNC_2("modified_file",
  FUNC_9(VAR_15,0)->new_file.path);
 FUNC_1(VAR_2,
  (int)FUNC_9(VAR_15,0)->status);
 FUNC_12(VAR_15);

 FUNC_4(VAR_11);
 VAR_11 = ((void*)0);

 FUNC_15(VAR_8);
 FUNC_15(VAR_9);
 FUNC_7(VAR_14);
}
