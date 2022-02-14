
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
typedef int extent_split_interior_result_t ;
typedef int extent_hooks_t ;
typedef int arena_t ;


 uintptr_t FUNC_0 (uintptr_t,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *,int **,int *,size_t,int ,int,size_t,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *,int ) ;
 int VAR_5 ;
 int FUNC_9 (int *,int *,int *,uintptr_t,int ,int) ;

__attribute__((used)) static extent_split_interior_result_t
FUNC_10(tsdn_t *VAR_6, arena_t *VAR_7,
    extent_hooks_t **VAR_8, rtree_ctx_t *VAR_9,

    extent_t **VAR_10, extent_t **VAR_11, extent_t **VAR_12,

    extent_t **VAR_13, extent_t **VAR_14,
    void *VAR_15, size_t VAR_16, size_t VAR_17, size_t VAR_18, bool VAR_19,
    szind_t VAR_20, bool VAR_21) {
 size_t VAR_22 = VAR_16 + VAR_17;
 size_t VAR_23 = FUNC_0((uintptr_t)FUNC_4(*VAR_10),
     FUNC_1(VAR_18)) - (uintptr_t)FUNC_4(*VAR_10);
 FUNC_2(VAR_15 == ((void*)0) || VAR_23 == 0);
 if (FUNC_6(*VAR_10) < VAR_23 + VAR_22) {
  return VAR_2;
 }
 size_t VAR_24 = FUNC_6(*VAR_10) - VAR_23 - VAR_22;

 *VAR_11 = ((void*)0);
 *VAR_12 = ((void*)0);
 *VAR_13 = ((void*)0);
 *VAR_14 = ((void*)0);


 if (VAR_23 != 0) {
  *VAR_11 = *VAR_10;
  *VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_8,
      *VAR_11, VAR_23, VAR_1, 0, VAR_22 + VAR_24, VAR_20,
      VAR_19, VAR_21);
  if (*VAR_10 == ((void*)0)) {
   *VAR_13 = *VAR_11;
   *VAR_11 = ((void*)0);
   return VAR_3;
  }
 }


 if (VAR_24 != 0) {
  *VAR_12 = FUNC_7(VAR_6, VAR_7, VAR_8, *VAR_10,
      VAR_22, VAR_20, VAR_19, VAR_24, VAR_1, 0,
      VAR_21);
  if (*VAR_12 == ((void*)0)) {
   *VAR_13 = *VAR_10;
   *VAR_14 = *VAR_11;
   *VAR_11 = ((void*)0);
   *VAR_10 = ((void*)0);
   return VAR_3;
  }
 }

 if (VAR_23 == 0 && VAR_24 == 0) {




  FUNC_8(*VAR_10, VAR_20);
  if (VAR_20 != VAR_1) {
   FUNC_9(VAR_6, &VAR_5, VAR_9,
       (uintptr_t)FUNC_3(*VAR_10), VAR_20, VAR_19);
   if (VAR_19 && FUNC_6(*VAR_10) > VAR_0) {
    FUNC_9(VAR_6, &VAR_5,
        VAR_9,
        (uintptr_t)FUNC_5(*VAR_10) -
        (uintptr_t)VAR_0, VAR_20, VAR_19);
   }
  }
 }

 return VAR_4;
}
