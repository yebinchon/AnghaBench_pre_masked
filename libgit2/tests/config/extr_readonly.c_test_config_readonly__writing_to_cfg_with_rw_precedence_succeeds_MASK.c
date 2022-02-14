
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int readonly; } ;
typedef TYPE_1__ git_config_backend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ,int *,int ) ;
 int FUNC_3 (TYPE_1__**,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 git_config_backend *VAR_3;

 FUNC_1(FUNC_3(&VAR_3, "global"));
 VAR_3->readonly = 1;
 FUNC_1(FUNC_2(VAR_2, VAR_3, VAR_0, ((void*)0), 0));

 FUNC_1(FUNC_3(&VAR_3, "local"));
 FUNC_1(FUNC_2(VAR_2, VAR_3, VAR_1, ((void*)0), 0));

 FUNC_1(FUNC_4(VAR_2, "foo.bar", "baz"));

 FUNC_0(FUNC_5("local"));
 FUNC_0(!FUNC_5("global"));
 FUNC_1(FUNC_6("local"));
}
