
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {long long qid; } ;
struct rpc_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct rpc_query* FUNC_1 (struct rpc_connection*,double) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int) ;

long long FUNC_4 (struct rpc_connection *VAR_1, const char *VAR_2, int VAR_3, double VAR_4) {
  FUNC_0 ();

  FUNC_2 (VAR_0);
  FUNC_3 (VAR_2, VAR_3);
  struct rpc_query *VAR_5;
  if (!(VAR_5 = FUNC_1 (VAR_1, VAR_4))) {
    return -1;
  }
  return VAR_5->qid;
}
