
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int transaction_id; } ;
typedef TYPE_1__ transaction_t ;
typedef enum transaction_status { ____Placeholder_transaction_status } transaction_status ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,int,int ) ;

__attribute__((used)) static void FUNC_2 (transaction_t *VAR_1, enum transaction_status VAR_2) {
  if (VAR_1->status == VAR_2) {
    FUNC_1 (1, "transaction_change_status: T->status == status (%d), T->transacion_id: %d\n", VAR_2, VAR_1->transaction_id);
    return;
  }
  if (VAR_1->status != VAR_0) {
    FUNC_0 (VAR_1->status, -1);
  }
  VAR_1->status = VAR_2;
  FUNC_0 (VAR_1->status, 1);
}
