
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {long long qid; } ;
struct rpc_connection {int dummy; } ;


 int FUNC_0 () ;
 struct rpc_query* FUNC_1 (struct rpc_connection*,double) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int) ;

long long FUNC_4 (struct rpc_connection *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, double VAR_8) {
  FUNC_0 ();

  FUNC_2 (VAR_7);
  FUNC_3 (VAR_1, VAR_2);
  FUNC_2 (VAR_5);
  FUNC_2 (VAR_6);
  FUNC_3 (VAR_3, VAR_4);
  struct rpc_query *VAR_9;
  if (!(VAR_9 = FUNC_1 (VAR_0, VAR_8))) {
    return -1;
  }
  return VAR_9->qid;
}
