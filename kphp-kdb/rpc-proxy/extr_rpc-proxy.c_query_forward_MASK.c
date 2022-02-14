
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_cluster_bucket {int dummy; } ;
struct TYPE_6__ {int (* forward_target ) (struct rpc_cluster_bucket*,long long) ;} ;
struct TYPE_8__ {TYPE_2__ methods; } ;
struct TYPE_7__ {TYPE_1__* h; } ;
struct TYPE_5__ {int qid; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int (*) (struct rpc_cluster_bucket*,long long)) ;
 long long FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_cluster_bucket*,long long) ;

int FUNC_3 (struct rpc_cluster_bucket VAR_2) {
  FUNC_0 (VAR_0->methods.forward_target);
  long long VAR_3 = FUNC_1 (VAR_1->h->qid);
  return VAR_0->methods.forward_target (&VAR_2, VAR_3);
}
