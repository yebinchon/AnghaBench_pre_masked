
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
typedef int eset_t ;
typedef int arena_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *,int *,size_t) ;
 void* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int **,int *,int ,size_t,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int **,int *,int *,int) ;
 int * FUNC_8 (int *,int *,int **,int *,int *,void*,size_t,size_t,size_t,int,int) ;
 int * FUNC_9 (int *,int *,int **,int *,int *,void*,size_t,size_t,size_t,int,int ,int *,int) ;
 size_t FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (void*,int ,size_t) ;
 scalar_t__ FUNC_16 (void*,size_t) ;
 int * FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ,int) ;

__attribute__((used)) static extent_t *
FUNC_20(tsdn_t *VAR_4, arena_t *VAR_5, extent_hooks_t **VAR_6,
    eset_t *VAR_7, void *VAR_8, size_t VAR_9, size_t VAR_10,
    size_t VAR_11, bool VAR_12, szind_t VAR_13, bool *VAR_14, bool *VAR_15,
    bool VAR_16) {
 FUNC_19(FUNC_18(VAR_4),
     VAR_1, VAR_16 ? 1 : 0);
 FUNC_0(VAR_8 == ((void*)0) || !VAR_12);
 FUNC_0(VAR_10 == 0 || !VAR_12);
 FUNC_0(!*VAR_14 || !VAR_12);

 rtree_ctx_t VAR_17;
 rtree_ctx_t *VAR_18 = FUNC_17(VAR_4, &VAR_17);

 extent_t *VAR_19 = FUNC_8(VAR_4, VAR_5, VAR_6,
     VAR_18, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
     VAR_16);
 if (VAR_19 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_19 = FUNC_9(VAR_4, VAR_5, VAR_6, VAR_18,
     VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_19,
     VAR_16);
 if (VAR_19 == ((void*)0)) {
  return ((void*)0);
 }

 if (*VAR_15 && !FUNC_4(VAR_19)) {
  if (FUNC_3(VAR_4, VAR_5, VAR_6, VAR_19,
      0, FUNC_10(VAR_19), VAR_16)) {
   FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_19, VAR_16);
   return ((void*)0);
  }
  if (!FUNC_6(VAR_5)) {
   FUNC_14(VAR_19, 1);
  }
 }

 if (FUNC_4(VAR_19)) {
  *VAR_15 = 1;
 }
 if (FUNC_13(VAR_19)) {
  *VAR_14 = 1;
 }

 if (VAR_10 != 0) {
  FUNC_1(VAR_4, VAR_5, VAR_19, VAR_11);
 }
 FUNC_0(FUNC_12(VAR_19) == VAR_3);
 if (VAR_12) {
  FUNC_11(VAR_19, VAR_12);
  FUNC_5(VAR_4, VAR_18, VAR_19, VAR_13);
 }

 if (*VAR_14) {
  void *VAR_20 = FUNC_2(VAR_19);
  if (!FUNC_13(VAR_19)) {
   size_t VAR_21 = FUNC_10(VAR_19);
   if (FUNC_6(VAR_5) ||
       FUNC_16(VAR_20, VAR_21)) {
    FUNC_15(VAR_20, 0, VAR_21);
   }
  } else if (VAR_2) {
   size_t *VAR_22 = (size_t *)(uintptr_t)VAR_20;

   for (size_t VAR_23 = 0; VAR_23 < VAR_0 / sizeof(size_t); VAR_23++) {
    FUNC_0(VAR_22[VAR_23] == 0);
   }
  }
 }
 return VAR_19;
}
