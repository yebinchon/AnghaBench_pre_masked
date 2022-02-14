
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; int * username; } ;
typedef TYPE_1__ git_cred_userpass_payload ;
typedef int git_cred ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,char*,int ,TYPE_1__*) ;

void FUNC_5(void)
{
 git_cred *VAR_1;
 git_cred_userpass_payload VAR_2 = {"alice", "password"};

 FUNC_1(FUNC_4(&VAR_1, ((void*)0), ((void*)0), VAR_0, &VAR_2));
 FUNC_0("alice", FUNC_3(VAR_1));
 FUNC_2(VAR_1);

 FUNC_1(FUNC_4(&VAR_1, ((void*)0), "bob", VAR_0, &VAR_2));
 FUNC_0("alice", FUNC_3(VAR_1));
 FUNC_2(VAR_1);

 VAR_2.username = ((void*)0);
 FUNC_1(FUNC_4(&VAR_1, ((void*)0), "bob", VAR_0, &VAR_2));
 FUNC_0("bob", FUNC_3(VAR_1));
 FUNC_2(VAR_1);
}
