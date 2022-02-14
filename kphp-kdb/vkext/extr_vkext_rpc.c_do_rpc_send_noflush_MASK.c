
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {int qid; } ;
struct rpc_connection {int servers; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rpc_query* FUNC_3 (double) ;
 int FUNC_4 (struct rpc_query*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (struct rpc_connection*,int ,double) ;

struct rpc_query *FUNC_6 (struct rpc_connection *VAR_1, double VAR_2) {
  FUNC_0 (VAR_0);
  FUNC_2 (VAR_0);
  if (!VAR_1 || !VAR_1->servers) {
    FUNC_1 (VAR_0);
    return 0;
  }


  struct rpc_query *VAR_3 = FUNC_3 (VAR_2);
  if (!VAR_3) {
    FUNC_1 (VAR_0);
    return 0;
  }
  if (FUNC_5 (VAR_1, VAR_3->qid, VAR_2) < 0) {

    FUNC_4 (VAR_3);
    FUNC_1 (VAR_0);
    return 0;
  }

  FUNC_1 (VAR_0);
  return VAR_3;
}
