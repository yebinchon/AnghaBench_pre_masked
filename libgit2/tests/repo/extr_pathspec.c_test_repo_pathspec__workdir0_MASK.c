
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
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int,int *) ;
 int FUNC_10 (int **,TYPE_1__*) ;
 int VAR_3 ;

void FUNC_11(void)
{
 git_strarray VAR_4;
 git_pathspec *VAR_5;
 git_pathspec_match_list *VAR_6;


 VAR_4.strings = VAR_3; VAR_4.count = FUNC_0(VAR_3);
 FUNC_3(FUNC_10(&VAR_5, &VAR_4));

 FUNC_3(FUNC_9(&VAR_6, VAR_2, 0, VAR_5));
 FUNC_2(10, FUNC_5(VAR_6));
 FUNC_2(0, FUNC_7(VAR_6));
 FUNC_8(VAR_6);

 FUNC_3(FUNC_9(&VAR_6, VAR_2,
  VAR_1, VAR_5));
 FUNC_2(10, FUNC_5(VAR_6));
 FUNC_2(1, FUNC_7(VAR_6));
 FUNC_1("garbage", FUNC_6(VAR_6, 0));
 FUNC_8(VAR_6);

 FUNC_3(FUNC_9(&VAR_6, VAR_2,
  VAR_1 | VAR_0, VAR_5));
 FUNC_2(0, FUNC_5(VAR_6));
 FUNC_2(1, FUNC_7(VAR_6));
 FUNC_8(VAR_6);

 FUNC_4(VAR_5);
}
