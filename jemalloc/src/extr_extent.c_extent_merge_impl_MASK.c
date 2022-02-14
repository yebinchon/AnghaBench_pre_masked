
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int rtree_leaf_elm_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
struct TYPE_6__ {int (* merge ) (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__) ;} ;
typedef TYPE_1__ extent_hooks_t ;
typedef int arena_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,TYPE_1__**) ;
 TYPE_1__ VAR_2 ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (int *,int *,int *,int,int,int **,int **) ;
 int FUNC_13 (int *,int *,int *,int *,int ,int) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,scalar_t__) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int *,int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int *,int) ;
 int VAR_3 ;
 int FUNC_22 (int *,int *,int *,int *,int ,int) ;
 int FUNC_23 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int * FUNC_24 (int *,int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_27(tsdn_t *VAR_4, arena_t *VAR_5,
    extent_hooks_t **VAR_6, extent_t *VAR_7, extent_t *VAR_8,
    bool VAR_9) {
 FUNC_26(FUNC_25(VAR_4),
     VAR_1, VAR_9 ? 1 : 0);
 FUNC_1(FUNC_3(VAR_7) < FUNC_3(VAR_8));

 FUNC_9(VAR_5, VAR_6);

 if ((*VAR_6)->merge == ((void*)0) || FUNC_6(VAR_7, VAR_8)) {
  return 1;
 }

 bool VAR_10;
 if (*VAR_6 == &VAR_2) {

  VAR_10 = FUNC_11(FUNC_3(VAR_7),
      FUNC_3(VAR_8));
 } else {
  FUNC_8(VAR_4, VAR_5);
  VAR_10 = (*VAR_6)->merge(*VAR_6,
      FUNC_3(VAR_7), FUNC_14(VAR_7), FUNC_3(VAR_8),
      FUNC_14(VAR_8), FUNC_4(VAR_7),
      FUNC_0(VAR_5));
  FUNC_7(VAR_4);
 }

 if (VAR_10) {
  return 1;
 }






 rtree_ctx_t VAR_11;
 rtree_ctx_t *VAR_12 = FUNC_24(VAR_4, &VAR_11);
 rtree_leaf_elm_t *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 FUNC_12(VAR_4, VAR_12, VAR_7, 1, 0, &VAR_13,
     &VAR_14);
 FUNC_12(VAR_4, VAR_12, VAR_8, 1, 0, &VAR_15,
     &VAR_16);

 FUNC_10(VAR_4, VAR_7, VAR_8);

 if (VAR_14 != ((void*)0)) {
  FUNC_22(VAR_4, &VAR_3, VAR_14, ((void*)0),
      VAR_0, 0);
 }
 if (VAR_16 != ((void*)0)) {
  FUNC_22(VAR_4, &VAR_3, VAR_15, ((void*)0),
      VAR_0, 0);
 } else {
  VAR_16 = VAR_15;
 }

 FUNC_15(VAR_7, FUNC_14(VAR_7) + FUNC_14(VAR_8));
 FUNC_18(VAR_7, VAR_0);
 FUNC_17(VAR_7, (FUNC_16(VAR_7) < FUNC_16(VAR_8)) ?
     FUNC_16(VAR_7) : FUNC_16(VAR_8));
 FUNC_21(VAR_7, FUNC_20(VAR_7) && FUNC_20(VAR_8));

 FUNC_13(VAR_4, VAR_13, VAR_16, VAR_7, VAR_0,
     0);

 FUNC_19(VAR_4, VAR_7, VAR_8);





 FUNC_1(FUNC_2(VAR_8) == FUNC_0(VAR_5));
 FUNC_5(VAR_4, VAR_5, VAR_8);

 return 0;
}
