
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {scalar_t__ generation; struct conn_query* first_query; } ;
struct conn_query {scalar_t__ req_generation; struct conn_query* next; scalar_t__ extra; struct connection* requester; } ;


 int FUNC_0 (struct conn_query*) ;

int FUNC_1 (struct connection *VAR_0, struct conn_query *VAR_1) {
  struct connection *VAR_2 = VAR_1->requester;
  struct conn_query *VAR_3 = VAR_2->first_query;
  if (VAR_2->generation != VAR_1->req_generation) {
    return 0;
  }
  while (VAR_3 != (struct conn_query*)VAR_2) {
    FUNC_0 (VAR_3);
    if (VAR_3 == (struct conn_query *)(VAR_1->extra)) {
      return 1;
    }
    VAR_3 = VAR_3->next;
  }
  return 0;
}
