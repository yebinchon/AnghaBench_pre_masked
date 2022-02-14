
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cluster_bucket {TYPE_1__* methods; } ;
struct TYPE_2__ {int (* init_store ) (struct rpc_cluster_bucket*,void*,long long) ;void* (* get_conn ) (struct rpc_cluster_bucket*) ;} ;


 void* FUNC_0 (struct rpc_cluster_bucket*) ;
 int FUNC_1 (struct rpc_cluster_bucket*,void*,long long) ;

int FUNC_2 (struct rpc_cluster_bucket *VAR_0, long long VAR_1) {
  void *VAR_2 = VAR_0->methods->get_conn (VAR_0);
  if (!VAR_2) {
    return 0;
  } else {
    VAR_0->methods->init_store (VAR_0, VAR_2, VAR_1);
    return 1;
  }
}
