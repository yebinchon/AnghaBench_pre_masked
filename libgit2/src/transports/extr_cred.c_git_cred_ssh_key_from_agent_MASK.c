
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int free; int credtype; } ;
struct TYPE_7__ {TYPE_2__ parent; int * privatekey; struct TYPE_7__* username; } ;
typedef TYPE_1__ git_cred_ssh_key ;
typedef TYPE_2__ git_cred ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (char const*) ;
 int VAR_1 ;

int FUNC_4(git_cred **VAR_2, const char *VAR_3) {
 git_cred_ssh_key *VAR_4;

 FUNC_1(VAR_3 && VAR_2);

 VAR_4 = FUNC_2(1, sizeof(git_cred_ssh_key));
 FUNC_0(VAR_4);

 VAR_4->parent.credtype = VAR_0;
 VAR_4->parent.free = VAR_1;

 VAR_4->username = FUNC_3(VAR_3);
 FUNC_0(VAR_4->username);

 VAR_4->privatekey = ((void*)0);

 *VAR_2 = &VAR_4->parent;
 return 0;
}
