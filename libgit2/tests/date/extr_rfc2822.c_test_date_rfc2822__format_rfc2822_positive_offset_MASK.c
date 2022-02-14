
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; } ;
typedef TYPE_1__ git_time ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

void FUNC_4(void)
{
 git_time VAR_1 = {1397031663, 120};
 char VAR_2[VAR_0];

 FUNC_1(FUNC_2(VAR_2, sizeof(VAR_2), &VAR_1));
 FUNC_0(FUNC_3(VAR_2, "Wed, 9 Apr 2014 10:21:03 +0200") == 0);
}
