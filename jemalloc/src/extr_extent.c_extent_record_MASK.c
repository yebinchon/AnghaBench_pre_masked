
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_14__ {int mtx; int delay_coalesce; } ;
typedef TYPE_1__ eset_t ;
struct TYPE_15__ {TYPE_1__ eset_dirty; } ;
typedef TYPE_2__ arena_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int **,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_2__*,int **) ;
 int FUNC_6 (int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int *,TYPE_2__*,int **,int *,TYPE_1__*,int *,int *,int) ;
 int * FUNC_13 (int *,TYPE_2__*,int **,int *,TYPE_1__*,int *,int*,int) ;
 int FUNC_14 (int *) ;
 int VAR_5 ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 scalar_t__ VAR_6 ;
 int * FUNC_17 (int *,int *,int *,uintptr_t,int) ;
 int * FUNC_18 (int *,int *) ;

__attribute__((used)) static void
FUNC_19(tsdn_t *VAR_7, arena_t *VAR_8, extent_hooks_t **VAR_9,
    eset_t *VAR_10, extent_t *VAR_11, bool VAR_12) {
 rtree_ctx_t VAR_13;
 rtree_ctx_t *VAR_14 = FUNC_18(VAR_7, &VAR_13);

 FUNC_1((FUNC_2(VAR_10) != VAR_3 &&
     FUNC_2(VAR_10) != VAR_4) ||
     !FUNC_14(VAR_11));

 FUNC_15(VAR_7, &VAR_10->mtx);
 FUNC_5(VAR_8, VAR_9);

 FUNC_11(VAR_11, VAR_1);
 if (FUNC_8(VAR_11)) {
  FUNC_6(VAR_7, VAR_14, VAR_11);
  FUNC_9(VAR_11, 0);
 }

 FUNC_1(FUNC_17(VAR_7, &VAR_5, VAR_14,
     (uintptr_t)FUNC_3(VAR_11), 1) == VAR_11);

 if (!VAR_10->delay_coalesce) {
  VAR_11 = FUNC_12(VAR_7, VAR_8, VAR_9,
      VAR_14, VAR_10, VAR_11, ((void*)0), VAR_12);
 } else if (FUNC_7(VAR_11) >= VAR_0) {
  FUNC_1(VAR_10 == &VAR_8->eset_dirty);

  bool VAR_15;
  do {
   FUNC_1(FUNC_10(VAR_11) == VAR_2);
   VAR_11 = FUNC_13(VAR_7, VAR_8,
       VAR_9, VAR_14, VAR_10, VAR_11,
       &VAR_15, VAR_12);
  } while (VAR_15);
  if (FUNC_7(VAR_11) >= VAR_6) {

   FUNC_16(VAR_7, &VAR_10->mtx);
   FUNC_0(VAR_7, VAR_8, VAR_9, VAR_11);
   return;
  }
 }
 FUNC_4(VAR_7, VAR_8, VAR_10, VAR_11);

 FUNC_16(VAR_7, &VAR_10->mtx);
}
