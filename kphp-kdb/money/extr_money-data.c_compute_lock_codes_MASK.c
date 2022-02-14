
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int long_lock_secret; int transaction_id; } ;
typedef TYPE_1__ transaction_t ;
typedef int money_auth_code_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,void*) ;
 int FUNC_2 (char*,char*,int ,int ) ;

void FUNC_3 (transaction_t *VAR_0, money_auth_code_t VAR_1[2]) {
  static char VAR_2[256];
  FUNC_0 (VAR_0->long_lock_secret > 0);
  int VAR_3 = FUNC_2 (VAR_2, "#Tr%lld\xcc%dXPEH", VAR_0->transaction_id, VAR_0->long_lock_secret);
  FUNC_1 ((unsigned char *) VAR_2, VAR_3, (void *) VAR_1);
  VAR_1[0] ^= VAR_1[1];
}
