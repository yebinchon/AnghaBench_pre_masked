
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {int wakeup_time; } ;
struct conn_query {TYPE_1__ timer; int * cq_type; TYPE_2__* requester; struct connection* outbound; scalar_t__ custom_type; } ;
struct TYPE_7__ {int paused; int state; TYPE_2__* conn; int finish_time; int req_id; scalar_t__ terminate_flag; } ;
typedef TYPE_3__ php_worker ;
struct TYPE_6__ {int status; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct conn_query*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*,int ) ;
 struct conn_query* FUNC_3 (int) ;

void FUNC_4 (php_worker *VAR_6) {

  if (VAR_6->terminate_flag) {
    VAR_6->state = VAR_4;
    return;
  }

  if (VAR_3) {
    FUNC_2 (2, "php script [req_id = %016llx] is waiting\n", VAR_6->req_id);

    struct conn_query *VAR_7 = FUNC_3 (sizeof (struct conn_query));

    VAR_7->custom_type = 0;
    VAR_7->outbound = (struct connection *)&VAR_2;
    FUNC_0 (VAR_6->conn != ((void*)0));
    VAR_7->requester = VAR_6->conn;

    VAR_7->cq_type = &VAR_1;
    VAR_7->timer.wakeup_time = VAR_6->finish_time;

    FUNC_1 (VAR_7);

    VAR_6->conn->status = VAR_0;

    VAR_6->paused = 1;
    return;
  }

  VAR_3 = 1;
  VAR_6->state = VAR_5;
}
