
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_7__ {size_t curslabs; size_t curregs; } ;
struct TYPE_8__ {int lock; int slabs_nonfull; int * slabcur; TYPE_2__ stats; } ;
typedef TYPE_3__ bin_t ;
struct TYPE_9__ {TYPE_1__* bins; } ;
typedef TYPE_4__ arena_t ;
struct TYPE_10__ {size_t nregs; } ;
struct TYPE_6__ {TYPE_3__* bin_shards; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (int *) ;
 size_t FUNC_3 (int const*) ;
 unsigned int FUNC_4 (int const*) ;
 int * FUNC_5 (int *) ;
 size_t FUNC_6 (int const*) ;
 size_t FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 size_t FUNC_9 (int const*) ;
 size_t FUNC_10 (int const*) ;
 int * FUNC_11 (int *,void const*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int ) ;

void
FUNC_15(tsdn_t *VAR_4, const void *VAR_5,
    size_t *VAR_6, size_t *VAR_7, size_t *VAR_8,
    size_t *VAR_9, size_t *VAR_10, void **VAR_11) {
 FUNC_0(VAR_5 != ((void*)0) && VAR_6 != ((void*)0) && VAR_7 != ((void*)0) && VAR_8 != ((void*)0)
     && VAR_9 != ((void*)0) && VAR_10 != ((void*)0) && VAR_11 != ((void*)0));

 const extent_t *VAR_12 = FUNC_11(VAR_4, VAR_5);
 if (FUNC_14(VAR_12 == ((void*)0))) {
  *VAR_6 = *VAR_7 = *VAR_8 = *VAR_9 = *VAR_10 = 0;
  *VAR_11 = ((void*)0);
  return;
 }

 *VAR_8 = FUNC_7(VAR_12);
 if (!FUNC_8(VAR_12)) {
  *VAR_6 = *VAR_9 = *VAR_10 = 0;
  *VAR_7 = 1;
  *VAR_11 = ((void*)0);
  return;
 }

 *VAR_6 = FUNC_6(VAR_12);
 const szind_t VAR_13 = FUNC_9(VAR_12);
 *VAR_7 = VAR_2[VAR_13].nregs;
 FUNC_0(*VAR_6 <= *VAR_7);
 FUNC_0(*VAR_6 * FUNC_10(VAR_12) <= *VAR_8);

 const arena_t *VAR_14 = (arena_t *)FUNC_1(
     &VAR_1[FUNC_3(VAR_12)], VAR_0);
 FUNC_0(VAR_14 != ((void*)0));
 const unsigned VAR_15 = FUNC_4(VAR_12);
 bin_t *VAR_16 = &VAR_14->bins[VAR_13].bin_shards[VAR_15];

 FUNC_12(VAR_4, &VAR_16->lock);
 if (VAR_3) {
  *VAR_10 = *VAR_7 * VAR_16->stats.curslabs;
  FUNC_0(*VAR_10 >= VAR_16->stats.curregs);
  *VAR_9 = *VAR_10 - VAR_16->stats.curregs;
 } else {
  *VAR_9 = *VAR_10 = 0;
 }
 extent_t *VAR_17;
 if (VAR_16->slabcur != ((void*)0)) {
  VAR_17 = VAR_16->slabcur;
 } else {
  VAR_17 = FUNC_5(&VAR_16->slabs_nonfull);
 }
 *VAR_11 = VAR_17 != ((void*)0) ? FUNC_2(VAR_17) : ((void*)0);
 FUNC_13(VAR_4, &VAR_16->lock);
}
