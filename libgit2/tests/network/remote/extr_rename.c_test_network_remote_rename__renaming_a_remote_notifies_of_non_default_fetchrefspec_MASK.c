
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * strings; int count; int member_0; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (TYPE_1__*) ;

void FUNC_10(void)
{
 git_config *VAR_2;
 git_remote *VAR_3;
 git_strarray VAR_4 = {0};

 FUNC_3(FUNC_8(&VAR_2, VAR_1));
 FUNC_3(FUNC_4(VAR_2, "remote.test.fetch", "+refs/*:refs/*"));
 FUNC_3(FUNC_6(&VAR_3, VAR_1, "test"));
 FUNC_5(VAR_3);

 FUNC_3(FUNC_7(&VAR_4, VAR_1, VAR_0, "just/renamed"));
 FUNC_1(1, VAR_4.count);
 FUNC_2("+refs/*:refs/*", VAR_4.strings[0]);
 FUNC_9(&VAR_4);

 FUNC_0(VAR_1, "remote.just/renamed.fetch", "+refs/*:refs/*");

 FUNC_9(&VAR_4);
}
