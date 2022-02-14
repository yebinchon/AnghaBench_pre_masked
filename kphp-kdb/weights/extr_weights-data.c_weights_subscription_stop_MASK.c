
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ conn_generation; struct connection* c; struct TYPE_4__* next; } ;
typedef TYPE_1__ weights_subscription_t ;
struct connection {scalar_t__ generation; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

int FUNC_1 (struct connection *VAR_1) {
  weights_subscription_t *VAR_2;
  for (VAR_2 = VAR_0.next; VAR_2 != &VAR_0; VAR_2 = VAR_2->next) {
    if (VAR_2->c == VAR_1 && VAR_2->conn_generation == VAR_1->generation) {
      FUNC_0 (VAR_2);
      return 0;
    }
  }
  return -1;
}
