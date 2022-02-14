
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct conn_query {int dummy; } ;
struct TYPE_2__ {struct conn_query* first_query; } ;


 int FUNC_0 (int) ;
 long long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct conn_query*) ;
 int FUNC_2 (int,char*,long long,long long) ;

void FUNC_3 (long long VAR_2) {
  FUNC_2 (2, "got_result [rpc_id = <%lld>], wait for [rpc_id = <%lld>]\n", VAR_2, VAR_0);
  if (VAR_0 != VAR_2) {
    return;
  }

  VAR_0 = -1;

  while (VAR_1.first_query != (struct conn_query *)&VAR_1) {
    struct conn_query *VAR_3 = VAR_1.first_query;
    FUNC_1 (VAR_3);
    FUNC_0 (VAR_1.first_query != VAR_3);
  }
}
