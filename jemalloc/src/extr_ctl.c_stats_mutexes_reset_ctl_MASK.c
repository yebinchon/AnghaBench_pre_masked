
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int tsdn_t ;
typedef int tsd_t ;
typedef size_t szind_t ;
struct TYPE_20__ {int lock; } ;
typedef TYPE_8__ bin_t ;
struct TYPE_17__ {int mtx; } ;
struct TYPE_16__ {int mtx; } ;
struct TYPE_15__ {int mtx; } ;
struct TYPE_14__ {int mtx; } ;
struct TYPE_13__ {int mtx; } ;
struct TYPE_21__ {TYPE_7__* bins; TYPE_6__* base; int tcache_ql_mtx; TYPE_5__ decay_muzzy; TYPE_4__ decay_dirty; TYPE_3__ eset_retained; TYPE_2__ eset_muzzy; TYPE_1__ eset_dirty; int extent_avail_mtx; int large_mtx; } ;
typedef TYPE_9__ arena_t ;
struct TYPE_19__ {TYPE_8__* bin_shards; } ;
struct TYPE_18__ {int mtx; } ;
struct TYPE_12__ {unsigned int n_shards; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 TYPE_9__* FUNC_1 (int *,unsigned int,int) ;
 int VAR_2 ;
 TYPE_10__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_2 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(tsd_t *VAR_12, const size_t *VAR_13,
    size_t VAR_14, void *VAR_15, size_t *VAR_16,
    void *VAR_17, size_t VAR_18) {
 if (!VAR_6) {
  return VAR_0;
 }

 tsdn_t *VAR_19 = FUNC_3(VAR_12);







 FUNC_0(VAR_19, &VAR_7); FUNC_0(VAR_19, &VAR_7); FUNC_0(VAR_19, &VAR_7);;
 if (VAR_8) {
  FUNC_0(VAR_19, &VAR_2); FUNC_0(VAR_19, &VAR_2); FUNC_0(VAR_19, &VAR_2);;
 }
 if (VAR_5 && VAR_9) {
  FUNC_0(VAR_19, &VAR_4); FUNC_0(VAR_19, &VAR_4); FUNC_0(VAR_19, &VAR_4);;
  FUNC_0(VAR_19, &VAR_11); FUNC_0(VAR_19, &VAR_11); FUNC_0(VAR_19, &VAR_11);;
  FUNC_0(VAR_19, &VAR_10); FUNC_0(VAR_19, &VAR_10); FUNC_0(VAR_19, &VAR_10);;
 }



 unsigned VAR_20 = FUNC_2();

 for (unsigned VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  arena_t *VAR_22 = FUNC_1(VAR_19, VAR_21, 0);
  if (!VAR_22) {
   continue;
  }
  FUNC_0(VAR_19, &VAR_22->large_mtx); FUNC_0(VAR_19, &VAR_22->large_mtx); FUNC_0(VAR_19, &VAR_22->large_mtx);;
  FUNC_0(VAR_19, &VAR_22->extent_avail_mtx); FUNC_0(VAR_19, &VAR_22->extent_avail_mtx); FUNC_0(VAR_19, &VAR_22->extent_avail_mtx);;
  FUNC_0(VAR_19, &VAR_22->eset_dirty.mtx); FUNC_0(VAR_19, &VAR_22->eset_dirty.mtx); FUNC_0(VAR_19, &VAR_22->eset_dirty.mtx);;
  FUNC_0(VAR_19, &VAR_22->eset_muzzy.mtx); FUNC_0(VAR_19, &VAR_22->eset_muzzy.mtx); FUNC_0(VAR_19, &VAR_22->eset_muzzy.mtx);;
  FUNC_0(VAR_19, &VAR_22->eset_retained.mtx); FUNC_0(VAR_19, &VAR_22->eset_retained.mtx); FUNC_0(VAR_19, &VAR_22->eset_retained.mtx);;
  FUNC_0(VAR_19, &VAR_22->decay_dirty.mtx); FUNC_0(VAR_19, &VAR_22->decay_dirty.mtx); FUNC_0(VAR_19, &VAR_22->decay_dirty.mtx);;
  FUNC_0(VAR_19, &VAR_22->decay_muzzy.mtx); FUNC_0(VAR_19, &VAR_22->decay_muzzy.mtx); FUNC_0(VAR_19, &VAR_22->decay_muzzy.mtx);;
  FUNC_0(VAR_19, &VAR_22->tcache_ql_mtx); FUNC_0(VAR_19, &VAR_22->tcache_ql_mtx); FUNC_0(VAR_19, &VAR_22->tcache_ql_mtx);;
  FUNC_0(VAR_19, &VAR_22->base->mtx); FUNC_0(VAR_19, &VAR_22->base->mtx); FUNC_0(VAR_19, &VAR_22->base->mtx);;

  for (szind_t VAR_23 = 0; VAR_23 < VAR_1; VAR_23++) {
   for (unsigned VAR_24 = 0; VAR_24 < VAR_3[VAR_23].n_shards; VAR_24++) {
    bin_t *VAR_25 = &VAR_22->bins[VAR_23].bin_shards[VAR_24];
    FUNC_0(VAR_19, &VAR_25->lock); FUNC_0(VAR_19, &VAR_25->lock); FUNC_0(VAR_19, &VAR_25->lock);;
   }
  }
 }

 return 0;
}
