
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_3__ {int count; int strings; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_pathspec_match_list ;
typedef int git_pathspec ;
typedef int git_object ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int ,int *) ;
 int FUNC_12 (int **,TYPE_1__*) ;
 int FUNC_13 (int **,int ,char*) ;
 int VAR_2 ;

void FUNC_14(void)
{
 git_object *VAR_3;
 git_strarray VAR_4;
 git_pathspec *VAR_5;
 git_pathspec_match_list *VAR_6;


 VAR_4.strings = VAR_2; VAR_4.count = FUNC_0(VAR_2);
 FUNC_3(FUNC_12(&VAR_5, &VAR_4));

 FUNC_3(FUNC_13(&VAR_3, VAR_1, "HEAD~2^{tree}"));

 FUNC_3(FUNC_11(&VAR_6, (git_tree *)VAR_3,
  VAR_0, VAR_5));
 FUNC_2(4, FUNC_7(VAR_6));
 FUNC_1("current_file", FUNC_6(VAR_6, 0));
 FUNC_1("modified_file", FUNC_6(VAR_6, 1));
 FUNC_1("staged_changes_modified_file", FUNC_6(VAR_6, 2));
 FUNC_1("staged_delete_modified_file", FUNC_6(VAR_6, 3));
 FUNC_1(((void*)0), FUNC_6(VAR_6, 4));
 FUNC_2(2, FUNC_9(VAR_6));
 FUNC_1("new_file", FUNC_8(VAR_6, 0));
 FUNC_1("garbage", FUNC_8(VAR_6, 1));
 FUNC_1(((void*)0), FUNC_8(VAR_6, 2));
 FUNC_10(VAR_6);

 FUNC_4(VAR_3);

 FUNC_3(FUNC_13(&VAR_3, VAR_1, "HEAD^{tree}"));

 FUNC_3(FUNC_11(&VAR_6, (git_tree *)VAR_3,
  VAR_0, VAR_5));
 FUNC_2(7, FUNC_7(VAR_6));
 FUNC_1("current_file", FUNC_6(VAR_6, 0));
 FUNC_1("modified_file", FUNC_6(VAR_6, 1));
 FUNC_1("staged_changes_modified_file", FUNC_6(VAR_6, 2));
 FUNC_1("staged_delete_modified_file", FUNC_6(VAR_6, 3));
 FUNC_1("subdir/current_file", FUNC_6(VAR_6, 4));
 FUNC_1("subdir/deleted_file", FUNC_6(VAR_6, 5));
 FUNC_1("subdir/modified_file", FUNC_6(VAR_6, 6));
 FUNC_1(((void*)0), FUNC_6(VAR_6, 7));
 FUNC_2(2, FUNC_9(VAR_6));
 FUNC_1("new_file", FUNC_8(VAR_6, 0));
 FUNC_1("garbage", FUNC_8(VAR_6, 1));
 FUNC_1(((void*)0), FUNC_8(VAR_6, 2));
 FUNC_10(VAR_6);

 FUNC_4(VAR_3);

 FUNC_5(VAR_5);
}
