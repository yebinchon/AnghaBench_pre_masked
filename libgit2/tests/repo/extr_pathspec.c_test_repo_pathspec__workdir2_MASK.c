
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int,int *) ;
 int FUNC_9 (int **,TYPE_1__*) ;
 int VAR_4 ;

void FUNC_10(void)
{
 git_strarray VAR_5;
 git_pathspec *VAR_6;
 git_pathspec_match_list *VAR_7;


 VAR_5.strings = VAR_4; VAR_5.count = FUNC_0(VAR_4);
 FUNC_3(FUNC_9(&VAR_6, &VAR_5));

 FUNC_3(FUNC_8(&VAR_7, VAR_3, 0, VAR_6));
 FUNC_1(5, FUNC_5(VAR_7));
 FUNC_7(VAR_7);

 FUNC_3(FUNC_8(&VAR_7, VAR_3,
  VAR_0, VAR_6));
 FUNC_1(5, FUNC_5(VAR_7));
 FUNC_1(0, FUNC_6(VAR_7));
 FUNC_7(VAR_7);

 FUNC_2(FUNC_8(&VAR_7, VAR_3,
  VAR_1 | VAR_2, VAR_6));

 FUNC_3(FUNC_8(&VAR_7, VAR_3,
  VAR_1 | VAR_0, VAR_6));
 FUNC_1(0, FUNC_5(VAR_7));
 FUNC_1(1, FUNC_6(VAR_7));
 FUNC_7(VAR_7);

 FUNC_4(VAR_6);
}
