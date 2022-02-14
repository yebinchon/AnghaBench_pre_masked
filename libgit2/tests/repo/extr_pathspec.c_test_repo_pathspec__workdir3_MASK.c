
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int strings; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_pathspec_match_list ;
typedef int git_pathspec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int ,int *) ;
 int FUNC_10 (int **,TYPE_1__*) ;
 int VAR_2 ;

void FUNC_11(void)
{
 git_strarray VAR_3;
 git_pathspec *VAR_4;
 git_pathspec_match_list *VAR_5;


 VAR_3.strings = VAR_2; VAR_3.count = FUNC_0(VAR_2);
 FUNC_3(FUNC_10(&VAR_4, &VAR_3));

 FUNC_3(FUNC_9(&VAR_5, VAR_1, 0, VAR_4));
 FUNC_2(7, FUNC_6(VAR_5));
 FUNC_8(VAR_5);

 FUNC_3(FUNC_9(&VAR_5, VAR_1,
  VAR_0, VAR_4));
 FUNC_2(7, FUNC_6(VAR_5));
 FUNC_2(0, FUNC_7(VAR_5));

 FUNC_1("current_file", FUNC_5(VAR_5, 0));
 FUNC_1("modified_file", FUNC_5(VAR_5, 1));
 FUNC_1("new_file", FUNC_5(VAR_5, 2));
 FUNC_1("staged_changes_modified_file", FUNC_5(VAR_5, 3));
 FUNC_1("staged_delete_modified_file", FUNC_5(VAR_5, 4));
 FUNC_1("staged_new_file", FUNC_5(VAR_5, 5));
 FUNC_1("staged_new_file_modified_file", FUNC_5(VAR_5, 6));
 FUNC_1(((void*)0), FUNC_5(VAR_5, 7));

 FUNC_8(VAR_5);

 FUNC_4(VAR_4);
}
