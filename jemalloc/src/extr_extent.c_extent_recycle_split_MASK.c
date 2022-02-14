
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
typedef scalar_t__ extent_split_interior_result_t ;
typedef int extent_hooks_t ;
typedef int eset_t ;
typedef int arena_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *,void*,int) ;
 scalar_t__ FUNC_6 (int *,int *,int **,int *,int **,int **,int **,int **,int **,void*,size_t,size_t,size_t,int,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *,int *,int **,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 () ;

__attribute__((used)) static extent_t *
FUNC_9(tsdn_t *VAR_4, arena_t *VAR_5,
    extent_hooks_t **VAR_6, rtree_ctx_t *VAR_7, eset_t *VAR_8,
    void *VAR_9, size_t VAR_10, size_t VAR_11, size_t VAR_12, bool VAR_13,
    szind_t VAR_14, extent_t *VAR_15, bool VAR_16) {
 extent_t *VAR_17;
 extent_t *VAR_18;
 extent_t *VAR_19;
 extent_t *VAR_20;

 extent_split_interior_result_t VAR_21 = FUNC_6(
     VAR_4, VAR_5, VAR_6, VAR_7, &VAR_15, &VAR_17, &VAR_18,
     &VAR_19, &VAR_20, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
     VAR_16);

 if (!VAR_2 && VAR_21 != VAR_1
     && !VAR_3) {




  FUNC_0(VAR_19 != ((void*)0) && VAR_17 == ((void*)0) && VAR_18 == ((void*)0));
  FUNC_2(VAR_4, VAR_5, VAR_8, VAR_19);
  return ((void*)0);
 }

 if (VAR_21 == VAR_1) {
  if (VAR_17 != ((void*)0)) {
   FUNC_2(VAR_4, VAR_5, VAR_8, VAR_17);
  }
  if (VAR_18 != ((void*)0)) {
   FUNC_2(VAR_4, VAR_5, VAR_8, VAR_18);
  }
  return VAR_15;
 } else {




  FUNC_0(VAR_21 == VAR_0);
  if (VAR_20 != ((void*)0)) {
   FUNC_3(VAR_4, VAR_20);
  }
  if (VAR_19 != ((void*)0)) {
   void *VAR_22 = FUNC_1(VAR_19);
   FUNC_4(VAR_4, VAR_19);
   FUNC_7(VAR_4, VAR_5, VAR_6, VAR_8,
       VAR_19, VAR_16);
   FUNC_0(FUNC_5(VAR_4, VAR_7, VAR_22,
       0) == ((void*)0));
  }
  return ((void*)0);
 }
 FUNC_8();
}
