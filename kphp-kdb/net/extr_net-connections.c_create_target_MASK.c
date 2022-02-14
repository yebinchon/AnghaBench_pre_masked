
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct conn_target {int refcnt; struct conn_query* last_query; struct conn_query* first_query; struct connection* last_conn; struct connection* first_conn; int reconnect_timeout; int max_connections; int min_connections; int type; int port; int target_ipv6; TYPE_1__ target; } ;
struct conn_query {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct conn_target* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct conn_target** FUNC_1 (TYPE_1__,int ,int ) ;
 struct conn_target** FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct conn_target*,struct conn_target*,int) ;

struct conn_target *FUNC_4 (struct conn_target *VAR_3, int *VAR_4) {
  struct conn_target **VAR_5 =
    VAR_3->target.s_addr ?
    FUNC_1 (VAR_3->target, VAR_3->port, VAR_3->type) :
    FUNC_2 (VAR_3->target_ipv6, VAR_3->port, VAR_3->type);
  struct conn_target *VAR_6 = *VAR_5;
  if (VAR_6) {
    FUNC_0 (VAR_6->refcnt >= 0);
    VAR_6->min_connections = VAR_3->min_connections;
    VAR_6->max_connections = VAR_3->max_connections;
    VAR_6->reconnect_timeout = VAR_3->reconnect_timeout;
    VAR_6->refcnt++;
    if (VAR_4) {
      *VAR_4 = 0;
    }
  } else {
    FUNC_0 (VAR_2 < VAR_0);
    VAR_6 = *VAR_5 = &VAR_1[VAR_2++];
    FUNC_3 (VAR_6, VAR_3, sizeof (*VAR_3));
    VAR_6->first_conn = VAR_6->last_conn = (struct connection *) VAR_6;
    VAR_6->first_query = VAR_6->last_query = (struct conn_query *) VAR_6;
    VAR_6->refcnt = 1;
    if (VAR_4) {
      *VAR_4 = 1;
    }
  }
  return VAR_6;
}
