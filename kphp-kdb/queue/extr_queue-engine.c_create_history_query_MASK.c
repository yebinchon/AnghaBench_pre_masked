
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct connection {int fd; } ;
struct TYPE_6__ {scalar_t__ wakeup_time; } ;
struct conn_query {scalar_t__ start_time; TYPE_1__ timer; int * cq_type; int extra; struct connection* requester; struct connection* outbound; scalar_t__ custom_type; } ;
struct TYPE_7__ {char* name; } ;
typedef TYPE_2__ queue ;
struct TYPE_8__ {char* name; } ;
typedef TYPE_3__ qkey ;
struct TYPE_9__ {scalar_t__ extra; } ;


 TYPE_5__* FUNC_0 (struct connection*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (struct conn_query*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_4 ;
 struct conn_query* FUNC_6 (int) ;

int FUNC_7 (queue *VAR_5, struct connection *VAR_6, double VAR_7,
                          struct conn_query **VAR_8, char *VAR_9) {
  struct conn_query *VAR_10 = FUNC_6 (sizeof (struct conn_query));

  if (VAR_4 > 1) {
    FUNC_2 (VAR_2, "OPPA\n");
    FUNC_2 (VAR_2, "create_history_query (%p[%s], key = %p[%s], %p[%d]): q=%p\n", VAR_5, VAR_5->name,
    ((qkey *)FUNC_0 (VAR_6)->extra)->name, ((qkey *)FUNC_0 (VAR_6)->extra)->name,
    VAR_6, VAR_6->fd, VAR_10);
  }

  VAR_10->custom_type = 0;
  VAR_10->outbound = (struct connection *) VAR_5;
  VAR_10->requester = VAR_6;
  VAR_10->start_time = FUNC_4();
  VAR_3 += FUNC_5 (VAR_9) + 1;
  VAR_10->extra = FUNC_1 (VAR_9);

  VAR_10->cq_type = &VAR_0;
  VAR_10->timer.wakeup_time = (VAR_7 > 0 ? VAR_10->start_time + VAR_7 : 0);

  VAR_1++;
  FUNC_3 (VAR_10);

  if (VAR_4 > 1) {
    FUNC_2 (VAR_2, "after insert_conn_query()\n");
  }
  *VAR_8 = VAR_10;

  return 1;
}
