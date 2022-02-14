
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {scalar_t__ generation; int queries_ok; int unreliability; struct conn_query* first_query; } ;
struct conn_query {scalar_t__ req_generation; struct connection* requester; } ;
struct TYPE_2__ {int complete_count; } ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (struct conn_query*) ;
 int FUNC_3 (struct conn_query*,int) ;

int FUNC_4 (struct connection *VAR_1, int VAR_2) {
  struct conn_query *VAR_3 = VAR_1->first_query;
  struct connection *VAR_4 = VAR_1->first_query->requester;
  FUNC_1 (VAR_4);
  if (VAR_4->generation == VAR_1->first_query->req_generation) {
    VAR_4->queries_ok += VAR_2;
    FUNC_0(VAR_4)->complete_count++;
  }
  VAR_0--;
  VAR_1->unreliability >>= 1;
  FUNC_2 (VAR_3);
  FUNC_3 (VAR_3, sizeof (*VAR_3));
  return 0;
}
