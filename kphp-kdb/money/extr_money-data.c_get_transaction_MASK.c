
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long transaction_id; struct TYPE_4__* h_next; } ;
typedef TYPE_1__ transaction_t ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (long long) ;

transaction_t *FUNC_1 (long long VAR_1) {
  int VAR_2 = FUNC_0 (VAR_1);
  transaction_t *VAR_3;

  for (VAR_3 = VAR_0[VAR_2]; VAR_3; VAR_3 = VAR_3->h_next) {
    if (VAR_3->transaction_id == VAR_1) {
      return VAR_3;
    }
  }
  return 0;
}
