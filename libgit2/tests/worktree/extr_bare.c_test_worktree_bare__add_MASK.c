
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_worktree ;
struct TYPE_4__ {int count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int **,int ,char*,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(void)
{
 git_worktree *VAR_2;
 git_repository *VAR_3;
 git_strarray VAR_4;

 FUNC_1(FUNC_7(&VAR_2, VAR_1, "name", VAR_0, ((void*)0)));

 FUNC_1(FUNC_9(&VAR_4, VAR_1));
 FUNC_0(VAR_4.count, 1);

 FUNC_1(FUNC_10(VAR_2));

 FUNC_1(FUNC_5(&VAR_3, VAR_0));
 FUNC_0(0, FUNC_3(VAR_3));
 FUNC_0(1, FUNC_4(VAR_3));

 FUNC_6(&VAR_4);
 FUNC_8(VAR_2);
 FUNC_2(VAR_3);
}
