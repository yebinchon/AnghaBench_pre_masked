
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct connection {TYPE_1__* target; void* last_response_time; void* last_query_sent_time; } ;
struct conn_query {scalar_t__ req_generation; scalar_t__ extra; TYPE_2__* requester; } ;
struct TYPE_9__ {TYPE_3__* func; } ;
typedef TYPE_4__ net_send_ansgen_t ;
typedef int net_ansgen_t ;
struct TYPE_8__ {int (* send_and_finish ) (TYPE_4__*,struct connection*) ;} ;
struct TYPE_7__ {scalar_t__ generation; int queries_ok; } ;
struct TYPE_6__ {struct conn_query* first_query; } ;


 int FUNC_0 (struct conn_query*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct conn_query*) ;
 int FUNC_3 (struct conn_query*) ;
 void* VAR_0 ;
 int FUNC_4 (TYPE_4__*,struct connection*) ;
 int FUNC_5 (struct conn_query*,int) ;

int FUNC_6 (struct connection *VAR_1) {

  VAR_1->last_query_sent_time = VAR_0;
  VAR_1->last_response_time = VAR_0;

  struct conn_query *VAR_2;
  FUNC_1 (VAR_1 != ((void*)0), "...");
  FUNC_1 (VAR_1->target != ((void*)0), "...");

  while (VAR_1->target->first_query != (struct conn_query *)(VAR_1->target)) {
    VAR_2 = VAR_1->target->first_query;
    FUNC_1 (VAR_2 != ((void*)0), "...");
    FUNC_1 (VAR_2->requester != ((void*)0), "...");

    if (VAR_2->requester != ((void*)0) && VAR_2->requester->generation == VAR_2->req_generation) {
      VAR_2->requester->queries_ok++;

      net_ansgen_t *VAR_3 = (net_ansgen_t *)VAR_2->extra;

      net_send_ansgen_t *VAR_4 = (net_send_ansgen_t *)VAR_3;
      VAR_4->func->send_and_finish (VAR_4, VAR_1);

      FUNC_2 (VAR_2);
      FUNC_3 (VAR_2);
      break;
    } else {

      FUNC_0 (VAR_2);
      FUNC_5 (VAR_2, sizeof (*VAR_2));
    }
  }
  return 0;
}
