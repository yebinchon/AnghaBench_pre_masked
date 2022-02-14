
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather_data {scalar_t__ new_key_len; int new_key; } ;
struct connection {scalar_t__ generation; struct conn_query* first_query; } ;
struct conn_query {scalar_t__ req_generation; struct conn_query* next; scalar_t__ extra; struct connection* requester; } ;


 struct gather_data* FUNC_0 (struct conn_query*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

struct conn_query* FUNC_4 (struct connection *VAR_4, const char *VAR_5, int VAR_6) {
  if (!FUNC_2 (VAR_5, VAR_6)) {
    return 0;
  }
  struct conn_query *VAR_7 = VAR_4->first_query;
  while (VAR_7 != (struct conn_query*)VAR_4) {
    struct connection *VAR_8 = VAR_7->requester;
    if (VAR_8->generation != VAR_7->req_generation) {
      VAR_7 = VAR_7->next;
      continue;
    }
    struct conn_query *VAR_9 = (struct conn_query*)VAR_7->extra;
    struct conn_query *VAR_10 = VAR_8->first_query;
    while (VAR_10 != (struct conn_query*)VAR_8) {
      if (VAR_10 == VAR_9) {
        break;
      }
      VAR_10 = VAR_10->next;
    }
    if (VAR_10 == (struct conn_query*)VAR_8) {
      VAR_7 = VAR_7->next;
      continue;
    }
    struct gather_data *VAR_11 = FUNC_0((struct conn_query*)VAR_7->extra);
    if (VAR_11->new_key_len == VAR_1 && !FUNC_3 (VAR_11->new_key, VAR_0, VAR_1)) {
      return VAR_7;
    }
    VAR_7 = VAR_7->next;
  }
  if (VAR_3) {
    FUNC_1 (VAR_2, "No target gather found. Dropping request.\n");
  }
  return 0;
}
