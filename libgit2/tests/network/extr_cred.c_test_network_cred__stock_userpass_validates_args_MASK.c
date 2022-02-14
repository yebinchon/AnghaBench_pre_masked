
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* username; int member_0; } ;
typedef TYPE_1__ git_cred_userpass_payload ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int ,TYPE_1__*) ;

void FUNC_2(void)
{
 git_cred_userpass_payload VAR_0 = {0};

 FUNC_0(FUNC_1(((void*)0), ((void*)0), ((void*)0), 0, ((void*)0)));

 VAR_0.username = "user";
 FUNC_0(FUNC_1(((void*)0), ((void*)0), ((void*)0), 0, &VAR_0));

 VAR_0.username = ((void*)0);
 VAR_0.username = "pass";
 FUNC_0(FUNC_1(((void*)0), ((void*)0), ((void*)0), 0, &VAR_0));
}
