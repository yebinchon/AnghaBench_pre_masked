
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct account_type {int withdraw_code; int access_code; int create_code; } ;
typedef int money_auth_code_t ;
struct TYPE_3__ {int withdraw_code; int access_code; } ;
typedef TYPE_1__ account_t ;


 struct account_type** VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int,int) ;
 int FUNC_1 (int ,char*,char*,char*,int,long long,int) ;
 TYPE_1__* FUNC_2 (int,long long) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int VAR_3 ;

money_auth_code_t FUNC_5 (char *VAR_4, char *VAR_5, int VAR_6, long long VAR_7) {
  account_t *VAR_8 = FUNC_2 (VAR_6, VAR_7);
  int VAR_9 = FUNC_4 (VAR_5);
  static char VAR_10[8192];
  if (VAR_3 > 1) {
    FUNC_1 (VAR_2, "check_auth_code: signature='%.32s', signed_string='%s', acc_type=%d, acc_id=%lld, secret=%016x\n", VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 ? VAR_8->withdraw_code : 0);
  }
  if (VAR_9 >= 4096 || (unsigned) VAR_6 > VAR_1) {
    return -1;
  }
  FUNC_3 (VAR_10, VAR_5, VAR_9);
  if (VAR_7 && VAR_8) {
    if (FUNC_0 (VAR_4, VAR_10, VAR_9, VAR_8->withdraw_code)) {
      return VAR_8->withdraw_code;
    }
    if (FUNC_0 (VAR_4, VAR_10, VAR_9, VAR_8->access_code)) {
      return VAR_8->access_code;
    }
  }
  struct account_type *VAR_11 = VAR_0[VAR_6];
  if (!VAR_11) {
    return -1;
  }
  if (FUNC_0 (VAR_4, VAR_10, VAR_9, VAR_11->withdraw_code)) {
    return VAR_11->withdraw_code;
  }
  if (FUNC_0 (VAR_4, VAR_10, VAR_9, VAR_11->access_code)) {
    return VAR_11->access_code;
  }
  if (FUNC_0 (VAR_4, VAR_10, VAR_9, VAR_11->create_code)) {
    return VAR_11->create_code;
  }
  return -1;
}
