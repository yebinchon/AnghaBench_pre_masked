
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int member_0; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(void)
{
 git_config *VAR_2;
 git_remote *VAR_3;
 git_strarray VAR_4 = {0};

 FUNC_2(FUNC_7(&VAR_2, VAR_1));
 FUNC_2(FUNC_3(VAR_2, "remote.test.fetch"));

 FUNC_2(FUNC_5(&VAR_3, VAR_1, "test"));
 FUNC_4(VAR_3);

 FUNC_0(VAR_1, "remote.test.fetch", 0);

 FUNC_2(FUNC_6(&VAR_4, VAR_1, VAR_0, "just/renamed"));
 FUNC_1(0, VAR_4.count);
 FUNC_8(&VAR_4);

 FUNC_0(VAR_1, "remote.just/renamed.fetch", 0);
}
