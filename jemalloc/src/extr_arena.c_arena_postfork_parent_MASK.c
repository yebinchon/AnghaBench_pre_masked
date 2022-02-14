
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_9__ {int mtx; } ;
struct TYPE_8__ {int mtx; } ;
struct TYPE_10__ {int tcache_ql_mtx; TYPE_3__ decay_muzzy; TYPE_2__ decay_dirty; int extent_grow_mtx; int eset_retained; int eset_muzzy; int eset_dirty; int extent_avail_mtx; int base; int large_mtx; TYPE_1__* bins; } ;
typedef TYPE_4__ arena_t ;
struct TYPE_11__ {unsigned int n_shards; } ;
struct TYPE_7__ {int * bin_shards; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_5__* VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(tsdn_t *VAR_3, arena_t *VAR_4) {
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  for (unsigned VAR_6 = 0; VAR_6 < VAR_1[VAR_5].n_shards; VAR_6++) {
   FUNC_1(VAR_3,
       &VAR_4->bins[VAR_5].bin_shards[VAR_6]);
  }
 }
 FUNC_3(VAR_3, &VAR_4->large_mtx);
 FUNC_0(VAR_3, VAR_4->base);
 FUNC_3(VAR_3, &VAR_4->extent_avail_mtx);
 FUNC_2(VAR_3, &VAR_4->eset_dirty);
 FUNC_2(VAR_3, &VAR_4->eset_muzzy);
 FUNC_2(VAR_3, &VAR_4->eset_retained);
 FUNC_3(VAR_3, &VAR_4->extent_grow_mtx);
 FUNC_3(VAR_3, &VAR_4->decay_dirty.mtx);
 FUNC_3(VAR_3, &VAR_4->decay_muzzy.mtx);
 if (VAR_2) {
  FUNC_3(VAR_3, &VAR_4->tcache_ql_mtx);
 }
}
