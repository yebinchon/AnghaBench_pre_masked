
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_cluster_bucket {TYPE_2__* methods; } ;
struct TYPE_4__ {int * fun_pos; } ;
struct TYPE_6__ {TYPE_1__ methods; } ;
struct TYPE_5__ {int (* get_actor ) (struct rpc_cluster_bucket*) ;void* (* get_conn ) (struct rpc_cluster_bucket*) ;} ;


 TYPE_3__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,void**) ;
 int FUNC_1 (struct rpc_cluster_bucket*) ;
 int FUNC_2 (struct rpc_cluster_bucket*,void*,int ,long long,int) ;
 void* FUNC_3 (struct rpc_cluster_bucket*) ;
 int FUNC_4 (struct rpc_cluster_bucket*) ;
 int FUNC_5 () ;

int FUNC_6 (struct rpc_cluster_bucket *VAR_2, long long VAR_3) {
  FUNC_1 (VAR_2);
  if (!FUNC_5 ()) {
    void *VAR_4 = VAR_2->methods->get_conn (VAR_2);
    if (!VAR_4) {
      void *VAR_5[2];
      VAR_5[0] = VAR_2;
      VAR_5[1] = &VAR_3;
      return FUNC_0(VAR_0->methods.fun_pos[VAR_1], VAR_5);
    } else {
      FUNC_2 (VAR_2, VAR_4, VAR_2->methods->get_actor (VAR_2), VAR_3, 1);
      return 0;
    }
  } else {
    return -1;
  }
}
