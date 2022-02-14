
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {long long acc_id; TYPE_1__* acc_type; struct TYPE_6__* h_next; } ;
typedef TYPE_2__ account_t ;
struct TYPE_5__ {int acc_type_id; } ;


 TYPE_2__** VAR_0 ;
 int FUNC_0 (int,long long) ;

account_t *FUNC_1 (int VAR_1, long long VAR_2) {
  int VAR_3 = FUNC_0 (VAR_1, VAR_2);
  account_t *VAR_4;

  for (VAR_4 = VAR_0[VAR_3]; VAR_4; VAR_4 = VAR_4->h_next) {
    if (VAR_2 == VAR_4->acc_id && VAR_1 == VAR_4->acc_type->acc_type_id) {
      return VAR_4;
    }
  }
  return 0;
}
