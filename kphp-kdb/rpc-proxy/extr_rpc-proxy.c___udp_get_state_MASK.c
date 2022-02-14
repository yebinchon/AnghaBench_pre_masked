
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {scalar_t__ state; } ;
struct rpc_cluster_bucket {int S; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct udp_target* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;

int FUNC_1 (struct rpc_cluster_bucket *VAR_3) {
  struct udp_target *VAR_4 = FUNC_0 (VAR_3->S);
  if (!VAR_4) { return -1; }
  if (VAR_4->state == VAR_0) {
    return 1;
  } else if (VAR_4->state == VAR_1 || VAR_4->state == VAR_2) {
    return 0;
  } else {
    return -1;
  }
}
