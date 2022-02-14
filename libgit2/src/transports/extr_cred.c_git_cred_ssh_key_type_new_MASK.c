
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_credtype_t ;
struct TYPE_7__ {int free; int credtype; } ;
struct TYPE_6__ {TYPE_2__ parent; struct TYPE_6__* passphrase; struct TYPE_6__* publickey; struct TYPE_6__* privatekey; struct TYPE_6__* username; } ;
typedef TYPE_1__ git_cred_ssh_key ;
typedef TYPE_2__ git_cred ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int,int) ;
 void* FUNC_3 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(
 git_cred **VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 const char *VAR_4,
 const char *VAR_5,
 git_credtype_t VAR_6)
{
 git_cred_ssh_key *VAR_7;

 FUNC_1(VAR_2 && VAR_1 && VAR_4);

 VAR_7 = FUNC_2(1, sizeof(git_cred_ssh_key));
 FUNC_0(VAR_7);

 VAR_7->parent.credtype = VAR_6;
 VAR_7->parent.free = VAR_0;

 VAR_7->username = FUNC_3(VAR_2);
 FUNC_0(VAR_7->username);

 VAR_7->privatekey = FUNC_3(VAR_4);
 FUNC_0(VAR_7->privatekey);

 if (VAR_3) {
  VAR_7->publickey = FUNC_3(VAR_3);
  FUNC_0(VAR_7->publickey);
 }

 if (VAR_5) {
  VAR_7->passphrase = FUNC_3(VAR_5);
  FUNC_0(VAR_7->passphrase);
 }

 *VAR_1 = &VAR_7->parent;
 return 0;
}
