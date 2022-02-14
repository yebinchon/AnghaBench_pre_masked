
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tsd_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
struct TYPE_9__ {int nactive; TYPE_1__* bins; int large_mtx; int large; } ;
typedef TYPE_2__ arena_t ;
struct TYPE_10__ {scalar_t__ szind; int slab; } ;
typedef TYPE_3__ alloc_ctx_t ;
struct TYPE_11__ {unsigned int n_shards; } ;
struct TYPE_8__ {int * bin_shards; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_5__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int VAR_6 ;
 size_t FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int *,void*,size_t,TYPE_3__*) ;
 int FUNC_10 (int ,int *,int *,uintptr_t,int,scalar_t__*,int *) ;
 size_t FUNC_11 (scalar_t__) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void
FUNC_14(tsd_t *VAR_8, arena_t *VAR_9) {
 FUNC_7(FUNC_13(VAR_8), &VAR_9->large_mtx);

 for (extent_t *VAR_10 = FUNC_4(&VAR_9->large); VAR_10 !=
     ((void*)0); VAR_10 = FUNC_4(&VAR_9->large)) {
  void *VAR_11 = FUNC_3(VAR_10);
  size_t VAR_12;

  FUNC_8(FUNC_13(VAR_8), &VAR_9->large_mtx);
  alloc_ctx_t VAR_13;
  rtree_ctx_t *VAR_14 = FUNC_12(VAR_8);
  FUNC_10(FUNC_13(VAR_8), &VAR_6, VAR_14,
      (uintptr_t)VAR_11, 1, &VAR_13.szind, &VAR_13.slab);
  FUNC_1(VAR_13.szind != VAR_2);

  if (VAR_5 || (VAR_4 && VAR_7)) {
   VAR_12 = FUNC_11(VAR_13.szind);
   FUNC_1(VAR_12 == FUNC_5(FUNC_13(VAR_8), VAR_11));
  }

  if (VAR_4 && VAR_7) {
   FUNC_9(VAR_8, VAR_11, VAR_12, &VAR_13);
  }
  FUNC_6(FUNC_13(VAR_8), VAR_10);
  FUNC_7(FUNC_13(VAR_8), &VAR_9->large_mtx);
 }
 FUNC_8(FUNC_13(VAR_8), &VAR_9->large_mtx);


 for (unsigned VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  for (unsigned VAR_16 = 0; VAR_16 < VAR_3[VAR_15].n_shards; VAR_16++) {
   FUNC_0(VAR_8, VAR_9,
       &VAR_9->bins[VAR_15].bin_shards[VAR_16]);
  }
 }

 FUNC_2(&VAR_9->nactive, 0, VAR_0);
}
