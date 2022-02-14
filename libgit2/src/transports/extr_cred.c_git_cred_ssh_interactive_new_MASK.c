
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ git_cred_ssh_interactive_cb ;
struct TYPE_8__ {int free; int credtype; } ;
struct TYPE_7__ {TYPE_2__ parent; void* payload; scalar_t__ prompt_callback; struct TYPE_7__* username; } ;
typedef TYPE_1__ git_cred_ssh_interactive ;
typedef TYPE_2__ git_cred ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (char const*) ;
 int VAR_1 ;

int FUNC_4(
 git_cred **VAR_2,
 const char *VAR_3,
 git_cred_ssh_interactive_cb VAR_4,
 void *VAR_5)
{
 git_cred_ssh_interactive *VAR_6;

 FUNC_1(VAR_2 && VAR_3 && VAR_4);

 VAR_6 = FUNC_2(1, sizeof(git_cred_ssh_interactive));
 FUNC_0(VAR_6);

 VAR_6->parent.credtype = VAR_0;
 VAR_6->parent.free = VAR_1;

 VAR_6->username = FUNC_3(VAR_3);
 FUNC_0(VAR_6->username);

 VAR_6->prompt_callback = VAR_4;
 VAR_6->payload = VAR_5;

 *VAR_2 = &VAR_6->parent;
 return 0;
}
