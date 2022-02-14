
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {struct connection* next; } ;
struct conn_target {struct connection* first_conn; } ;
struct TYPE_2__ {int (* flush_query ) (struct connection*) ;} ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*) ;

void FUNC_2 (struct conn_target *VAR_0) {
  struct connection *VAR_1;
  if (!VAR_0) {
    return;
  }
  for (VAR_1 = VAR_0->first_conn; VAR_1 != (struct connection *)VAR_0; VAR_1 = VAR_1->next) {
    FUNC_0 (VAR_1)->flush_query (VAR_1);
  }
}
