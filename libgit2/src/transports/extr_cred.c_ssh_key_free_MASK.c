
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct git_cred {int dummy; } ;
struct TYPE_5__ {struct TYPE_5__* publickey; struct TYPE_5__* passphrase; struct TYPE_5__* privatekey; struct TYPE_5__* username; } ;
typedef TYPE_1__ git_cred_ssh_key ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 size_t FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct git_cred *VAR_0)
{
 git_cred_ssh_key *VAR_1 =
  (git_cred_ssh_key *)VAR_0;

 FUNC_0(VAR_1->username);

 if (VAR_1->privatekey) {

  size_t VAR_2 = FUNC_2(VAR_1->privatekey);
  FUNC_1(VAR_1->privatekey, VAR_2);
  FUNC_0(VAR_1->privatekey);
 }

 if (VAR_1->passphrase) {

  size_t VAR_3 = FUNC_2(VAR_1->passphrase);
  FUNC_1(VAR_1->passphrase, VAR_3);
  FUNC_0(VAR_1->passphrase);
 }

 if (VAR_1->publickey) {

  size_t VAR_4 = FUNC_2(VAR_1->publickey);
  FUNC_1(VAR_1->publickey, VAR_4);
  FUNC_0(VAR_1->publickey);
 }

 FUNC_0(VAR_1);
}
