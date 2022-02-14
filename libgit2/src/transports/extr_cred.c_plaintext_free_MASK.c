
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct git_cred {int dummy; } ;
struct TYPE_5__ {struct TYPE_5__* password; struct TYPE_5__* username; } ;
typedef TYPE_1__ git_cred_userpass_plaintext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 size_t FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct git_cred *VAR_0)
{
 git_cred_userpass_plaintext *VAR_1 = (git_cred_userpass_plaintext *)VAR_0;

 FUNC_0(VAR_1->username);


 if (VAR_1->password) {
  size_t VAR_2 = FUNC_2(VAR_1->password);
  FUNC_1(VAR_1->password, VAR_2);
  FUNC_0(VAR_1->password);
 }

 FUNC_0(VAR_1);
}
