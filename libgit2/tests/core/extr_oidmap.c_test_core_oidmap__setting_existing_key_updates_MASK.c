
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
struct TYPE_6__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*,char*) ;
 int FUNC_5 (int ) ;

void FUNC_6(void)
{
 git_oid VAR_1[] = {
     {{ 0x01 }},
     {{ 0x02 }},
     {{ 0x03 }}
 };

 FUNC_2(FUNC_4(VAR_0, &VAR_1[0], "one"));
 FUNC_2(FUNC_4(VAR_0, &VAR_1[1], "two"));
 FUNC_2(FUNC_4(VAR_0, &VAR_1[2], "three"));
 FUNC_0(FUNC_5(VAR_0), 3);

 FUNC_2(FUNC_4(VAR_0, &VAR_1[1], "other"));
 FUNC_0(FUNC_5(VAR_0), 3);

 FUNC_1(FUNC_3(VAR_0, &VAR_1[1]), "other");
}
