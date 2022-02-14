
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef scalar_t__ pszind_t ;
typedef int extent_t ;
typedef scalar_t__ extent_split_interior_result_t ;
struct TYPE_23__ {void* (* alloc ) (TYPE_1__*,int *,size_t,size_t,int*,int*,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
struct TYPE_24__ {scalar_t__ extent_grow_next; scalar_t__ retain_grow_limit; int extent_grow_mtx; int eset_retained; } ;
typedef TYPE_2__ arena_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,TYPE_2__*,int *,size_t) ;
 int * FUNC_5 (int *,TYPE_2__*) ;
 void* FUNC_6 (int *,TYPE_2__*,int *,size_t,size_t,int*,int*) ;
 void* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,TYPE_2__*,TYPE_1__**,int *,int ,size_t,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_2__*,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_2__*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_15 (int *,int ,void*,size_t,int,int ,int ,int ,int,int,int,int ) ;
 int FUNC_16 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int *,TYPE_2__*,TYPE_1__**,int *,int *,int) ;
 scalar_t__ FUNC_19 (int *,int *) ;
 size_t FUNC_20 (int *) ;
 int FUNC_21 (int *,int) ;
 scalar_t__ FUNC_22 (int *,TYPE_2__*,TYPE_1__**,int *,int **,int **,int **,int **,int **,int *,size_t,size_t,size_t,int,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,TYPE_2__*,TYPE_1__**,int *,int *,int) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (void*,int ,size_t) ;
 scalar_t__ FUNC_29 (void*,size_t) ;
 void* FUNC_30 (TYPE_1__*,int *,size_t,size_t,int*,int*,int ) ;
 size_t FUNC_31 (scalar_t__) ;
 scalar_t__ FUNC_32 (int ) ;
 int * FUNC_33 (int *,int *) ;

