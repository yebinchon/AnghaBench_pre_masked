
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_buf VAR_3 = VAR_0;
 FUNC_1("submod2/.git/modules/sm_unchanged/gitdir", ".git");
 FUNC_2(FUNC_4(&VAR_3, FUNC_6(VAR_2), "sm_unchanged"));
 FUNC_2(FUNC_5(&VAR_1, VAR_3.ptr));
 FUNC_0(VAR_2, VAR_1, "sm_unchanged");

 FUNC_3(&VAR_3);
}
