
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ git_strarray ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,char*) ;

void FUNC_2(void)
{
 git_strarray VAR_2 = {0};

 int VAR_3 = FUNC_1(&VAR_2, VAR_1, "nonexistent", "renamed");

 FUNC_0(VAR_0, VAR_3);
}
