
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int member_0; } ;
typedef TYPE_1__ git_strarray ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(void)
{
 git_strarray VAR_2 = {0};

 FUNC_2(FUNC_3(&VAR_2, VAR_1, VAR_0, "just.renamed"));
 FUNC_1(0, VAR_2.count);
 FUNC_4(&VAR_2);
 FUNC_0(VAR_1, "remote.just.renamed.fetch", 1);
}
