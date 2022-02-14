
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int status; scalar_t__ pending_queries; scalar_t__ generation; } ;
struct conn_query_functions {int dummy; } ;
struct aio_connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aio_connection*,struct connection*,double,struct conn_query_functions*) ;
 int FUNC_1 (int ,char*,struct aio_connection*,struct connection*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2 (struct aio_connection *VAR_4, struct connection *VAR_5, double VAR_6, struct conn_query_functions *VAR_7) {
  if (VAR_3 > 1) {
    FUNC_1 (VAR_2, "in conn_schedule_aio(%p,%p)\n", VAR_4, VAR_5);
  }

  VAR_5->generation = ++VAR_0;
  VAR_5->pending_queries = 0;
  FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7);
  VAR_5->status = VAR_1;

  return -1;
}
