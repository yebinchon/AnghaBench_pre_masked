
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {scalar_t__ generation; int queries_ok; int unreliability; } ;
struct conn_query {scalar_t__ req_generation; struct connection* requester; struct connection* outbound; } ;
struct TYPE_2__ {int complete_count; } ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (struct conn_query*) ;
 int FUNC_3 (struct conn_query*,int) ;

int FUNC_4 (struct conn_query *VAR_1, int VAR_2) {
  struct connection *VAR_3 = VAR_1->outbound;
  struct connection *VAR_4 = VAR_1->requester;
  FUNC_1 (VAR_4);
  FUNC_1 (VAR_3);
  if (VAR_4->generation == VAR_1->req_generation) {
    VAR_4->queries_ok += VAR_2;
    FUNC_0(VAR_4)->complete_count++;
  }
  VAR_0--;
  VAR_3->unreliability >>= 1;
  FUNC_2 (VAR_1);
  FUNC_3 (VAR_1, sizeof (*VAR_1));
  return 0;
}
