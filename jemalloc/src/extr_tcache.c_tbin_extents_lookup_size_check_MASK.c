
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
typedef int cache_bin_t ;


 int FUNC_0 () ;
 void** FUNC_1 (int *,size_t) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int *,uintptr_t,int,int **,size_t*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(tsdn_t *VAR_1, cache_bin_t *VAR_2, szind_t VAR_3,
    size_t VAR_4, extent_t **VAR_5){
 rtree_ctx_t VAR_6;
 rtree_ctx_t *VAR_7 = FUNC_4(VAR_1, &VAR_6);







 szind_t VAR_8;
 size_t VAR_9 = VAR_3 * VAR_4;
 void **VAR_10 = FUNC_1(VAR_2, VAR_3);
 for (unsigned VAR_11 = 0 ; VAR_11 < VAR_4; VAR_11++) {
  FUNC_2(VAR_1, &VAR_0,
      VAR_7, (uintptr_t)*(VAR_10 - VAR_11), 1,
      &VAR_5[VAR_11], &VAR_8);
  VAR_9 -= VAR_8;
 }
 if (VAR_9 != 0) {
  FUNC_3("<jemalloc>: size mismatch in thread cache "
      "detected, likely caused by sized deallocation bugs by "
      "application. Abort.\n");
  FUNC_0();
 }
}
