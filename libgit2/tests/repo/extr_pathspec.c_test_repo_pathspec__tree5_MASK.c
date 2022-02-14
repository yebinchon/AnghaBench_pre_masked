
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int,int *) ;
 int FUNC_11 (int **,TYPE_1__*) ;
 int FUNC_12 (int **,int ,char*) ;
 int VAR_4 ;

void FUNC_13(void)
{
 git_object *VAR_5;
 git_strarray VAR_6;
 git_pathspec *VAR_7;
 git_pathspec_match_list *VAR_8;


 VAR_6.strings = VAR_4; VAR_6.count = FUNC_0(VAR_4);
 FUNC_3(FUNC_11(&VAR_7, &VAR_6));

 FUNC_3(FUNC_12(&VAR_5, VAR_3, "HEAD~2^{tree}"));

 FUNC_3(FUNC_10(&VAR_8, (git_tree *)VAR_5,
  VAR_2 | VAR_0, VAR_7));
 FUNC_2(0, FUNC_7(VAR_8));
 FUNC_2(1, FUNC_8(VAR_8));
 FUNC_9(VAR_8);

 FUNC_3(FUNC_10(&VAR_8, (git_tree *)VAR_5,
  VAR_1 | VAR_0, VAR_7));
 FUNC_2(5, FUNC_7(VAR_8));
 FUNC_1("staged_changes", FUNC_6(VAR_8, 0));
 FUNC_1("staged_delete_modified_file", FUNC_6(VAR_8, 4));
 FUNC_2(0, FUNC_8(VAR_8));
 FUNC_9(VAR_8);

 FUNC_4(VAR_5);

 FUNC_3(FUNC_12(&VAR_5, VAR_3, "HEAD^{tree}"));

 FUNC_3(FUNC_10(&VAR_8, (git_tree *)VAR_5,
  VAR_1 | VAR_0, VAR_7));
 FUNC_2(9, FUNC_7(VAR_8));
 FUNC_1("staged_changes", FUNC_6(VAR_8, 0));
 FUNC_1("subdir.txt", FUNC_6(VAR_8, 5));
 FUNC_1("subdir/current_file", FUNC_6(VAR_8, 6));
 FUNC_2(0, FUNC_8(VAR_8));
 FUNC_9(VAR_8);

 FUNC_4(VAR_5);

 FUNC_5(VAR_7);
}
