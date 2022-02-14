
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int free; int credtype; } ;
struct TYPE_9__ {size_t publickey_len; TYPE_2__ parent; void* payload; int sign_callback; struct TYPE_9__* publickey; struct TYPE_9__* username; } ;
typedef TYPE_1__ git_cred_ssh_custom ;
typedef int git_cred_sign_cb ;
typedef TYPE_2__ git_cred ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (size_t) ;
 TYPE_1__* FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*,char const*,size_t) ;
 int VAR_1 ;

int FUNC_6(
 git_cred **VAR_2,
 const char *VAR_3,
 const char *VAR_4,
 size_t VAR_5,
 git_cred_sign_cb VAR_6,
 void *VAR_7)
{
 git_cred_ssh_custom *VAR_8;

 FUNC_1(VAR_3 && VAR_2);

 VAR_8 = FUNC_2(1, sizeof(git_cred_ssh_custom));
 FUNC_0(VAR_8);

 VAR_8->parent.credtype = VAR_0;
 VAR_8->parent.free = VAR_1;

 VAR_8->username = FUNC_4(VAR_3);
 FUNC_0(VAR_8->username);

 if (VAR_5 > 0) {
  VAR_8->publickey = FUNC_3(VAR_5);
  FUNC_0(VAR_8->publickey);

  FUNC_5(VAR_8->publickey, VAR_4, VAR_5);
 }

 VAR_8->publickey_len = VAR_5;
 VAR_8->sign_callback = VAR_6;
 VAR_8->payload = VAR_7;

 *VAR_2 = &VAR_8->parent;
 return 0;
}
