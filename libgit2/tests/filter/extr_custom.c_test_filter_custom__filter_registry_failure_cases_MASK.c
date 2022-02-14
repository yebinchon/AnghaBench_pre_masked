
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ git_filter ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_1__*,int ) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
 git_filter VAR_5 = { VAR_4, 0 };

 FUNC_0(VAR_0, FUNC_2("bitflip", &VAR_5, 0));

 FUNC_1(FUNC_3(VAR_2));
 FUNC_1(FUNC_3(VAR_3));
 FUNC_0(VAR_1, FUNC_3("not-a-filter"));
}
