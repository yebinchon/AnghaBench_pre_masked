
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct connection {TYPE_1__* target; } ;
struct TYPE_8__ {int wakeup_time; } ;
struct conn_query {scalar_t__ req_generation; TYPE_2__ timer; TYPE_6__* requester; scalar_t__ extra; } ;
struct TYPE_10__ {TYPE_3__* func; } ;
typedef TYPE_4__ sql_ansgen_t ;
typedef int net_ansgen_t ;
struct TYPE_11__ {scalar_t__ generation; int queries_ok; } ;
struct TYPE_9__ {int (* ready ) (TYPE_4__*,struct connection*) ;} ;
struct TYPE_7__ {struct conn_query* first_query; } ;


 int FUNC_0 (TYPE_6__*,struct connection*,int *,int ) ;
 int FUNC_1 (struct conn_query*) ;
 int FUNC_2 (TYPE_4__*,struct connection*) ;
 int FUNC_3 (struct conn_query*,int) ;

int FUNC_4 (struct connection *VAR_0) {
  struct conn_query *VAR_1;


  while (VAR_0->target->first_query != (struct conn_query *)(VAR_0->target)) {
    VAR_1 = VAR_0->target->first_query;

    if (VAR_1->requester != ((void*)0) && VAR_1->requester->generation == VAR_1->req_generation) {

      VAR_1->requester->queries_ok++;


      net_ansgen_t *VAR_2 = (net_ansgen_t *)VAR_1->extra;
      FUNC_0 (VAR_1->requester, VAR_0, VAR_2, VAR_1->timer.wakeup_time);

      FUNC_1 (VAR_1);
      FUNC_3 (VAR_1, sizeof (*VAR_1));

      sql_ansgen_t *VAR_3 = (sql_ansgen_t *)VAR_2;
      VAR_3->func->ready (VAR_3, VAR_0);
      break;
    } else {

      FUNC_1 (VAR_1);
      FUNC_3 (VAR_1, sizeof (*VAR_1));
    }
  }
  return 0;
}
