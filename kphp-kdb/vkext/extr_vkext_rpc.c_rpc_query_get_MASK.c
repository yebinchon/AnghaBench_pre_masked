
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {long long qid; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 struct rpc_query* VAR_2 ;

struct rpc_query *FUNC_0 (long long VAR_3) {
  if (VAR_3 < VAR_1) { return 0; }
  struct rpc_query *VAR_4 = &VAR_2[(VAR_3 - VAR_1) & VAR_0];
  return VAR_4->qid == VAR_3 ? VAR_4 : 0;
}
