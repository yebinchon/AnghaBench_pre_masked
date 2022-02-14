
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int member_0; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(void)
{
 git_reference *VAR_3;
 git_strarray VAR_4 = {0};

 FUNC_0(VAR_0, FUNC_3(&VAR_3, VAR_2, "refs/remotes/just/renamed"));
 FUNC_1(FUNC_3(&VAR_3, VAR_2, "refs/remotes/test/master"));
 FUNC_2(VAR_3);

 FUNC_1(FUNC_4(&VAR_4, VAR_2, VAR_1, "just/renamed"));
 FUNC_0(0, VAR_4.count);
 FUNC_5(&VAR_4);

 FUNC_0(VAR_0, FUNC_3(&VAR_3, VAR_2, "refs/remotes/test/master"));
 FUNC_1(FUNC_3(&VAR_3, VAR_2, "refs/remotes/just/renamed/master"));
 FUNC_2(VAR_3);
}
