
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {int dummy; } ;
struct hash_elem_rpc_query {struct rpc_query* x; } ;


 struct hash_elem_rpc_query* FUNC_0 (int *,void*) ;
 int VAR_0 ;

struct rpc_query *FUNC_1 (long long VAR_1) {
  struct hash_elem_rpc_query *VAR_2 = FUNC_0 (&VAR_0, (void *)&VAR_1);
  return VAR_2 ? VAR_2->x : 0;
}
