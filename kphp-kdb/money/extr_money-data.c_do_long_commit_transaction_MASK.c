
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; int temp_id; int declared_date; int transaction_id; } ;
typedef TYPE_1__ transaction_t ;
struct lev_money_trans_commit {int temp_id; int transaction_id; } ;
typedef scalar_t__ money_auth_code_t ;


 int VAR_0 ;
 struct lev_money_trans_commit* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct lev_money_trans_commit*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (long long) ;
 int FUNC_7 (char*,char*,int ,int ,int ) ;
 scalar_t__ VAR_1 ;

int FUNC_8 (long long VAR_2, money_auth_code_t VAR_3, char VAR_4[256]) {
  money_auth_code_t VAR_5[2];
  transaction_t *VAR_6 = FUNC_6 (VAR_2);
  if (!VAR_6) {
    return 0;
  }
  if (VAR_6->status != VAR_1) {
    return -1;
  }
  FUNC_4 (VAR_6, VAR_5);
  if (VAR_3 != VAR_5[0]) {
    return -1;
  }
  int VAR_7 = FUNC_2 (VAR_6);
  if (VAR_7 < 0) {
    return VAR_7;
  }
  struct lev_money_trans_commit *VAR_8 = FUNC_0 (VAR_0, sizeof (struct lev_money_trans_commit), -2);

  VAR_8->temp_id = -2;
  VAR_8->transaction_id = VAR_6->transaction_id;

  FUNC_1 (FUNC_3 (VAR_8) == 1);

  FUNC_7 (VAR_4, "%16llx_%08x%08x", VAR_6->transaction_id, VAR_6->declared_date, VAR_6->temp_id);

  FUNC_5 (0);

  return 1;
}
