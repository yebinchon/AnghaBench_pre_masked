
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long binlog_pos; scalar_t__ transaction_id; } ;
typedef TYPE_1__ transaction_t ;


 int FUNC_0 (long long) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2 (long long *VAR_1) {
  transaction_t *VAR_2 = FUNC_1 ();
  if (VAR_2) {
    *VAR_1 = VAR_2->binlog_pos;
    VAR_0 = VAR_2->transaction_id - 1;
    FUNC_0 (VAR_2->binlog_pos);
  } else {
    *VAR_1 = 0;
    VAR_0 = 0;
  }
}
