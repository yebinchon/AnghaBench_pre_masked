
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ status; int parties; long long created_at; long long long_locked_until; long long long_lock_cancel_timeout; long long ip; char* comment; TYPE_3__* T; TYPE_1__* tr_cancel_peer; } ;
typedef TYPE_4__ transaction_t ;
struct TYPE_12__ {long long acc_id; TYPE_2__* acc_type; int withdraw_code; int access_code; } ;
typedef TYPE_5__ account_t ;
struct TYPE_10__ {long long acc_incr; TYPE_5__* tr_account; } ;
struct TYPE_9__ {long long acc_type_id; long long currency; int withdraw_code; int access_code; } ;
struct TYPE_8__ {long long transaction_id; } ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (char*,char*,int,int ) ;
 TYPE_4__* FUNC_2 (long long) ;
 int FUNC_3 (char*,char*,long long,int) ;
 long long VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_4 (long long VAR_2, int VAR_3, char VAR_4[32], long long *VAR_5, int *VAR_6, char **VAR_7) {
  transaction_t *VAR_8 = FUNC_2 (VAR_2);
  int VAR_9, VAR_10, VAR_11, VAR_12;
  static char VAR_13[128];
  if (!VAR_8) {
    return -1;
  }
  if (VAR_8->status <= VAR_1) {
    return -1;
  }
  VAR_11 = FUNC_3 (VAR_13, "%lld,%d", VAR_2, VAR_3);
  VAR_10 = VAR_8->parties;
  VAR_12 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
    account_t *VAR_14 = VAR_8->T[VAR_9].tr_account;
    FUNC_0 (VAR_14);
    if (!VAR_14->access_code
     || FUNC_1 (VAR_4, VAR_13, VAR_11, VAR_14->access_code) || FUNC_1 (VAR_4, VAR_13, VAR_11, VAR_14->withdraw_code)
     || FUNC_1 (VAR_4, VAR_13, VAR_11, VAR_14->acc_type->access_code) || FUNC_1 (VAR_4, VAR_13, VAR_11, VAR_14->acc_type->withdraw_code)) {
      VAR_12 = 1;
      break;
    }
  }
  if (!VAR_12) {
    return -1;
  }
  VAR_5[0] = VAR_0 - VAR_8->status;
  VAR_5[1] = VAR_8->created_at;
  VAR_5[2] = VAR_8->long_locked_until;
  VAR_5[3] = VAR_8->long_lock_cancel_timeout;
  VAR_5[4] = VAR_8->ip;
  VAR_5[5] = VAR_8->tr_cancel_peer ? VAR_8->tr_cancel_peer->transaction_id : 0;
  VAR_5[6] = VAR_5[7] = 0;
  VAR_5 += 8;
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
    VAR_5[0] = VAR_8->T[VAR_9].tr_account->acc_type->acc_type_id;
    VAR_5[1] = VAR_8->T[VAR_9].tr_account->acc_id;
    VAR_5[2] = VAR_8->T[VAR_9].acc_incr;
    VAR_5[3] = VAR_8->T[VAR_9].tr_account->acc_type->currency;
    VAR_5 += 4;
  }
  *VAR_6 = 8 + 4*VAR_10;
  *VAR_7 = VAR_8->comment;

  return VAR_10;
}
