
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_leaf_elm_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
struct TYPE_6__ {int (* split ) (TYPE_1__*,scalar_t__,size_t,size_t,size_t,int ,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
typedef int arena_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,TYPE_1__**) ;
 TYPE_1__ VAR_2 ;
 int FUNC_11 (int *,int ,void*,size_t,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *,int *,int *,int,int,int **,int **) ;
 int FUNC_14 (int *,int *,int *,int *,int ,int) ;
 size_t FUNC_15 (int *) ;
 int FUNC_16 (int *,size_t) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int *,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_1__*,scalar_t__,size_t,size_t,size_t,int ,int ) ;
 int * FUNC_23 (int *,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,int ,int) ;

__attribute__((used)) static extent_t *
FUNC_26(tsdn_t *VAR_3, arena_t *VAR_4,
    extent_hooks_t **VAR_5, extent_t *VAR_6, size_t VAR_7,
    szind_t VAR_8, bool VAR_9, size_t VAR_10, szind_t VAR_11, bool VAR_12,
    bool VAR_13) {
 FUNC_1(FUNC_15(VAR_6) == VAR_7 + VAR_10);
 FUNC_25(FUNC_24(VAR_3),
     VAR_1, VAR_13 ? 1 : 0);

 FUNC_10(VAR_4, VAR_5);

 if ((*VAR_5)->split == ((void*)0)) {
  return ((void*)0);
 }

 extent_t *VAR_14 = FUNC_3(VAR_3, VAR_4);
 if (VAR_14 == ((void*)0)) {
  goto label_error_a;
 }

 FUNC_11(VAR_14, FUNC_0(VAR_4),
     (void *)((uintptr_t)FUNC_4(VAR_6) + VAR_7), VAR_10,
     VAR_12, VAR_11, FUNC_17(VAR_6), FUNC_18(VAR_6),
     FUNC_21(VAR_6), FUNC_5(VAR_6),
     FUNC_7(VAR_6), VAR_0);

 rtree_ctx_t VAR_15;
 rtree_ctx_t *VAR_16 = FUNC_23(VAR_3, &VAR_15);
 rtree_leaf_elm_t *VAR_17, *VAR_18;
 {
  extent_t VAR_19;

  FUNC_11(&VAR_19, FUNC_0(VAR_4),
      FUNC_2(VAR_6), VAR_7,
      VAR_9, VAR_8, FUNC_17(VAR_6),
      FUNC_18(VAR_6), FUNC_21(VAR_6),
      FUNC_5(VAR_6), FUNC_7(VAR_6),
      VAR_0);

  FUNC_13(VAR_3, VAR_16, &VAR_19, 0,
      1, &VAR_17, &VAR_18);
 }
 rtree_leaf_elm_t *VAR_20, *VAR_21;
 FUNC_13(VAR_3, VAR_16, VAR_14, 0, 1,
     &VAR_20, &VAR_21);

 if (VAR_17 == ((void*)0) || VAR_18 == ((void*)0) || VAR_20 == ((void*)0)
     || VAR_21 == ((void*)0)) {
  goto label_error_b;
 }

 FUNC_12(VAR_3, VAR_6, VAR_14);

 if (*VAR_5 != &VAR_2) {
  FUNC_9(VAR_3, VAR_4);
 }
 bool VAR_22 = (*VAR_5)->split(*VAR_5, FUNC_4(VAR_6),
     VAR_7 + VAR_10, VAR_7, VAR_10, FUNC_5(VAR_6),
     FUNC_0(VAR_4));
 if (*VAR_5 != &VAR_2) {
  FUNC_8(VAR_3);
 }
 if (VAR_22) {
  goto label_error_c;
 }

 FUNC_16(VAR_6, VAR_7);
 FUNC_19(VAR_6, VAR_8);

 FUNC_14(VAR_3, VAR_17, VAR_18, VAR_6,
     VAR_8, VAR_9);
 FUNC_14(VAR_3, VAR_20, VAR_21, VAR_14,
     VAR_11, VAR_12);

 FUNC_20(VAR_3, VAR_6, VAR_14);

 return VAR_14;
label_error_c:
 FUNC_20(VAR_3, VAR_6, VAR_14);
label_error_b:
 FUNC_6(VAR_3, VAR_4, VAR_14);
label_error_a:
 return ((void*)0);
}
