
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {int qid; } ;
struct process_id {int port; int ip; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct connection* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct connection*,int ) ;

void FUNC_4 (struct rpc_query *VAR_2, struct process_id *VAR_3) {
  VAR_1 ++;
  struct connection *VAR_4 = FUNC_0 (FUNC_1 (VAR_3->ip, VAR_3->port), 0);
  if (!VAR_4) { return; }
  FUNC_3 (VAR_4, VAR_2->qid);
  FUNC_2 (VAR_0);
}
