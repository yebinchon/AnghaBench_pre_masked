
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {struct connection* next; } ;
struct conn_target {struct connection* last_conn; struct connection* first_conn; int outbound_connections; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct connection*) ;

struct connection *FUNC_1 (struct conn_target *VAR_1) {
  struct connection *VAR_2;
  if (!VAR_1->outbound_connections) {
    return 0;
  }
  VAR_2 = VAR_1->first_conn;
  while (1) {
    if (FUNC_0 (VAR_2) == VAR_0) {
      return VAR_2;
    }
    if (VAR_2 == VAR_1->last_conn) { break;}
    VAR_2 = VAR_2->next;
  }
  return 0;
}
