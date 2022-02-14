
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int free; int credtype; } ;
struct TYPE_7__ {TYPE_2__ parent; struct TYPE_7__* username; void* password; } ;
typedef TYPE_1__ git_cred_userpass_plaintext ;
typedef TYPE_2__ git_cred ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 void* FUNC_4 (char const*) ;
 int VAR_1 ;

int FUNC_5(
 git_cred **VAR_2,
 const char *VAR_3,
 const char *VAR_4)
{
 git_cred_userpass_plaintext *VAR_5;

 FUNC_1(VAR_2 && VAR_3 && VAR_4);

 VAR_5 = FUNC_3(sizeof(git_cred_userpass_plaintext));
 FUNC_0(VAR_5);

 VAR_5->parent.credtype = VAR_0;
 VAR_5->parent.free = VAR_1;
 VAR_5->username = FUNC_4(VAR_3);

 if (!VAR_5->username) {
  FUNC_2(VAR_5);
  return -1;
 }

 VAR_5->password = FUNC_4(VAR_4);

 if (!VAR_5->password) {
  FUNC_2(VAR_5->username);
  FUNC_2(VAR_5);
  return -1;
 }

 *VAR_2 = &VAR_5->parent;
 return 0;
}
