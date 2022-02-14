
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct conn_query {TYPE_1__* outbound; } ;
struct TYPE_2__ {int fd; int unreliability; } ;


 int FUNC_0 (struct conn_query*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,struct conn_query*,TYPE_1__*,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_2 (struct conn_query *VAR_3) {
  if (VAR_2 > 0) {
    FUNC_1 (VAR_1, "query %p of connection %p (fd=%d) timed out, unreliability=%d\n", VAR_3, VAR_3->outbound, VAR_3->outbound->fd, VAR_3->outbound->unreliability);
  }
  VAR_0++;
  FUNC_0 (VAR_3);
  return 0;
}
