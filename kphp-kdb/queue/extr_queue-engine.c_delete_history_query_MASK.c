
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int generation; scalar_t__ pending_queries; } ;
struct conn_query {int req_generation; struct connection* requester; scalar_t__ extra; } ;


 int VAR_0 ;
 int FUNC_0 (struct conn_query*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,struct conn_query*,struct connection*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (struct conn_query*,int) ;

int FUNC_6 (struct conn_query *VAR_5) {
  if (VAR_4 > 1) {
    FUNC_2 (VAR_2, "delete_history_query (%p,%p)\n", VAR_5, VAR_5->requester);
  }

  char *VAR_6 = (char *)VAR_5->extra;
  FUNC_3 (VAR_6);
  VAR_3 -= FUNC_4 (VAR_6) + 1;
  FUNC_1 (VAR_6);

  VAR_1--;
  struct connection *VAR_7 = VAR_5->requester;

  int VAR_8 = VAR_5->req_generation;
  FUNC_0 (VAR_5);

  if (VAR_7->generation == VAR_8) {
    VAR_7->generation = ++VAR_0;
    VAR_7->pending_queries = 0;
  }
  FUNC_5 (VAR_5, sizeof (*VAR_5));
  return 0;
}
