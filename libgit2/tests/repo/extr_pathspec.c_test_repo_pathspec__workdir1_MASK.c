
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
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int,int *) ;
 int FUNC_9 (int **,TYPE_1__*) ;
 int VAR_5 ;

void FUNC_10(void)
{
 git_strarray VAR_6;
 git_pathspec *VAR_7;
 git_pathspec_match_list *VAR_8;


 VAR_6.strings = VAR_5; VAR_6.count = FUNC_0(VAR_5);
 FUNC_3(FUNC_9(&VAR_7, &VAR_6));

 FUNC_3(FUNC_8(&VAR_8, VAR_4,
  VAR_1, VAR_7));
 FUNC_1(10, FUNC_5(VAR_8));
 FUNC_7(VAR_8);

 FUNC_3(FUNC_8(&VAR_8, VAR_4,
  VAR_3, VAR_7));
 FUNC_1(0, FUNC_5(VAR_8));
 FUNC_7(VAR_8);

 FUNC_2(FUNC_8(&VAR_8, VAR_4,
  VAR_3 | VAR_2, VAR_7));

 FUNC_3(FUNC_8(&VAR_8, VAR_4,
  VAR_1 | VAR_0, VAR_7));
 FUNC_1(10, FUNC_5(VAR_8));
 FUNC_1(1, FUNC_6(VAR_8));
 FUNC_7(VAR_8);

 FUNC_3(FUNC_8(&VAR_8, VAR_4,
  VAR_3 | VAR_0, VAR_7));
 FUNC_1(0, FUNC_5(VAR_8));
 FUNC_1(3, FUNC_6(VAR_8));
 FUNC_7(VAR_8);

 FUNC_4(VAR_7);
}
