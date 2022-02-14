
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int transaction_id; scalar_t__ status; } ;
typedef TYPE_1__ transaction_t ;
struct lev_copyexec_main_transaction_status {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct lev_copyexec_main_transaction_status* FUNC_0 (scalar_t__,int const,int ) ;
 int FUNC_1 (char*,int ,int const) ;

__attribute__((used)) static struct lev_copyexec_main_transaction_status *FUNC_2 (transaction_t *VAR_1) {
  const int VAR_2 = sizeof (struct lev_copyexec_main_transaction_status);
  struct lev_copyexec_main_transaction_status *VAR_3 = FUNC_0 (VAR_0 + VAR_1->status, VAR_2, VAR_1->transaction_id);
  char *VAR_4 = (char *) VAR_3;
  FUNC_1 (VAR_4 + 8, 0, VAR_2 - 8);
  return VAR_3;
}
