
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cluster_create {int lock; size_t* funs_last; int ** funs; } ;
struct rpc_cluster {int cluster_mode; void** extensions_extra; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;

int FUNC_1 (struct rpc_cluster *VAR_3, struct rpc_cluster_create *VAR_4, int VAR_5, int VAR_6) {
  if (VAR_4->lock & (1 << VAR_0)) {
    return -1;
  }
  VAR_4->lock |= (1 << VAR_0);

  FUNC_0 (VAR_4->funs_last[VAR_0] > 0);
  VAR_4->funs[VAR_0][--VAR_4->funs_last[VAR_0]] = VAR_2;
  VAR_3->extensions_extra[VAR_1] = (void *)(long)VAR_6;
  VAR_3->cluster_mode = VAR_6 + 1;
  return 0;
}
