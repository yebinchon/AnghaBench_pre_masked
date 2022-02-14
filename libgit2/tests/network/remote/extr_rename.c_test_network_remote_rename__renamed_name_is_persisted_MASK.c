
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int member_0; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(void)
{
 git_remote *VAR_2;
 git_repository *VAR_3;
 git_strarray VAR_4 = {0};

 FUNC_1(FUNC_4(&VAR_2, VAR_1, "just/renamed"));

 FUNC_2(FUNC_5(&VAR_4, VAR_1, VAR_0, "just/renamed"));
 FUNC_0(0, VAR_4.count);
 FUNC_8(&VAR_4);

 FUNC_2(FUNC_7(&VAR_3, "testrepo.git"));
 FUNC_2(FUNC_4(&VAR_2, VAR_1, "just/renamed"));

 FUNC_3(VAR_2);
 FUNC_6(VAR_3);
}
