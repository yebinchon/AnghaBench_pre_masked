
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secure_send_extra {int binlog_pos; } ;
struct rpc_query {struct secure_send_extra* extra; } ;


 int FUNC_0 (int ,int) ;
 struct rpc_query* FUNC_1 (long long) ;
 int FUNC_2 (struct rpc_query*) ;

void FUNC_3 (long long VAR_0) {
  struct rpc_query *VAR_1 = FUNC_1 (VAR_0);
  if (!VAR_1) { return; }
  struct secure_send_extra *VAR_2 = VAR_1->extra;
  FUNC_0 (VAR_2->binlog_pos, 1);
  FUNC_2 (VAR_1);
}
