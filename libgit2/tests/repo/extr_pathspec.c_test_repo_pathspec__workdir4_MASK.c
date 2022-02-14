
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
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ,int *) ;
 int FUNC_9 (int **,TYPE_1__*) ;
 int VAR_1 ;

void FUNC_10(void)
{
 git_strarray VAR_2;
 git_pathspec *VAR_3;
 git_pathspec_match_list *VAR_4;


 VAR_2.strings = VAR_1; VAR_2.count = FUNC_0(VAR_1);
 FUNC_3(FUNC_9(&VAR_3, &VAR_2));

 FUNC_3(FUNC_8(&VAR_4, VAR_0, 0, VAR_3));
 FUNC_2(13, FUNC_6(VAR_4));
 FUNC_1("\xE8\xBF\x99", FUNC_5(VAR_4, 12));
 FUNC_7(VAR_4);

 FUNC_4(VAR_3);
}