__attribute__((used)) static extent_t *
FUNC_34(tsdn_t *VAR_9, arena_t *VAR_10,
    extent_hooks_t **VAR_11, size_t VAR_12, size_t VAR_13, size_t VAR_14,
    bool VAR_15, szind_t VAR_16, bool *VAR_17, bool *VAR_18) {
 FUNC_26(VAR_9, &VAR_10->extent_grow_mtx);
 FUNC_3(VAR_13 == 0 || !VAR_15);
 FUNC_3(!*VAR_17 || !VAR_15);

 size_t VAR_19 = VAR_12 + VAR_13;
 size_t VAR_20 = VAR_19 + FUNC_0(VAR_14) - VAR_1;

 if (VAR_20 < VAR_19) {
  goto label_err;
 }




 pszind_t VAR_21 = 0;
 size_t VAR_22 = FUNC_31(VAR_10->extent_grow_next + VAR_21);
 while (VAR_22 < VAR_20) {
  VAR_21++;
  if (VAR_10->extent_grow_next + VAR_21 >=
      FUNC_32(VAR_2)) {

   goto label_err;
  }
  VAR_22 = FUNC_31(VAR_10->extent_grow_next + VAR_21);
 }

 extent_t *VAR_23 = FUNC_5(VAR_9, VAR_10);
 if (VAR_23 == ((void*)0)) {
  goto label_err;
 }
 bool VAR_24 = 0;
 bool VAR_25 = 0;

 void *VAR_26;
 if (*VAR_11 == &VAR_5) {
  VAR_26 = FUNC_6(VAR_9, VAR_10, ((void*)0),
      VAR_22, VAR_1, &VAR_24, &VAR_25);
 } else {
  FUNC_14(VAR_9, VAR_10);
  VAR_26 = (*VAR_11)->alloc(*VAR_11, ((void*)0),
      VAR_22, VAR_1, &VAR_24, &VAR_25,
      FUNC_2(VAR_10));
  FUNC_13(VAR_9);
 }

 FUNC_15(VAR_23, FUNC_2(VAR_10), VAR_26, VAR_22, 0,
     VAR_3, FUNC_1(VAR_10), VAR_8, VAR_24,
     VAR_25, 1, VAR_0);
 if (VAR_26 == ((void*)0)) {
  FUNC_10(VAR_9, VAR_10, VAR_23);
  goto label_err;
 }

 if (FUNC_19(VAR_9, VAR_23)) {
  FUNC_10(VAR_9, VAR_10, VAR_23);
  goto label_err;
 }

 if (FUNC_23(VAR_23) && FUNC_9(VAR_23)) {
  *VAR_17 = 1;
 }
 if (FUNC_9(VAR_23)) {
  *VAR_18 = 1;
 }

 rtree_ctx_t VAR_27;
 rtree_ctx_t *VAR_28 = FUNC_33(VAR_9, &VAR_27);

 extent_t *VAR_29;
 extent_t *VAR_30;
 extent_t *VAR_31;
 extent_t *VAR_32;
 extent_split_interior_result_t VAR_33 = FUNC_22(
     VAR_9, VAR_10, VAR_11, VAR_28, &VAR_23, &VAR_29, &VAR_30,
     &VAR_31, &VAR_32, ((void*)0), VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
     1);

 if (VAR_33 == VAR_7) {
  if (VAR_29 != ((void*)0)) {
   FUNC_18(VAR_9, VAR_10, VAR_11,
       &VAR_10->eset_retained, VAR_29, 1);
  }
  if (VAR_30 != ((void*)0)) {
   FUNC_18(VAR_9, VAR_10, VAR_11,
       &VAR_10->eset_retained, VAR_30, 1);
  }
 } else {




  FUNC_3(VAR_33 == VAR_6);
  if (VAR_32 != ((void*)0)) {
   if (VAR_4) {
    FUNC_12(VAR_9, VAR_32);
   }
   FUNC_18(VAR_9, VAR_10, VAR_11,
       &VAR_10->eset_retained, VAR_32, 1);
  }
  if (VAR_31 != ((void*)0)) {
   FUNC_11(VAR_9, VAR_31);
   FUNC_25(VAR_9, VAR_10, VAR_11,
       &VAR_10->eset_retained, VAR_31, 1);
  }
  goto label_err;
 }

 if (*VAR_18 && !FUNC_9(VAR_23)) {
  if (FUNC_8(VAR_9, VAR_10, VAR_11, VAR_23, 0,
      FUNC_20(VAR_23), 1)) {
   FUNC_18(VAR_9, VAR_10, VAR_11,
       &VAR_10->eset_retained, VAR_23, 1);
   goto label_err;
  }
  if (!FUNC_17(VAR_10)) {
   FUNC_24(VAR_23, 1);
  }
 }





 if (VAR_10->extent_grow_next + VAR_21 + 1 <=
     VAR_10->retain_grow_limit) {
  VAR_10->extent_grow_next += VAR_21 + 1;
 } else {
  VAR_10->extent_grow_next = VAR_10->retain_grow_limit;
 }

 FUNC_27(VAR_9, &VAR_10->extent_grow_mtx);

 if (VAR_4) {

  FUNC_12(VAR_9, VAR_23);
 }
 if (VAR_13 != 0) {
  FUNC_4(VAR_9, VAR_10, VAR_23, VAR_14);
 }
 if (VAR_15) {
  rtree_ctx_t VAR_34;
  rtree_ctx_t *VAR_35 = FUNC_33(VAR_9,
      &VAR_34);

  FUNC_21(VAR_23, 1);
  FUNC_16(VAR_9, VAR_35, VAR_23, VAR_16);
 }
 if (*VAR_17 && !FUNC_23(VAR_23)) {
  void *VAR_36 = FUNC_7(VAR_23);
  size_t VAR_37 = FUNC_20(VAR_23);
  if (FUNC_17(VAR_10) ||
      FUNC_29(VAR_36, VAR_37)) {
   FUNC_28(VAR_36, 0, VAR_37);
  }
 }

 return VAR_23;
label_err:
 FUNC_27(VAR_9, &VAR_10->extent_grow_mtx);
 return ((void*)0);
}
