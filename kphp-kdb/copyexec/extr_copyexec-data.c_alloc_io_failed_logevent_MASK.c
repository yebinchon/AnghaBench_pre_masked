
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int result; int mask; int binlog_pos; } ;
typedef TYPE_1__ transaction_t ;
struct lev_copyexec_main_transaction_status {int result; int mask; int binlog_pos; } ;


 struct lev_copyexec_main_transaction_status* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (transaction_t *VAR_1, int VAR_2) {
  if (VAR_2 < 0) {
    VAR_2 *= -1;
  }
  FUNC_1 (VAR_1, VAR_0);
  struct lev_copyexec_main_transaction_status *VAR_3 = FUNC_0 (VAR_1);
  VAR_3->binlog_pos = VAR_1->binlog_pos;
  VAR_3->mask = VAR_1->mask;
  VAR_3->result = VAR_1->result = VAR_2;
}
