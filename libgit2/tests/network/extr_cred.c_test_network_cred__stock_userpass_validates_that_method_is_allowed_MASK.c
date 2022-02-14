
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; } ;
typedef TYPE_1__ git_cred_userpass_payload ;
typedef int git_cred ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int ,TYPE_1__*) ;

void FUNC_4(void)
{
 git_cred *VAR_1;
 git_cred_userpass_payload VAR_2 = {"user", "pass"};

 FUNC_0(FUNC_3(&VAR_1, ((void*)0), ((void*)0), 0, &VAR_2));
 FUNC_1(FUNC_3(&VAR_1, ((void*)0), ((void*)0), VAR_0, &VAR_2));
 FUNC_2(VAR_1);
}
