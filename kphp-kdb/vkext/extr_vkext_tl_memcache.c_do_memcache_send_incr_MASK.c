
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {long long qid; } ;
struct rpc_connection {int dummy; } ;


 int FUNC_0 () ;
 struct rpc_query* FUNC_1 (struct rpc_connection*,double) ;
 int FUNC_2 (int) ;
 int FUNC_3 (long long) ;
 int FUNC_4 (char const*,int) ;

long long FUNC_5 (struct rpc_connection *VAR_0, const char *VAR_1, int VAR_2, long long VAR_3, int VAR_4, double VAR_5) {
  FUNC_0 ();

  FUNC_2 (VAR_4);
  FUNC_4 (VAR_1, VAR_2);
  FUNC_3 (VAR_3);
  struct rpc_query *VAR_6;
  if (!(VAR_6 = FUNC_1 (VAR_0, VAR_5))) {
    return -1;
  }
  return VAR_6->qid;
}
