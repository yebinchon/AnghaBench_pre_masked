
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; long long transaction_id; int temp_id; int declared_date; } ;
typedef TYPE_1__ transaction_t ;
struct lev_money_trans_commit {long long transaction_id; int temp_id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct lev_money_trans_commit* FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct lev_money_trans_commit*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 long long FUNC_7 () ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (char*,char*,long long,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_10 (int VAR_3, long long *VAR_4, char VAR_5[256]) {
  transaction_t *VAR_6 = FUNC_8 (VAR_3);
  *VAR_4 = 0;
  *VAR_5 = 0;
  if (!VAR_6) {
    return 0;
  }
  int VAR_7 = FUNC_3 (VAR_6);
  if (VAR_7 < 0) {
    return VAR_7;
  }
  if (VAR_6->status != VAR_1 && VAR_6->status != VAR_2) {
    return -1;
  }
  if (!VAR_6->transaction_id) {
    VAR_6->transaction_id = FUNC_7();
  }

  FUNC_2 (FUNC_5 (VAR_6) == 1);

  struct lev_money_trans_commit *VAR_8 = FUNC_1 (VAR_0, sizeof (struct lev_money_trans_commit), VAR_3);

  VAR_8->temp_id = VAR_6->temp_id;
  VAR_8->transaction_id = VAR_6->transaction_id;

  FUNC_2 (FUNC_4 (VAR_8) == 1);

  FUNC_0 (VAR_6);

  *VAR_4 = VAR_6->transaction_id;

  FUNC_9 (VAR_5, "%16llx_%08x%08x", VAR_6->transaction_id, VAR_6->declared_date, VAR_6->temp_id);

  FUNC_6 (0);

  return 1;
}
