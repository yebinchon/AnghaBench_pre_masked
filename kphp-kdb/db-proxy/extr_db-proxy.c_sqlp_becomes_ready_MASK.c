
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {TYPE_1__* target; } ;
struct conn_query {scalar_t__ req_generation; TYPE_2__* requester; } ;
struct TYPE_4__ {scalar_t__ generation; int queries_ok; } ;
struct TYPE_3__ {struct conn_query* first_query; } ;


 int FUNC_0 (struct conn_query*) ;
 int VAR_0 ;
 int FUNC_1 (struct conn_query*,int) ;

int FUNC_2 (struct connection *VAR_1) {
  struct conn_query *VAR_2;

  while (VAR_1->target->first_query != (struct conn_query *)(VAR_1->target)) {
    VAR_2 = VAR_1->target->first_query;

    if (VAR_2->requester->generation == VAR_2->req_generation) {

      VAR_2->requester->queries_ok++;
      VAR_0--;
      FUNC_0 (VAR_2);
      FUNC_1 (VAR_2, sizeof (*VAR_2));
      break;
    } else {
      VAR_0--;
      FUNC_0 (VAR_2);
      FUNC_1 (VAR_2, sizeof (*VAR_2));
    }
  }
  return 0;
}
